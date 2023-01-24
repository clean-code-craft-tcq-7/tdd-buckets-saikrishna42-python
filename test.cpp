#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "test/catch.hpp"
#include "CurrentRangeMeasurement.hpp"

TEST_CASE("Range of current measurements")

{
  list<int>a={4,5}; 
  //cover inferBreach
  REQUIRE(getRageDetails(a) == "4-5,2\n");
}