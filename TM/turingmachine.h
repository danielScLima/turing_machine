#ifndef TURINGMACHINE_H
#define TURINGMACHINE_H

#include <vector>
#include <iostream>
#include <Entry.h>
#include "tupleofidofacceptancestateandstructure.h"

using namespace std;

class TuringMachine
{
private:
    std::vector<std::vector<std::vector<Entry>>> structure;
    int start_state;
    int current_state;
    std::string input;
    int current_index_of_input = -1;
    bool show_debug_messages;
    int id_of_acceptance_state;
    std::string nameOfTuringMachine;

    void reset();

    void write_to_file(const string &url, const string &content);
public:
    TuringMachine(bool show_debug_messages = false);

    std::vector<Entry> getTransitionsOfXStateToYState(int x, int y);

    void configureMachineSample(int index_of_sample);

    void configure_sample(TupleOfIdOfAcceptanceStateAndStructure p);

    void configure_input_string(const std::string& input);

    void consume_current_symbol();

    bool is_this_input_string_in_the_language(const std::string& input, bool make_draw);

    void is_this_input_string_in_the_language_with_message(const std::string &input, bool make_draw=false);

    std::string produce_content_of_draw();

    std::string produce_content_of_draw_considering_input(const string &message, int previous_input_symbol_index);

    void draw_machine(const std::string& local_url, const std::string& url);

    void draw_machine_considering_input
    (
        const std::string& local_url,
        const string &url,
        int index,
        const string &message,
        int previous_input_symbol_index
    );

    std::string getNameOfTuringMachine();
};

#endif // TURINGMACHINE_H
