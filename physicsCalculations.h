//
// Created by Adam Gutierrez on 10/18/20.
//

#ifndef PHYSICSCALCULATOR_PHYSICSCALCULATIONS_H
#define PHYSICSCALCULATOR_PHYSICSCALCULATIONS_H

#include "physicsHelperFunctions.h"

void velocityCalc();
void accelerationCalc();
void motionVelTimeCalc();
void motionPosTimeCalc();
void motionVelPos1Calc();
void motionVelPos2Calc();
void newtonSecondCalc();

void velocityCalc() {
    double distanceDelta, timeDelta, velocity;
    std::string distanceUnits, timeUnits;

    // Get Input
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    distanceDelta = getChangeInDistance(distanceUnits);
    timeDelta = getChangeInTime(timeUnits);


    // Calculation
    velocity = distanceDelta / timeDelta;

    // Output the input
    std::cout << "You entered: " << std::endl;
    outputChangeInDistance(distanceDelta, distanceUnits);
    outputTimeElapsed(timeDelta, timeUnits);
    std::cout << std::endl;

    // Output the results
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The velocity is " << velocity << " " << distanceUnits;
    std::cout << "/" << timeUnits << "." << std::endl;
}

void accelerationCalc() {

    double velocityDelta, timeDelta, acceleration;
    std::string distanceUnits, timeUnits;

    // Get Input
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    velocityDelta = getChangeInVelocity(distanceUnits, timeUnits);
    timeDelta = getChangeInTime(timeUnits);

    // Calculation
    acceleration = velocityDelta / timeDelta;

    // Output
    std::cout << "You entered: " << std::endl;
    outputChangeInVelocity(velocityDelta, distanceUnits, timeUnits);
    outputTimeElapsed(timeDelta, timeUnits);
    std::cout << std::endl;

    // Output results
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The acceleration is " << acceleration << " " << distanceUnits << "/";
    std::cout << timeUnits << " squared." << std::endl;
}

void motionVelTimeCalc() {
    // v = u + at
    // finalVelocity = initialVelocity + (acceleration * timeDelta)
    double initialVelocity, acceleration, timeDelta, finalVelocity;
    std::string distanceUnits, timeUnits;

    // Get Input
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    initialVelocity = getInitialVelocity(distanceUnits, timeUnits);
    acceleration = getAcceleration(distanceUnits,timeUnits);
    timeDelta = getChangeInTime(timeUnits);

    // Calculation
    finalVelocity = initialVelocity + (acceleration * timeDelta);

    // Output user input
    std::cout << "You entered: " << std::endl;
    outputInitialVelocity(initialVelocity, distanceUnits, timeUnits);
    outputAcceleration(acceleration, distanceUnits, timeUnits);
    outputTimeElapsed(timeDelta, timeUnits);
    std::cout << std::endl;

    // Output calculation results
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The final velocity in " << distanceUnits << "/";
    std::cout << timeUnits << " is: " << finalVelocity << std::endl;

}

void motionPosTimeCalc() {
    // s = s0 + ut + 1/2at^2
    // displacement = "initialPos" + (initialVelocity * time)
    // + .5(acceleration * (time)^2)
    double initialVelocity, timeDelta, acceleration, displacement;

    std::string distanceUnits, timeUnits;

    // Get Input
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    initialVelocity = getInitialVelocity(distanceUnits, timeUnits);
    acceleration = getAcceleration(distanceUnits, timeUnits);
    timeDelta = getChangeInTime(timeUnits);

    // Calculation
    displacement = (initialVelocity * timeDelta) + (.5 * (acceleration * (timeDelta * timeDelta)));

    // Output the input
    std::cout << "You entered: " << std::endl;
    outputInitialVelocity(initialVelocity, distanceUnits, timeUnits);
    outputAcceleration(acceleration, distanceUnits, timeUnits);
    outputTimeElapsed(timeDelta, timeUnits);
    std::cout << std::endl;

    // Output the result
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The displacement from the initial position is: ";
    std::cout << displacement << std::endl;
}

