// Copyright 2025 maximiliano fairman
// All rights reserved
// This program generates a random number between 0 and 9
// and asks the user to guess the number

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::srand(std::time(nullptr));  // random number generator

    // user is asked to guess a number between 0 and 9
    std::cout << "Guess a number between 0 and 9: ";
    int guess;
    std::cin >> guess;

    // generates a random number between 0 and 9
    int secret_number = std::rand() % 10;

    // check if the user's guess is correct
    if (guess == secret_number) {
        std::cout << "You guessed correctly!" << std::endl;
    // if the guess is incorrect
    } else {
        std::cout << "You guessed wrong" << std::endl;
    }
    return 0;
}
