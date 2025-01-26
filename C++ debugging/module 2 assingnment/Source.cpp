/*
 * Calculator.cpp
 *
 *  Date: [11/5/2024]
 *  Author: [Kevin Simmons]
 */

#include <iostream>  // Added header to enable input/output operations

using namespace std;

int main()  // Changed 'void main()' to 'int main()' as per C++ standards, main should return int
{
    char statement[100];  // This is not used but left as is if you plan to use it later
    double op1, op2;      // Changed 'int' to 'double' for better precision, especially in division
    char operation;
    char answer = 'Y';    // Fixed initialization to use single quotes for a character, not double quotes

    while (answer == 'Y' || answer == 'y')  // Loop continues if the answer is 'Y' or 'y'
    {
        cout << "Enter expression (e.g., 2 + 2): " << endl;
        cin >> op1 >> operation >> op2;  // Fixed the order: op1 first, then the operator, then op2

        // Fixed the syntax issues and corrected logic for each operation
        if (operation == '+')  // Removed the semicolon to allow the statement to execute properly
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;  // Fixed '>>' to '<<' for output stream
        else if (operation == '-')  // Changed to 'else if' to ensure only one block executes
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        else if (operation == '*')
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;  // Fixed the operator, it should be '*'
        else if (operation == '/')
        {
            if (op2 != 0)  // Added check to avoid division by zero
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
        }
        else
        {
            cout << "Invalid operator. Please use +, -, *, or /." << endl;  // Added error handling for invalid operators
        }

        cout << "Do you wish to evaluate another expression? (Y/N) " << endl;
        cin >> answer;  // Gets the user's input for continuing or not
    }

    cout << "Program Finished." << endl;  // Exit message
    return 0;  // Returning 0 as expected for successful program execution
}
