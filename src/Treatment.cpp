#include "Treatment.hpp"
#include <cstring> 

Treatment::Treatment(const string &dogName, const string &treatmentName, const string &dayGiven, const string &frequency)
    //  Initializer List 
:   dogName(new char[dogName.size() + 1]),
    treatmentName(new char[treatmentName.size() + 1]),
    dayGiven(new char[dayGiven.size() + 1]),
    frequency(new char[frequency.size() +1 ])
{
    // Copying the data
    strcpy(this->dogName, dogName.c_str());
    strcpy(this->treatmentName, treatmentName.c_str());
    strcpy(this->dayGiven, dayGiven.c_str());
    strcpy(this->frequency, frequency.c_str());
    cout << "Treatment object created successfully for dog: " << this->dogName << endl;
}

Treatment::~Treatment() {
    // Freeing heap memory
    cout << "Freeing memory for Treatment object with dog: " << dogName << endl;
    delete[] dogName;
    delete[] treatmentName;
    delete[] dayGiven;
    delete[] frequency;

    cout << "Memory freed for Treatment object." << endl;
}

// Getters
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

// Setters
void Treatment::setDogName(const string &dogName) {
    cout << "Setting dog name to: " << dogName << endl;
    delete[] this->dogName; 
    this->dogName = new char[dogName.size() + 1];
    strcpy(this->dogName, dogName.c_str());
}

void Treatment::setName(const string &treatmentName) {
    cout << "Setting treatment name to: " << treatmentName << endl;
    delete[] this->treatmentName; 
    this->treatmentName = new char[treatmentName.size() + 1];
    strcpy(this->treatmentName, treatmentName.c_str());
}

void Treatment::setDayGiven(const string &dayGiven) {
    cout << "Setting day given to: " << dayGiven << endl;
    delete[] this->dayGiven; 
    this->dayGiven = new char[dayGiven.size() + 1];
    strcpy(this->dayGiven, dayGiven.c_str());
}

void Treatment::setFrequency(const string &frequency) {
    cout << "Setting frequency to: " << frequency << endl;
    delete[] this->frequency; 
    this->frequency = new char[frequency.size() + 1];
    strcpy(this->frequency, frequency.c_str());
}

//Overloading the Assignment Operator
Treatment& Treatment::operator=(const Treatment& rhs){
    cout << "Assignment operator called." << endl;
    
    // Check for self-assignment
    if(this != &rhs){ 
    
        //Free the existing lhs data
        cout << "Freeing existing data." << endl;
        delete[] dogName;
        delete[] treatmentName;
        delete[] dayGiven;
        delete[] frequency;

        //Create a new arrays of the correct size for the lhs - allocate new mwmory
        dogName = new char[strlen(rhs.dogName) + 1];
        treatmentName = new char[strlen(rhs.treatmentName) + 1];
        dayGiven = new char[strlen(rhs.dayGiven) + 1];
        frequency = new char[strlen(rhs.frequency) + 1];
        
        
        //Copy the contents of the lhs obj to the lhs obj
        strcpy(dogName, rhs.dogName);
        strcpy(treatmentName, rhs.treatmentName);
        strcpy(dayGiven, rhs.dayGiven);
        strcpy(frequency, rhs.frequency);
        cout << "Assignment completed: " << dogName << ", " << treatmentName << endl;
        
    }else {
        cout << "Self-assignment detected." << endl;
    }
    return *this; 
}