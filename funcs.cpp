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

int nextPrime(int n) {
    int nextPrime = n+1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }
    return nextPrime;
}

int countPrimes(int a, int b) {
    int numPrimes = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            numPrimes++;
        }
    }
    return numPrimes;
}

bool isTwinPrime(int n) {
    return isPrime(n) && (isPrime(n-2) || isPrime(n+2));
}

int nextTwinPrime(int n) {
    int nextTwinPrime = n+1;
    while(!isTwinPrime(nextTwinPrime)) {
        nextTwinPrime++;
    }
    return nextTwinPrime;
}