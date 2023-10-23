#ifndef TURINGMACHINESAMPLES_H
#define TURINGMACHINESAMPLES_H

#include <vector>
#include <iostream>

using namespace std;

#include <Entry.h>
#include "tupleofidofacceptancestateandstructure.h"


class TuringMachineSamples
{
public:
    TuringMachineSamples();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_debug_sample();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q1();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q2();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q3();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q4();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q5();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q6_part1();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q6_part2();
};

#endif // TURINGMACHINESAMPLES_H
