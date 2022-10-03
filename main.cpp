#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << isDivisibleBy(100, 25) << std::endl;
  std::cout << isPrime(7919) << std::endl;
  std::cout << nextPrime(17) << std::endl;
  std::cout << countPrimes(2, 10) << std::endl;
  std::cout << isTwinPrime(3) << std::endl;
  std::cout << nextTwinPrime(5) << std::endl;
  std::cout << largestTwinPrime(5, 18) << std::endl;
  return 0;
}
