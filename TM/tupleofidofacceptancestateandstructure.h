#ifndef TUPLEOFIDOFACCEPTANCESTATEANDSTRUCTURE_H
#define TUPLEOFIDOFACCEPTANCESTATEANDSTRUCTURE_H

#include <vector>
#include <Entry.h>
#include <string>

struct TupleOfIdOfAcceptanceStateAndStructure
{
    TupleOfIdOfAcceptanceStateAndStructure
    (
        int idOfAcceptanceState,
        std::vector<std::vector<std::vector<Entry>>> structure,
        std::string nameOfTuringMachine
    )
    {
        this->idOfAcceptanceState = idOfAcceptanceState;
        this->structure = structure;
        this->nameOfTuringMachine = nameOfTuringMachine;
    }

    int idOfAcceptanceState;
    std::vector<std::vector<std::vector<Entry>>> structure;
    std::string nameOfTuringMachine;
};

#endif // TUPLEOFIDOFACCEPTANCESTATEANDSTRUCTURE_H