void motionVelPos1Calc() {
    // v2 = v02 + 2a∆s
    double velocitySquared, initialVelocity, acceleration, displacement;
    std::string distanceUnits, timeUnits;

    // Get Input
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    initialVelocity = getInitialVelocity(distanceUnits, timeUnits);
    acceleration = getAcceleration(distanceUnits, timeUnits);
    displacement = getChangeInDistance(distanceUnits);

    // Calculate
    velocitySquared = (initialVelocity * initialVelocity) + 2 * (acceleration * displacement);

    // Output the input
    std::cout << "You entered: " << std::endl;
    outputInitialVelocity(initialVelocity, distanceUnits, timeUnits);
    outputAcceleration(acceleration, distanceUnits, timeUnits);
    outputChangeInDistance(displacement, distanceUnits);
    std::cout << std::endl;

    // Output the result
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "Velocity squared is: " << velocitySquared << std::endl;
}


void motionVelPos2Calc() {
    // v̅ = ½(v + v0)
    double averageVelocity, initialVelocity, finalVelocity;
    std::string distanceUnits, timeUnits;

    // Get input
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    initialVelocity = getInitialVelocity(distanceUnits, timeUnits);
    finalVelocity = getFinalVelocity(distanceUnits, timeUnits);

    // Calculation
    averageVelocity = (initialVelocity + finalVelocity) / 2;

    // Output the input
    std::cout << "You entered: " << std::endl;
    outputInitialVelocity(initialVelocity, distanceUnits, timeUnits);
    outputFinalVelocity(finalVelocity, distanceUnits, timeUnits);
    std::cout << std::endl;

    // Output the result
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The average velocity is " << averageVelocity << std::endl;
}

void newtonSecondCalc() {
    // ∑F = ma
    double forceInNewtons, mass, acceleration;
    std::string distanceUnits, timeUnits, massUnits;

    // Get Input
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    massUnits = getMassUnitOfMeasure();
    acceleration = getAcceleration(distanceUnits, timeUnits);
    mass = getMass(massUnits);

    // Calculation
    forceInNewtons = mass * acceleration;

    // Output the input
    std::cout << "You entered: " << std::endl;
    outputAcceleration(acceleration, distanceUnits, timeUnits);
    outputMass(mass, massUnits);
    std::cout << std::endl;

    // Output the result
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The force is " << forceInNewtons << " " << massUnits;
    std::cout << " " << distanceUnits << "/" << timeUnits << " squared";
}

void weightCalc() {
    // weight = mass * gravity
    double weight, mass, gravity;
    std::string massUnits;

    // Get input
    massUnits = getMassUnitOfMeasure();
    mass = getMass(massUnits);
    gravity = getGravity();

    // Calculations
    weight = mass * gravity;

    // Output the input
    std::cout << "You entered: " << std::endl;
    outputMass(mass, massUnits);
    outputGravity(gravity);
    std::cout << std::endl;

    // Output the result
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The weight is " << weight << " " << massUnits;
    std::cout << std::endl;
}

void momentumCalc() {
    // p = m * v;
    double p, mass, velocity;
    std::string massUnits, distanceUnits, timeUnits;

    // Get Input
    massUnits = getMassUnitOfMeasure();
    distanceUnits = getDistanceUnitOfMeasure();
    timeUnits = getTimeUnitOfMeasure();
    mass = getMass(massUnits);
    velocity = getFinalVelocity(distanceUnits, timeUnits);

    // Calculate
    p = mass * velocity;

    // Output the input
    std::cout << "You entered: " << std::endl;
    outputMass(mass, massUnits);
    outputFinalVelocity(velocity, distanceUnits, timeUnits);
    std::cout << std::endl;

    // Output the result
    std::cout << ("\x1B[32mResult\033[0m\t\t") << std::endl;
    std::cout << ("\x1B[32m------\033[0m\t\t") << std::endl;
    std::cout << "The momentum is " << p << " " << massUnits;
    std::cout << " " << distanceUnits << "/" << timeUnits << std::endl;
}

#endif //PHYSICSCALCULATOR_PHYSICSCALCULATIONS_H
