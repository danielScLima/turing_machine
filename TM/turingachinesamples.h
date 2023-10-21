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
};

#endif // TURINGACHINESAMPLES_H
