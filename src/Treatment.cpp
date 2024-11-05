#include "Treatment.hpp"

// Constructor
Treatment::Treatment(const string &name, double cost)
    : treatmentName(name), treatmentCost(cost) {}

// Getters 
string Treatment::getTreatmentName() const {
    return treatmentName;
}

double Treatment::getTreatmentCost() const {
    return treatmentCost;
}

// Setters
void Treatment::setTreatmentName(const string &name) {
    treatmentName = name;
}

void Treatment::setTreatmentCost(double cost) {
    treatmentCost = cost;
}

// Print details of the treatment
void Treatment::printDetails() const {
    cout << "Treatment Name: " << treatmentName << ", Cost: " << treatmentCost << " RON" << endl;
}
