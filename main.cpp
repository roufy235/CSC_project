#include <iostream>
#include "ascii_file.h"

int main() {

    float pi = 3.14;
    int number;
    std::cout << "Please enter a value for number" << std::endl;
    std::cin >> number; // this will receive value from the console
    char name[] = "Bello Abdulrouf";
    bool isLoading = false;

    std::cout << "Hello, World!" << std::endl;
    displayASCII();
    return 0;
}
