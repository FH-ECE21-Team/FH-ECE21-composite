#include <gtest/gtest.h>

#include <switch-mock.h>
#include <switch-composite.h>


TEST(switch_composite_suite, basic)
{
    MockSwitch sw1(MockSwitch::State::OFF);
    MockSwitch sw2(MockSwitch::State::OFF);

    CompositeSwitch cs{&sw1, &sw2};

    cs.set_state(true);

    ASSERT_EQ(sw1.state(), MockSwitch::State::ON);
    ASSERT_EQ(sw2.state(), MockSwitch::State::ON);
}
