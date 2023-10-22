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

TupleOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_q3()
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
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {Entry('X','X','R'),Entry('Y','Y','R')}, //vetor chegando no 1
            {Entry('0','X','R')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {Entry('1','Y','R')}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {Entry('#','#','R')}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 2
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('1','1','R'),Entry('0','0','R')}, //vetor chegando no 2
            {Entry('#','#','R')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 3
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {Entry('X','X','R'),Entry('Y','Y','R')}, //vetor chegando no 3
            {Entry('0','X','L')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 4
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('X','X','L'), Entry('Y','Y','L')}, //vetor chegando no 4
            {Entry('#','#','L')}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 5
        {
            {}, //vetor chegando no 0
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {Entry('0','0','L'), Entry('1','1','L')}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 6
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {Entry('1','1','R'), Entry('0','0','R')}, //vetor chegando no 6
            {Entry('#','#','R')}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 7
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('1','Y','L')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        },

        //vetor partindo do 8
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 8
            {Entry('>','>','R')}, //vetor chegando no 9
        },

        //vetor partindo do 9
        //9 é o de aceitação
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
        }
    };

    return TupleOfIdOfAcceptanceStateAndStructure(9, st, "Question3", 0);
}

TupleOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_q4()
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
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {Entry('0','0','R'),Entry('1','1','R')}, //vetor chegando no 1
            {Entry('#','#','L')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 2
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('X','X','L'),Entry('Y','Y','L')}, //vetor chegando no 2
            {Entry('0','X','R')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {Entry('1','Y','R')}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {Entry('#','#','R')}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {Entry('<','<','R')}, //vetor chegando no 11
        },

        //vetor partindo do 3
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {Entry('X','X','R'),Entry('Y','Y','R')}, //vetor chegando no 3
            {Entry('#','#','R')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 4
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 4
            {Entry('0','X','L')}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 5
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('#','#','L')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {Entry('X','X','L'), Entry('Y','Y','L')}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 6
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 6
            {Entry('#','#','R')}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 7
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 7
            {Entry('1','Y','L')}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 8
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('#','#','L')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {Entry('X','X','L'), Entry('Y','Y','L')}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 9
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 9
            {Entry('>','>','R')}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 10
        //10 é o de aceitação
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 11
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {Entry('#','#','R')}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 11
        }
    };

    return TupleOfIdOfAcceptanceStateAndStructure(10, st, "Question4", 0);
}

TupleOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_q5()
{
    std::vector<std::vector<std::vector<Entry>>> st = {
        //vetor partindo do 0
        {
            {Entry('X','X','R'),Entry('Y','Y','R')}, //vetor chegando no 0
            {Entry('0','X','R')}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {Entry('1','Y','R')}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {Entry('#','#','R')}, //vetor chegando no 7
            {}, //vetor chegando no 8
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {Entry('1','1','R'),Entry('0','0','R')}, //vetor chegando no 1
            {Entry('#','#','R')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
        },

        //vetor partindo do 2
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('X','X','R'),Entry('Y','Y','R')}, //vetor chegando no 2
            {Entry('0','X','L')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
        },

        //vetor partindo do 3
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {Entry('X','X','L'), Entry('Y','Y','L')}, //vetor chegando no 3
            {Entry('#','#','L')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
        },

        //vetor partindo do 4
        {
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('0','0','L'), Entry('1','1','L')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
        },

        //vetor partindo do 5
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {Entry('1','1','R'), Entry('0','0','R')}, //vetor chegando no 5
            {Entry('#','#','R')}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
        },

        //vetor partindo do 6
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {Entry('1','Y','L')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
        },

        //vetor partindo do 7
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {Entry('X','X','R'), Entry('Y','Y','R')}, //vetor chegando no 7
            {Entry('B','B','R')}, //vetor chegando no 8
        },

        //vetor partindo do 8
        //9 é o de aceitação
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
        }
    };

    return TupleOfIdOfAcceptanceStateAndStructure(8, st, "Question5", 0);
}

TupleOfIdOfAcceptanceStateAndStructure TuringachineSamples::get_structure_of_q6_part1()
{
    std::vector<std::vector<std::vector<Entry>>> st = {
        //vetor partindo 0
        {
            {}, //vetor chegando no 0
            {Entry('0','Z','R'), Entry('1','W','R')}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {Entry('B','0','R')}, //vetor chegando no 11
        },

        //vetor partindo do 1
        {
            {}, //vetor chegando no 0
            {Entry('0','0','R'),Entry('1','1','R')}, //vetor chegando no 1
            {Entry('B','B','L')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 2
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {Entry('1','X','R')}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {Entry('W','X','R')}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {Entry('Z','Y','R')}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {Entry('0','Y','R')}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 3
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {Entry('0','1','L'), Entry('B','1','L')}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 4
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('X','0','L')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 5
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {Entry('0','1','L'), Entry('B','1','L')}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 6
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {Entry('X','0','L')}, //vetor chegando no 11
        },

        //vetor partindo do 7
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {Entry('0','0','L'),Entry('B','0','L')}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 8
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {Entry('Y','0','L')}, //vetor chegando no 11
        },

        //vetor partindo do 9
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {Entry('0','0','L'), Entry('B','0','L')}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 10
        //10 é o de aceitação
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {Entry('Y','0','L')}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        },

        //vetor partindo do 11
        {
            {}, //vetor chegando no 0
            {}, //vetor chegando no 1
            {}, //vetor chegando no 2
            {}, //vetor chegando no 3
            {}, //vetor chegando no 4
            {}, //vetor chegando no 5
            {}, //vetor chegando no 6
            {}, //vetor chegando no 7
            {}, //vetor chegando no 8
            {}, //vetor chegando no 9
            {}, //vetor chegando no 10
            {}, //vetor chegando no 11
        }
    };

    return TupleOfIdOfAcceptanceStateAndStructure(11, st, "Question6Part1", 0);
}
