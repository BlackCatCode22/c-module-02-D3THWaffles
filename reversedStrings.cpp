#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Declare a string to store the user's input
    std::string userInput;

    // Prompt the user for input
    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, userInput);

    // Reverse the string using the std::reverse function
    std::reverse(userInput.begin(), userInput.end());

    // Output the reversed string
    std::cout << "Reversed string: " << userInput << std::endl;

    return 0;
}
