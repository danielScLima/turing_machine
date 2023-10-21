#include "turingachinesamples.h"

TuringachineSamples::TuringachineSamples()
{

}

std::vector<std::vector<std::string>> TuringachineSamples::get_structure_of_debug_sample()
{
    std::vector<std::vector<std::string>> st = {
        //vetor partindo 0
        {
            {'a'}, //vetor chegando no 0
            {'b'}  //vetor chegando no 1
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {}  //vetor chegando no 1
        }
    };

    return st;
}
