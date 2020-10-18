#include <iostream>
#include <iomanip>
#include "validation.h"
#include "physicsCalculations.h"

void printMainMenuCalc();
char calcSelector();
void motionCalc();

int main() {
    // set program run parameters
    std::setprecision(4);
    bool programIsRunning = true;

    // run program until user inputs exit command
    while (programIsRunning) {
        char menuInput;

        printMainMenuCalc();

        menuInput = calcSelector();

        if (menuInput == 'E' || menuInput == 'e') {
            programIsRunning = false;
        }
    }

    return 0;
}

void printMainMenuCalc() {
    std::cout << "\nMenu" << std::endl;
    std::cout << "-----" << std::endl;
    std::cout << "V: Velocity" << std::endl;
    std::cout << "A: Acceleration" << std::endl;
    std::cout << "M: Motion" << std::endl;
    std::cout << "N: Newton's Second Law" << std::endl;
    std::cout << "O: Momentum" << std::endl;
    std::cout << "W: Weight (Earth)" << std::endl;
    std::cout << "E: To exit" << std::endl;
}

char calcSelector() {
    char selector;

    std::cin >> selector;

    if (selector == 'E' || selector == 'e') {
        std::cout << "Exiting Program...";
    } else if (selector == 'V' || selector == 'v') {
        velocityCalc();
    } else if (selector == 'A' || selector == 'a') {
        accelerationCalc();
    } else if (selector == 'M' || selector == 'm') {
        motionCalc();
    } else if (selector == 'N' || selector == 'n') {
        newtonSecondCalc();
    } else if (selector == 'W' || selector == 'w') {
        weightCalc();
    } else if (selector == 'O' || selector == 'o') {
        momentumCalc();
    } else {
        std::cout << "Error: Please enter one of the menu options to continue.";
        std::cout << std::endl;
    }

    return selector;
}

void motionCalc() {
    bool motionCalcInProgress = true;
    char equationOfMotionSelector;

    while (motionCalcInProgress) {
        std::cout << "Choose the equation of motion you would like to calculate." << std::endl;
        std::cout << "1: Velocity-Time Relation" << std::endl;
        std::cout << "2: Position-Time Relation" << std::endl;
        std::cout << "3: Velocity-Position Relation (Method 1)" << std::endl;
        std::cout << "4: Velocity-Position Relation (Method 2)" << std::endl;

        std::cin >> equationOfMotionSelector;

        if (equationOfMotionSelector == '1') {
            motionVelTimeCalc();
            motionCalcInProgress = false;
        } else if (equationOfMotionSelector == '2') {
            motionPosTimeCalc();
            motionCalcInProgress = false;
        } else if (equationOfMotionSelector == '3') {
            motionVelPos1Calc();
            motionCalcInProgress = false;
        } else if (equationOfMotionSelector == '4') {
            motionVelPos2Calc();
            motionCalcInProgress = false;
        } else {
            std::cout << "Error: Please enter one of the menu options to continue.";
            std::cout << std::endl;
        }
    }
}


// DONE: Velocity
// DONE: Acceleration
// DONE: Motion 1
// DONE: Motion 2
// DONE: Motion 3
// DONE: Motion 4
// DONE: Newton's second law
// DONE: Weight
// DONE: Momentum
// TODO: Add Color
// TODO: Add clear menu option #include system("cls");
// FIXME: calc input validation
// TODO: TEST all calculations