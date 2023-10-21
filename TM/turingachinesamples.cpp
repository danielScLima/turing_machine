#include "turingachinesamples.h"
#include <pairofidofacceptancestateandstructure.h>

TuringachineSamples::TuringachineSamples()
{

}

PairOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_debug_sample()
{
    std::vector<std::vector<std::vector<Entry>>> st = {
        //vetor partindo 0
        {
            {Entry('a','a','R')}, //vetor chegando no 0
            {Entry('b','b','R')}, //vetor chegando no 1
            {Entry('c','c','R')}, //vetor chegando no 2
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {Entry('b','b','R')}, //vetor chegando no 1
            {}  //vetor chegando no 2
        },

        //vetor partindo do 2
        {
            {}, //vetor chegando no 0
            {Entry('b','b','R')}, //vetor chegando no 1
            {}  //vetor chegando no 2
        }
    };

    return PairOfIdOfAcceptanceStateAndStructure(1, st);
}
