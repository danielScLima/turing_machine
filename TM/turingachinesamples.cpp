#include "turingachinesamples.h"
#include <tupleofidofacceptancestateandstructure.h>

TuringachineSamples::TuringachineSamples()
{

}

TupleOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_debug_sample()
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

    return TupleOfIdOfAcceptanceStateAndStructure(1, st, "Demo", 0);
}

TupleOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_q1()
{
    std::vector<std::vector<std::vector<Entry>>> st = {
        //vetor partindo 0
        {
            {}, //vetor chegando no 0
            {Entry('<','<','R')}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('a','X','R')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('Y','Y','R')}, //vetor chegando no 4
            {Entry('>','>','R')}, //vetor chegando no 5
        },

        //vetor partindo do 2
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('a','a','R'),Entry('Y','Y','R')}, //vetor chegando no 2
            {Entry('b','Y','L')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
        },

        //vetor partindo do 3
        {
            {}, //vetor chegando no 0
            {Entry('X','X','R')}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {Entry('a','a','L'),Entry('Y','Y','L')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
        },

        //vetor partindo do 4
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('Y','Y','R')}, //vetor chegando no 4
            {Entry('>','>','R')}, //vetor chegando no 5
        },

        //vetor partindo do 5
        //5 é o de aceitação
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
        }
    };

    return TupleOfIdOfAcceptanceStateAndStructure(5, st, "Question1", 0);
}

TupleOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_q2()
{
    std::vector<std::vector<std::vector<Entry>>> st = {
        //vetor partindo 0
        {
            {}, //vetor chegando no 0
            {Entry('<','<','R')}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('a','X','R')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {Entry('Y','Y','R')}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {Entry('>','>','R')}, //vetor chegando no 7
        },

        //vetor partindo do 2
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('a','a','R'),Entry('Y','Y','R')}, //vetor chegando no 2
            {Entry('b','Y','R')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
        },

        //vetor partindo do 3
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {Entry('b','b','R'),Entry('Z','Z','R')}, //vetor chegando no 3
            {Entry('c','Z','L')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
        },

        //vetor partindo do 4
        {
            {}, //vetor chegando no 0
            {Entry('X','X','R')}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('a','a','L'), Entry('b','b','L'), Entry('Y','Y','L'), Entry('Z','Z','L')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
        },

        //vetor partindo do 5
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {Entry('Y','Y','R')}, //vetor chegando no 5
            {Entry('Z','Z','R')}, //vetor chegando no 6
            {}, //vetor chegando no 7
        },

        //vetor partindo do 6
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {Entry('Z','Z','R')}, //vetor chegando no 6
            {Entry('>','>','R')}, //vetor chegando no 7
        },

        //vetor partindo do 7
        //7 é o de aceitação
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
        }
    };

    return TupleOfIdOfAcceptanceStateAndStructure(7, st, "Question2", 0);
}
