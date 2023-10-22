#include <QCoreApplication>

#include <turingachinesamples.h>
#include <turingmachine.h>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    std::string local_url = "C:/Users/Daniel/Documents/GitHub/turing_machine/TM/images";

    TuringMachine tm(true);
    tm.configure_sample(TuringachineSamples::get_structure_of_debug_sample());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("aab"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("aaac"); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("c"); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("cb"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("cbbbb"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("ccccca"); //This must NOT be accepted

    //tm.is_this_input_string_in_the_language_with_message("aab"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("aaac"); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("c"); //This must NOT be accepted
    tm.is_this_input_string_in_the_language_with_message("cb", true); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("cbbbb"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("ccccca", true); //This must NOT be accepted

    //return a.exec();
    return 0;
}
