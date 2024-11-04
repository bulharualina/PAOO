#include "Treatment.hpp"
#include <cstring> // pt strcpy

Treatment::Treatment(const string &dogName, const string &treatmentName, const string &dayGiven, const string &description)
    // Lista de initializare
:   dogName(new char[dogName.size() + 1]),
    treatmentName(new char[treatmentName.size() + 1]),
    dayGiven(new char[dayGiven.size() + 1]),
    description(new char[description.size() +1 ])
{
    //Copierea datelor
    strcpy(this->dogName, dogName.c_str());
    strcpy(this->treatmentName, treatmentName.c_str());
    strcpy(this->dayGiven, dayGiven.c_str());
    strcpy(this->description, description.c_str());
    cout << "Treatment object created successfully." << endl;
}

Treatment::~Treatment() {
    //Elibererea heap-ului
    delete[] dogName;
    delete[] treatmentName;
    delete[] dayGiven;
    delete[] description;

    cout << "Memory freed for Treatment object." << endl;
}


