#include <QCoreApplication>

#include <turingachinesamples.h>
#include <turingmachine.h>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    std::string local_url = "C:/Users/Daniel/Documents/GitHub/turing_machine/TM/images";

    TuringMachine tm(true);
    //tm.configure_sample(TuringachineSamples::get_structure_of_debug_sample());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("aab"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("aaac"); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("c"); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("cb"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("cbbbb"); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("ccccca"); //This must NOT be accepted

    //tm.is_this_input_string_in_the_language_with_message("aab", true); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("aaac", true); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("c", true); //This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("cb", true); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("cbbbb", true); //This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("ccccca", true); //This must NOT be accepted

    //Questão 1
    //tm.configure_sample(TuringachineSamples::get_structure_of_q1());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("<ab>", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<aabb>", true); //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<>", true);     //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<aab>", true);  //Ex4: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<abb>", true);  //Ex5: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<a>", true);    //Ex6: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<b>", true);      //Ex7: This must NOT be accepted

    //Questão 2
    //tm.configure_sample(TuringachineSamples::get_structure_of_q2());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("<abc>", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<aabbcc>", true);   //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<>", true);   //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<a>", true);   //Ex4: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<b>", true);   //Ex5: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<c>", true);   //Ex6: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<ab>", true);   //Ex7: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<bc>", true);   //Ex8: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<aabc>", true);   //Ex9: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<abbc>", true);   //Ex10: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<abcc>", true);   //Ex11: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<ac>", true);   //Ex11: This must NOT be accepted

    //Questão 3
    tm.configure_sample(TuringachineSamples::get_structure_of_q3());
    tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("<0#0>", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<1#1>", true);   //Ex2: This must be accepted
    tm.is_this_input_string_in_the_language_with_message("<#>", true);   //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<01#01>", true);   //Ex4: This must be accepted

    //return a.exec();
    return 0;
}
