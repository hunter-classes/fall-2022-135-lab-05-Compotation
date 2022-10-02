#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("task a") {
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 17) == false);
    CHECK(isDivisibleBy(0, 5) == true);
    CHECK(isDivisibleBy(15, 15) == true);
    CHECK(isDivisibleBy(2, 5) == false);
}