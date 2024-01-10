#pragma once

#include "switch.h"

#include <vector>
#include <initializer_list>


class CompositeSwitch : public Switch
{
public:
    CompositeSwitch(std::initializer_list<Switch*> switches)
    : _switches(switches) {}

    void set_state(bool state)
    {
        for (auto s: _switches)
            s->set_state(state);
    }

private:
    std::vector<Switch*> _switches;
};
