#include <gtest/gtest.h>

#include <percentage-display.h>
#include <mock-percentage-display.h>
#include <composite-percentage-display.h>


TEST(display_composite_suite, basic)
{
    MockPercentageDisplay d1(0.1);
    MockPercentageDisplay d2(0.2);

    CompositePercentageDisplay c{&d1, &d2};

    c.show_percentage(0.7);

    ASSERT_FLOAT_EQ(d1.percentage_shown(), 0.7);
    ASSERT_FLOAT_EQ(d2.percentage_shown(), 0.7);
}
