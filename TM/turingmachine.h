#ifndef TURINGMACHINE_H
#define TURINGMACHINE_H

#include <vector>
#include <iostream>

using namespace std;

class TuringMachine
{
private:
    std::vector<std::vector<std::string>> structure;
    int current_state;
    std::string input;
    int current_index_of_input;
    bool show_debug_messages;

    void reset();
public:
    TuringMachine(bool show_debug_messages = false);

    std::string getTransitionsOfXStateToYState(int x, int y);

    void configureMachineSample(int index_of_sample);

    void configure_sample(const std::vector<std::vector<std::string>>& structure);

    void configure_input_string(const std::string& input);

    void consume_current_symbol();

    bool is_this_input_string_in_the_language(const std::string& input);

    void is_this_input_string_in_the_language_with_message(const std::string &input);
};

#endif // TURINGMACHINE_H
