#ifndef TREATMENT_HPP
#define TREATMENT_HPP

#include <string>
#include <iostream>
using namespace std;

class Treatment {
private:
    string treatmentName;
    double treatmentCost;

public:
    // Constructor with default values
    Treatment(const string &name = "Unknown", double cost = 0.0);

    // Getters
    string getTreatmentName() const;
    double getTreatmentCost() const;

    // Setters
    void setTreatmentName(const string &name);
    void setTreatmentCost(double cost);

    // Print details
    void printDetails() const;
};

#endif
