#include <iostream>

// Function to get an integer from the user
int getAnIntFromTheUser() {
    int userInput;
    std::cout << "Please enter an integer: ";
    std::cin >> userInput;
    return userInput;
}

// Function to compare two integers and return the larger one
int compareTwoInts(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

// Function to sum two integers and return the result
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    // Get two integers from the user
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    // Compare the two integers
    int larger = compareTwoInts(num1, num2);

    // Output the larger integer
    std::cout << "The larger of the two integers is: " << larger << std::endl;

    // Calculate and output the sum of the two integers
    int sum = sumTwoInts(num1, num2);
    std::cout << "The sum of the two integers is: " << sum << std::endl;

    return 0;
}
