#ifndef ENTRY_H
#define ENTRY_H

struct Entry
{
    Entry(char symbol_on_ribbon, char symbol_to_write, char movement)
    {
        this->symbol_on_ribbon = symbol_on_ribbon;
        this->symbol_to_write = symbol_to_write;
        this->movement = movement;
    }

    char symbol_on_ribbon;
    char symbol_to_write;
    char movement;
};

#endif // ENTRY_H
