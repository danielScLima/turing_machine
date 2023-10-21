#ifndef TURINGACHINESAMPLES_H
#define TURINGACHINESAMPLES_H

#include <vector>
#include <iostream>

using namespace std;

#include <Entry.h>
#include "pairofidofacceptancestateandstructure.h"


class TuringachineSamples
{
public:
    TuringachineSamples();

    static PairOfIdOfAcceptanceStateAndStructure get_structure_of_debug_sample();
};

#endif // TURINGACHINESAMPLES_H
