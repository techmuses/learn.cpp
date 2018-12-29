#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOftwoNumbers;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOftwoNumbers = firstNumber + secondNumber;

    // Prints sum
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOftwoNumbers;

    return 0;
}
