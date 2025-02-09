#include <iostream>
#include <vector>
#include <cmath>

int main() {
    
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12) {
        std::cout << "Your name can't be over 12 Characters!";
    }
    else {
        std::cout << "Hello " << name;
    }
    return 0;
} 