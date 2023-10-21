#include <QCoreApplication>

#include <turingachinesamples.h>
#include <turingmachine.h>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    TuringMachine tm(true);
    PairOfIdOfAcceptanceStateAndStructure p = TuringachineSamples::get_structure_of_debug_sample();
    tm.configure_sample(p.idOfAcceptanceState, p.structure);

    //tm.is_this_input_string_in_the_language_with_message("aab"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("aaac"); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("c"); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("cb"); //This must be accepted
    tm.is_this_input_string_in_the_language_with_message("cbbbb"); //This must NOT be accepted

    //return a.exec();
    return 0;
}
