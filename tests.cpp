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

TEST_CASE("task b") {
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(-7) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(7919) == true);
    CHECK(isPrime(7920) == false);
}

TEST_CASE("task c") {
    CHECK(nextPrime(-10) == 2);
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(7825) == 7829);
}

TEST_CASE("task d") {
    CHECK(countPrimes(-1, 0) == 0);
    CHECK(countPrimes(2, 2) == 1);
    CHECK(countPrimes(1, 2) == 1);
    CHECK(countPrimes(720, 726) == 0);
    CHECK(countPrimes(4660, 4724) == 7);
}

TEST_CASE("task e") {
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(13) == true);
    CHECK(isTwinPrime(0) == false);
    CHECK(isTwinPrime(-10) == false);
    CHECK(isTwinPrime(3117) == false);
    CHECK(isTwinPrime(4517) == true);
}

TEST_CASE("task f") {
    CHECK(nextTwinPrime(20477) == 20479);
    CHECK(nextTwinPrime(20479) == 20507);
    CHECK(nextTwinPrime(1) == 3);
    CHECK(nextTwinPrime(-10) == 3);
    CHECK(nextTwinPrime(17) == 19);
}

TEST_CASE("task g") {
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
    CHECK(largestTwinPrime(-10, -5) == -1);
    CHECK(largestTwinPrime(859, 880) == 859);
}