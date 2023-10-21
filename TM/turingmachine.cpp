#include "turingmachine.h"
#include <algorithm>    // std::find
#include <fstream>

TuringMachine::TuringMachine(bool show_debug_messages)
{
    reset();
    this->show_debug_messages = show_debug_messages;
}

void TuringMachine::reset()
{
    current_state = 0;
    current_index_of_input = -1;
}

std::vector<Entry> TuringMachine::getTransitionsOfXStateToYState(int x, int y)
{
    return this->structure[x][y];
}

void TuringMachine::configureMachineSample(int index_of_sample)
{

}

void TuringMachine::configure_sample
(
    TupleOfIdOfAcceptanceStateAndStructure p
    //int id_of_acceptance_state,
    //const std::vector<std::vector<std::vector<Entry>>> &structure,
    //std::string name
)
{
    this->id_of_acceptance_state = p.idOfAcceptanceState;
    this->structure = p.structure;
    this->nameOfTuringMachine = p.nameOfTuringMachine;
    reset();
}

void TuringMachine::configure_input_string(const std::string& input)
{
    this->input = input;
    reset();
}

void TuringMachine::consume_current_symbol()
{
    char current_char_input = this->input[this->current_index_of_input];

    for(int dest_state_index = 0;dest_state_index < this->structure.size();dest_state_index++)
    {
        std::vector<Entry> entries = getTransitionsOfXStateToYState(
            this->current_state,
            dest_state_index
        );

        //if (this->show_debug_messages)
            //std::cout << "Chars: " << entries << std::endl;

        //if (chars.find(current_char_input) != std::string::npos)

        const auto look_for_char = [current_char_input](const Entry& entry){
            return entry.symbol_on_ribbon == current_char_input;
        };
        const auto find_it = std::find_if(std::begin(entries), std::end(entries), look_for_char);

        if (find_it != entries.end())
        {
            //Encontrou uma transição definida

            //Vai para o seguinte estado: dest_state_index
            this->current_state = dest_state_index;

            //Deve alterar o símbolo atual para: find_it->symbol_to_write
            this->input[this->current_index_of_input] = find_it->symbol_to_write;

            //Deve mover a posição de leitura na entrada de acordo com: find_it->movement
            if (find_it->movement == 'R')
            {
                if ( this->current_index_of_input < (this->input.length()-1) )
                    this->current_index_of_input++;
            }
            else if (find_it->movement == 'L')
            {
                if ( this->current_index_of_input > 0 )
                    this->current_index_of_input--;
            }

            return;
        }
    }

    //Não encontrou uma transição definida
    throw std::exception();
}

bool TuringMachine::is_this_input_string_in_the_language(const std::string& input)
{
    try
    {
        configure_input_string(input);

        this->current_index_of_input = 0;

        while(true)
        {
            if (this->show_debug_messages)
                std::cout << "Processando index " << std::to_string(this->current_index_of_input) << std::endl;
            consume_current_symbol();

            if (this->current_state == this->id_of_acceptance_state)
                return true;
        }
    }
    catch (std::exception ex)
    {
        return false;
    }
}

void TuringMachine::is_this_input_string_in_the_language_with_message(const std::string &input)
{
    bool ret = is_this_input_string_in_the_language(input);

    if (ret)
        std::cout << "The word " << input << " was accepted!!" << std::endl;
    else
        std::cout << "The word " << input << " was NOT accepted!!" << std::endl;
}

std::string TuringMachine::produce_content_of_draw()
{
    std::string content = "digraph G {\n";
    content += "\tsubgraph cluster_1 {\n";
    content += "\t\tnode [style=filled];\n";
    content += "\t\tlabel = \"Turing Machine\"\n"
        "\t\tcolor=blue;\n"
        "\n";

    for (int index = 0; index < this->structure.size(); ++index)
    {
        content += "\t\t"+std::to_string(index)+";\n";
    }

    for (int index = 0; index < this->structure.size(); ++index)
    {
        for (int index2 = 0; index2 < this->structure.size(); ++index2)
        {
            std::vector<Entry> transitions = getTransitionsOfXStateToYState(index, index2);
            for (auto entry: transitions)
            {
                content += "\t\t"+std::to_string(index)+"->"+std::to_string(index2)+
                        "[label=\""+entry.symbol_on_ribbon+"->"+entry.symbol_to_write+","+entry.movement+"\"];\n";
            }
        }
    }

    content += "\t}\n"
        "\n"
        "}";

    return content;
}

void TuringMachine::write_to_file(const string &url, const string &content)
{
    ofstream myfile;
    myfile.open (url);
    myfile << content;
    myfile.close();
}

void TuringMachine::draw_machine(const std::string& local_url, const string &url)
{
    std::string content = produce_content_of_draw();
    write_to_file(local_url+"/file.dot", content);
    std::string command = "dot file.dot -Tpng > "+local_url+"/"+url;
    system(command.c_str());
}

string TuringMachine::getNameOfTuringMachine()
{
    return this->nameOfTuringMachine;
}
