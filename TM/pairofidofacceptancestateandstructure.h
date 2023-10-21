#ifndef PAIROFIDOFACCEPTANCESTATEANDSTRUCTURE_H
#define PAIROFIDOFACCEPTANCESTATEANDSTRUCTURE_H

#include <vector>
#include <Entry.h>

struct PairOfIdOfAcceptanceStateAndStructure
{
    PairOfIdOfAcceptanceStateAndStructure
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

#endif // PAIROFIDOFACCEPTANCESTATEANDSTRUCTURE_H
