#ifndef TURINGACHINESAMPLES_H
#define TURINGACHINESAMPLES_H

#include <vector>
#include <iostream>

using namespace std;

#include <Entry.h>
#include "tupleofidofacceptancestateandstructure.h"


class TuringachineSamples
{
public:
    TuringachineSamples();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_debug_sample();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q1();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q2();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q3();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q4();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q5();

    static TupleOfIdOfAcceptanceStateAndStructure get_structure_of_q6_part1();
};

#endif // TURINGACHINESAMPLES_H
