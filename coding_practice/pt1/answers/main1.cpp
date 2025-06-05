// Welcome to your first C++ script! And welcome to your first C++ comment!
// In C++, we use // for single-line comments and /* */ for multi-line comments.

// This script demonstrates basic input and output operations in C++.
// Enough comments for now, time to write 'hello world'!

#include <iostream> // Include the iostream library for input and output operations

int time();

int main() {
    // Output "Hello, World!" to the console
    std::cout << "Hello, World!" << std::endl;
    time(); 
    // Return 0 to indicate successful execution
    return 0;
}
// Note: The std::endl is used to insert a newline character and flush the output buffer.
// To compile this code, pass to the command line:
// g++ main1.cpp -o main1
// To run the compiled program, use the command:
// ./main1

int time() {
    int hour;
    std::cout << "Please enter the hour of the day (0-23): ";
    std::cin >> hour;

    if (hour < 12) {
        std::cout << "good morning" << std::endl;
    } else if (hour < 18) {
        std::cout << "good afternoon" << std::endl;
    } else {
        std::cout << "good evening" << std::endl;
    }
    return 0;
}
