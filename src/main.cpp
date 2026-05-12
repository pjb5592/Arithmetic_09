#include <iostream>
#include <string>
#include "ArithmeticOperations.h"

int main() {
    ArithmeticOperations ao;
    int num1 = 0, num2 = 0;
    int result = 0;
    std::string op;

    std::cout << "첫번째 정수값 >>";
    std::cin >> num1;

    std::cout << "연산자 >>";
    std::cin >> op;

    std::cout << "두번째 정수 값 >>";
    std::cin >> num2;

    std::cout << "================================================" << std::endl;
    std::cout << num1 << " " << op << " " << num2 << "을 계산합니다." << std::endl;
    std::cout << "================================================" << std::endl;

    if (op == "+") {
        result = ao.addition(num1, num2);
        std::cout << num1 << "+" << num2 << "=" << result << "입니다." << std::endl;
    } else if (op == "-") {
        result = ao.subtraction(num1, num2);
        std::cout << num1 << "-" << num2 << "=" << result << "입니다." << std::endl;
    } else if (op == "*") {
        result = ao.multiplication(num1, num2);
        std::cout << num1 << "*" << num2 << "=" << result << "입니다." << std::endl;
    } else if (op == "/") {
        std::cout << "연산의 결과는" << num1 << "/" << num2 << "="
                  << static_cast<float>(ao.division(num1, num2)) << "입니다." << std::endl;
    } else {
        std::cout << "정확하게 정수와 연산자를 입력해주세요." << std::endl;
    }

    return 0;
}
