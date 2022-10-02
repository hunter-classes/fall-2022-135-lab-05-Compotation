#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d) {
    return n % d == 0;
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
