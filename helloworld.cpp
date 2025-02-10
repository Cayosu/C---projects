#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

int main() {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout << "************ Number guessing game *************\n";

    do{
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;

        if(guess > num) {
            std::cout << "Your guess was too high!\n";
        }
        else if(guess < num) {
            std::cout << "your guess was too low\n";
        }
        else{
            std::cout << "Correct! number of tries: " << tries << '\n';
        }
        tries++;
    } while(guess != num);

    std::cout << "*************************************";
    return 0;
} 
