// Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Stack.cpp"


int main()
{
    std::cout << "Hello World!\n";
    Stack myStack;

    int input = 0;
    while (input != -1) {
        std::cout << "Insert numbers to be piled up in our stack" << std::endl;
        std::cin >> input;
        if (input != -1) {
            NodeStack* myNode = new NodeStack();
            myNode->SetValue(input);
            myStack.push(myNode);
        }
    }
    myStack.print();
    myStack.clear();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
