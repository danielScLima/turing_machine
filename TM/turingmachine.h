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
    int current_state;
    std::string input;
    int current_index_of_input;
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

    bool is_this_input_string_in_the_language(const std::string& input);

    void is_this_input_string_in_the_language_with_message(const std::string &input);

    std::string produce_content_of_draw();

    void draw_machine(const std::string& local_url, const std::string& url);

    std::string getNameOfTuringMachine();
};

#endif // TURINGMACHINE_H
