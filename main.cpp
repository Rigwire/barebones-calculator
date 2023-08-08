#include <iostream>
#include "operations.h"


int lvalue;
int rvalue;
char operand;

std::string lvalueString;

int main() 
{

    while (true)
    {

        std::cin >> lvalue;
        std::cin >> operand;


        switch (operand) {
        case '!':
            std::cout << factorial(lvalue) << "\n\n";
            break;

        case '+':
            std::cin >> rvalue;
            std::cout << add(lvalue, rvalue) << "\n\n";
            break;

        case '-':
            std::cin >> rvalue;
            std::cout << subtract(lvalue, rvalue) << "\n\n";
            break;

        case '*':
            std::cin >> rvalue;
            std::cout << multiply(lvalue, rvalue) << "\n\n";
            break;

        case '/':
            std::cin >> rvalue;
            std::cout << divide(lvalue, rvalue) << "\n\n";
            break;

        default:
            std::cerr << "No operator" << '\n';
            break;
        }
    
    }
   
    return 0;
}