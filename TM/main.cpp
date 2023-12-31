#include <QCoreApplication>

#include <turingmachinesamples.h>
#include <turingmachine.h>

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    std::string local_url = "C:/Users/Daniel/Documents/GitHub/turing_machine/TM/images";

    TuringMachine tm(true);
    //tm.configure_sample(TuringMachineSamples::get_structure_of_debug_sample());
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
    //tm.configure_sample(TuringMachineSamples::get_structure_of_q1());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("<ab>", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<aabb>", true); //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<>", true);     //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<aab>", true);  //Ex4: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<abb>", true);  //Ex5: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<a>", true);    //Ex6: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<b>", true);      //Ex7: This must NOT be accepted

    //Questão 2
    //tm.configure_sample(TuringMachineSamples::get_structure_of_q2());
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
    //tm.configure_sample(TuringMachineSamples::get_structure_of_q3());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("<0#0>", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<1#1>", true);   //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<#>", true);   //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<01#01>", true);   //Ex4: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<10#10>", true);   //Ex5: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<0#1>", true);   //Ex6: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<1#0>", true);   //Ex7: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<01#10>", true);   //Ex8: This must NOT be accepted

    //Questão 4
    //tm.configure_sample(TuringMachineSamples::get_structure_of_q4());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("<0#0>", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<1#1>", true);   //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<#>", true);   //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<01#10>", true);   //Ex4: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<10#01>", true);   //Ex5: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("<0#>", true);   //Ex6: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<0#1>", true);   //Ex7: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("<01#1>", true);   //Ex8: This must NOT be accepted

    //Questão 5
    //tm.configure_sample(TuringMachineSamples::get_structure_of_q5());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("0#0BBB", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("1#1BBB", true);   //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("#BBB", true);   //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("01#01BBB", true);   //Ex4: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("10#10BBB", true);   //Ex5: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("0#1BBB", true);   //Ex6: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("1#0BBB", true);   //Ex7: This must NOT be accepted
    //tm.is_this_input_string_in_the_language_with_message("01#10BBB", true);   //Ex8: This must NOT be accepted

    //Questão 6 - parte 1: shift
    //tm.configure_sample(TuringMachineSamples::get_structure_of_q6_part1());
    //tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("0BBB", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("1BBB", true);   //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("00BBB", true);   //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("11BBB", true);   //Ex4: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("01BBB", true);   //Ex5: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("10BBB", true);   //Ex6: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("101BBB", true);   //Ex7: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("BBB", true);   //Ex8: This must be accepted

    //Questão 6 - parte 2: increment after shift
    tm.configure_sample(TuringMachineSamples::get_structure_of_q6_part2());
    tm.draw_machine(local_url, tm.getNameOfTuringMachine()+".png");

    //tm.is_this_input_string_in_the_language_with_message("00BBB", true);   //Ex1: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("01BBB", true);   //Ex2: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("000BBB", true);   //Ex3: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("011BBB", true);   //Ex4: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("001BBB", true);   //Ex5: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("010BBB", true);   //Ex6: This must be accepted
    //tm.is_this_input_string_in_the_language_with_message("0101BBB", true);   //Ex7: This must be accepted
    tm.is_this_input_string_in_the_language_with_message("0BBB", true);   //Ex8: This must be accepted

    //return a.exec();
    return 0;
}
