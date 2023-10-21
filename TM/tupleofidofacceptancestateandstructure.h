#ifndef TUPLEOFIDOFACCEPTANCESTATEANDSTRUCTURE_H
#define TUPLEOFIDOFACCEPTANCESTATEANDSTRUCTURE_H

#include <vector>
#include <Entry.h>

struct TupleOfIdOfAcceptanceStateAndStructure
{
    TupleOfIdOfAcceptanceStateAndStructure
    (
        int idOfAcceptanceState,
        std::vector<std::vector<std::vector<Entry>>> structure
    )
    {
        this->idOfAcceptanceState = idOfAcceptanceState;
        this->structure = structure;
    }

    int idOfAcceptanceState;
    std::vector<std::vector<std::vector<Entry>>> structure;
};

#endif // TUPLEOFIDOFACCEPTANCESTATEANDSTRUCTURE_H
