//
// Created by Adam Gutierrez on 10/17/20.
//
#ifndef PHYSICSCALCULATOR_VALIDATION_H
#define PHYSICSCALCULATOR_VALIDATION_H

#include <string>

int validateInt(int &);
double validateDouble(double &);
char validateChar(char &);
std::string validateString(std::string &);


template <typename T>
T getValidatedInput() {
    T result;
    std::cin >> result;

    // Check if the failbit has been set, meaning the beginning of the input
    // was not type T. Also make sure the result is the only thing in the input
    // stream, otherwise things like 2b would be a valid int.
    if (std::cin.fail() || std::cin.get() != '\n') {
        // Set the error state flag back to goodbit. If you need to get the input
        // again (e.g. this is in a while loop), this is essential. Otherwise, the
        // failbit will stay set.
        std::cin.clear();

        // Clear the input stream using and empty while loop.
        while (std::cin.get() != '\n');

        // Throw an exception. Allows the caller to handle it any way you see fit
        // (exit, ask for input again, etc.)
        throw std::ios_base::failure("Invalid input.");
    }

    return result;
}

double validateDouble(double &doubleInput) {

    while (true) {

        try {
            doubleInput = getValidatedInput<double>();
        }
        catch (std::exception e) {
            std::cerr << e.what() << ": Invalid input."<< std::endl;
            continue;
        }

        break;
    }

    return doubleInput;
}

char validateChar(char &charInput) {
    while (true) {
        std::cout << "Enter a single letter or number (1 digit): ";

        try {
            charInput = getValidatedInput<char>();
        }
        catch (std::exception e) {
            std::cerr << e.what() << ": Invalid input."<< std::endl;
            continue;
        }

        break;
    }

    return charInput;
}

std::string validateString(std::string &stringInput) {
    while (true) {
        //use cin, getline() for this

        // cout << "Enter a word (no spaces): ";

        try {
            stringInput  = getValidatedInput<std::string>();
        }
        catch (std::exception e) {
            std::cerr << e.what() << ": Invalid input."<< std::endl;
            continue;
        }

        break;
    }

    return stringInput;
}


#endif //PHYSICSCALCULATOR_VALIDATION_H
