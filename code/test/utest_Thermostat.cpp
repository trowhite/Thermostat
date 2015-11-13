#include "../src/Thermostat.h"
#include "gtest/gtest.h"
#include "stdio.h"

TEST(ThermostatTest, Create)
{
  Thermostat thermo;

  EXPECT_EQ(0.0, thermo.GetTemp());
}

TEST(ThermostatTest, SetTemp)
{
  Thermostat thermo;

  thermo.UpdateTemp(10.0);

  EXPECT_EQ(10.0, thermo.GetTemp());
}

int main(int argc, char **argv)
{
  printf("Running main()\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}