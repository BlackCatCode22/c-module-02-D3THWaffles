#include <iostream>

int main() {
    // Declare three integer variables
    int num1, num2, num3;

    // Ask the user to input three integers
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    // Use nested if statements to determine the largest integer
    if (num1 >= num2) {
        if (num1 >= num3) {
            // num1 is the largest
            std::cout << "The largest integer is: " << num1 << std::endl;
        }
        else {
            // num3 is the largest
            std::cout << "The largest integer is: " << num3 << std::endl;
        }
    }
    else {
        if (num2 >= num3) {
            // num2 is the largest
            std::cout << "The largest integer is: " << num2 << std::endl;
        }
        else {
            // num3 is the largest
            std::cout << "The largest integer is: " << num3 << std::endl;
        }
    }

    return 0;
}
