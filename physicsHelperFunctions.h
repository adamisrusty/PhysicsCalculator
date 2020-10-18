//
// Created by Adam Gutierrez on 10/18/20.
//

#ifndef PHYSICSCALCULATOR_PHYSICSHELPERFUNCTIONS_H
#define PHYSICSCALCULATOR_PHYSICSHELPERFUNCTIONS_H

// Input Helper Functions
std::string getTimeUnitOfMeasure();
std::string getDistanceUnitOfMeasure();
std::string getMassUnitOfMeasure();
double getChangeInVelocity(const std::string&, const std::string&);
double getChangeInTime(const std::string&);
double getChangeInDistance(const std::string&);
double getMass(const std::string&);
double getGravity();
double getInitialVelocity(const std::string&, const std::string&);
double getFinalVelocity(const std::string&, const std::string&);
double getAcceleration(const std::string&, const std::string&);


// Output Helper Functions
void outputInitialVelocity(double, const std::string&, const std::string&);
void outputFinalVelocity(double, const std::string&, const std::string&);
void outputAcceleration(double, const std::string&, const std::string&);
void outputTimeElapsed(double, const std::string&);
void outputChangeInDistance(double, const std::string&);
void outputChangeInVelocity(double, const std::string&, const std::string&);
void outputMass(double, const std::string&);
void outputGravity(double);



std::string getDistanceUnitOfMeasure() {
    std::string distanceUnits;

    std::cout << "Enter the change in distance units of measure: " << std::endl;

    std::cin >> distanceUnits;

    return distanceUnits;
}

std::string getTimeUnitOfMeasure() {
    std::string timeUnits;

    std::cout << "Enter the time elapsed units of measure: " << std::endl;

    std::cin >> timeUnits;

    return timeUnits;
}

std::string getMassUnitOfMeasure() {
    std::string massUnits;

    std::cout << "Enter the mass units of measure: " << std::endl;

    std::cin >> massUnits;

    return massUnits;
}

double getChangeInVelocity(const std::string& distanceUnits, const std::string& timeUnits) {
    double velocityDelta;

    std::cout << "Enter the change in velocity (" << distanceUnits << "/";
    std::cout << timeUnits << "): " << std::endl;

    std::cin >> velocityDelta;

    return  velocityDelta;
}

double getChangeInTime(const std::string& timeUnits){
    double timeDelta;

    std::cout << "Enter the time elapsed in " << timeUnits << ": ";
    std::cout << std::endl;

    std::cin >> timeDelta;

    return timeDelta;
}

double getChangeInDistance(const std::string& distanceUnits) {
    double distanceDelta;

    std::cout << "Enter the change in distance in " << distanceUnits;
    std::cout << ": " << std::endl;

    std::cin >> distanceDelta;

    return distanceDelta;
}

double getMass(const std::string& massUnits) {
    double mass;

    std::cout << "Enter the mass in " << massUnits << ": " << std::endl;

    std::cin >> mass;

    return mass;
}

double getGravity() {
    double gravity;

    std::cout << "Enter the mass in Newtons: " << std::endl;

    std::cin >> gravity;

    return gravity;
}

double getInitialVelocity(const std::string& distanceUnits, const std::string& timeUnits) {
    double initialVelocity;

    std::cout << "Please enter the initial velocity in ";
    std::cout << distanceUnits << "/" << timeUnits << ": " << std::endl;

    std::cin >> initialVelocity;

    return initialVelocity;
}

double getAcceleration(const std::string& distanceUnits, const std::string& timeUnits) {
    double acceleration;

    std::cout << "Please enter the acceleration (" << distanceUnits;
    std::cout << "/" << timeUnits << " squared): " << std::endl;

    std::cin >> acceleration;

    return acceleration;
}

double getFinalVelocity(const std::string& distanceUnits, const std::string& timeUnits) {
    double finalVelocity;

    std::cout << "Please enter the final velocity in ";
    std::cout << distanceUnits << "/" << timeUnits << ": " << std::endl;

    std::cin >> finalVelocity;

    return finalVelocity;
}

void outputInitialVelocity(double initialVelocity, const std::string& distanceUnits, const std::string& timeUnits) {
    std::cout << "An initial velocity of " << initialVelocity;
    std::cout << " " << distanceUnits << "/" << timeUnits << std::endl;
}

void outputFinalVelocity(double finalVelocity, const std::string& distanceUnits, const std::string& timeUnits) {
    std::cout << "A final velocity of " << finalVelocity;
    std::cout << " " << distanceUnits << "/" << timeUnits << std::endl;
}

void outputAcceleration(double acceleration, const std::string& distanceUnits, const std::string& timeUnits) {
    std::cout << "An acceleration of " << acceleration << " ";
    std::cout << distanceUnits << "/" << timeUnits;
    std::cout << " squared" << std::endl;
}

void outputTimeElapsed(double deltaTime, const std::string& timeUnits) {
    std::cout << "An elapsed time of " << deltaTime << " ";
    std::cout << timeUnits << std::endl;
}

void outputChangeInDistance(double distanceDelta, const std::string& distanceUnits) {
    std::cout << "A change in distance of " << distanceDelta;
    std::cout << " " << distanceUnits << std::endl;
}

void outputChangeInVelocity(double velocityDelta, const std::string& distanceUnits, const std::string& timeUnits) {
    std::cout << "A change in velocity of " << velocityDelta << " ";
    std::cout << distanceUnits << "/" << timeUnits << std::endl;
}

void outputMass(double mass, const std::string& massUnits) {
    std::cout << "A mass of " << mass << " " << massUnits << std::endl;
}

void outputGravity(double gravity) {
    std::cout << "A gravity of " << gravity << " in Newtons" << std::endl;
}

#endif //PHYSICSCALCULATOR_PHYSICSHELPERFUNCTIONS_H
