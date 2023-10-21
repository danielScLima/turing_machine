#ifndef TURINGACHINESAMPLES_H
#define TURINGACHINESAMPLES_H

#include <vector>
#include <iostream>

using namespace std;

class TuringachineSamples
{
public:
    TuringachineSamples();

    static std::vector<std::vector<std::string>> get_structure_of_debug_sample();
};

#endif // TURINGACHINESAMPLES_H
