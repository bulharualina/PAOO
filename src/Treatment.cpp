#include "Treatment.hpp"
using namespace TreatmentNamespace;
// Constructor
Treatment::Treatment(const string &name, double cost)
    : name(name), cost(cost) {}

// Getters 
string Treatment::getName() const {
    return name;
}

double Treatment::getCost() const {
    return cost;
}

// Setters
void Treatment::setName(const string &name) {
    this -> name = name;
}

void Treatment::setCost(double cost) {
    this -> cost = cost;
}

// Print details of the treatment
void Treatment::printDetails() const {
    cout << "Treatment Name: " << name << ", Cost: " << cost << " RON" << endl;
}
