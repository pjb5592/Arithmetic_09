#include "../src/ArithmeticOperations.h"
#include <cassert>
#include <iostream>

void testAddition() {
  ArithmeticOperations ao;
  assert(ao.addition(4, 2) == 6);
  std::cout << "testAddition passed" << std::endl;
}

// void testSubtraction() {
//     ArithmeticOperations ao;
//     assert(ao.subtraction(4, 2) == 2);
//     std::cout << "testSubtraction passed" << std::endl;
// }

// void testMultiplication() {
//     ArithmeticOperations ao;
//     assert(ao.multiplication(4, 2) == 8);
//     std::cout << "testMultiplication passed" << std::endl;
// }

// void testDivision() {
//     ArithmeticOperations ao;
//     assert(ao.division(4, 2) == 2);
//     std::cout << "testDivision passed" << std::endl;
// }

int main() {
  testAddition();
  //   testSubtraction();
  //   testMultiplication();
  //   testDivision();
  std::cout << "All tests passed!" << std::endl;
  return 0;
}
