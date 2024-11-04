#include "Treatment.hpp"
#include <cstring> // pt strcpy

Treatment::Treatment(const string &dogName, const string &treatmentName, const string &dayGiven, const string &frequency)
    // Lista de initializare
:   dogName(new char[dogName.size() + 1]),
    treatmentName(new char[treatmentName.size() + 1]),
    dayGiven(new char[dayGiven.size() + 1]),
    frequency(new char[frequency.size() +1 ])
{
    //Copierea datelor
    strcpy(this->dogName, dogName.c_str());
    strcpy(this->treatmentName, treatmentName.c_str());
    strcpy(this->dayGiven, dayGiven.c_str());
    strcpy(this->frequency, frequency.c_str());
    cout << "Treatment object created successfully." << endl;
}

Treatment::~Treatment() {
    //Elibererea heap-ului
    delete[] dogName;
    delete[] treatmentName;
    delete[] dayGiven;
    delete[] frequency;

    cout << "Memory freed for Treatment object." << endl;
}


const char* Treatment::getDogName() const{
    return dogName;
}

const char* Treatment::getTreatmentName() const{
    return treatmentName;
}
    
const char* Treatment::getDayGiven() const{
    return dayGiven;
}
    
const char* Treatment::getFrequency() const{
    return frequency;
}
