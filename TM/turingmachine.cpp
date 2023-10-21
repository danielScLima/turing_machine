#include "turingmachine.h"
#include <algorithm>    // std::find

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

std::string TuringMachine::getTransitionsOfXStateToYState(int x, int y)
{
    return this->structure[x][y];
}

void TuringMachine::configureMachineSample(int index_of_sample)
{

}

void TuringMachine::configure_sample(const std::vector<std::vector<std::string>> &structure)
{
    this->structure = structure;
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

    for(int dest_state_index = 0;dest_state_index < this->input.size();dest_state_index++)
    {
        std::string chars = getTransitionsOfXStateToYState(
            this->current_state,
            dest_state_index
        );

        if (this->show_debug_messages)
            std::cout << "Chars: " << chars << std::endl;

        if (chars.find(current_char_input) != std::string::npos)
        {
            //Encontrou uma transição definida
            this->current_state = dest_state_index;
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

        for (
             this->current_index_of_input = 0;
             this->current_index_of_input < this->input.size();
             this->current_index_of_input++
        )
        {
            if (this->show_debug_messages)
                std::cout << "Processando index " << std::to_string(this->current_index_of_input) << std::endl;
            consume_current_symbol();
        }

        return true;
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
