#include <QCoreApplication>

#include <turingachinesamples.h>
#include <turingmachine.h>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    TuringMachine tm;
    tm.configure_sample(TuringachineSamples::get_structure_of_debug_sample());

    //tm.is_this_input_string_in_the_language_with_message("aab"); //This must be accepted
    tm.is_this_input_string_in_the_language_with_message("baab"); //This must NOT be accepted

    //return a.exec();
    return 0;
}
