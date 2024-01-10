#pragma once

#include "percentage-display.h"

#include <vector>
#include <initializer_list>


class CompositePercentageDisplay : public PercentageDisplay
{
public:
    CompositePercentageDisplay(std::initializer_list<PercentageDisplay*> displays)
    : _displays(displays) {}

    void show_percentage(double percentage)
    {
        for (auto d: _displays)
            d->show_percentage(percentage);
    }

private:
    std::vector<PercentageDisplay*> _displays;
};
