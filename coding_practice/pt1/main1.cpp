// Welcome to your first C++ script! And welcome to your first C++ comment!
// In C++, we use // for single-line comments and /* */ for multi-line comments.

// This script demonstrates basic input and output operations in C++.
// Enough comments for now, time to write 'hello world'!


#include <iostream> // Include the iostream library for input and output operations

// use int main() with the parameters written inside { } to execute the code

int main() {
    // Output "Hello, World!" to the console
    std::cout << "Hello, World!" << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
// Note: The std::endl is used to insert a newline character and flush the output buffer.
// To compile this code, pass to the command line:
// g++ main1.cpp -o main1
// To run the compiled program, use the command:
// ./main1

// PART TWO:
// After running the above, rewrite the code so that it says either "good morning" or "good evening" based on the time of day.
// Hint: Use the <ctime> library to get the current time and determine whether it's morning or evening.

