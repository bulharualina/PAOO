#include "Treatment.hpp"
#include <cstring> 

Treatment::Treatment(const string &dogName, const int dogAge,const string &treatmentName, const double treatmentCost, const string &dayGiven, const string &notes)
    //  Initializer List 
:   dogName(new char[dogName.size() + 1]),
    dogAge(dogAge),
    treatmentName(new char[treatmentName.size() + 1]),
    treatmentCost(treatmentCost),
    dayGiven(new char[dayGiven.size() + 1]),
    notes(new char[notes.size() +1 ])
{
    // Copying the data
    strcpy(this->dogName, dogName.c_str());
    strcpy(this->treatmentName, treatmentName.c_str());
    strcpy(this->dayGiven, dayGiven.c_str());
    strcpy(this->notes, notes.c_str());
    cout << "\n----- Treatment object created successfully for dog: " << this->dogName << endl;
}

Treatment::~Treatment() {
    // Freeing heap memory
    cout << "\n----- Freeing memory for Treatment object with dog: " << dogName << endl;
    delete[] dogName;
    delete[] treatmentName;
    delete[] dayGiven;
    delete[] notes;

    cout << "\n----- Memory freed for Treatment object." << endl;
}

// Getters
const char* Treatment::getDogName() const{
    return dogName;
}

int Treatment::getDogAge() const{
    return dogAge;
}

const char* Treatment::getTreatmentName() const{
    return treatmentName;
}

double Treatment::getTreatmentCost() const{
    return treatmentCost;
}

const char* Treatment::getDayGiven() const{
    return dayGiven;
}
    
const char* Treatment::getNotes() const{
    return notes;
}

// Setters
void Treatment::setDogName(const string &dogName) {
    //cout << "Setting dog name to: " << dogName << endl;
    delete[] this->dogName; 
    this->dogName = new char[dogName.size() + 1];
    strcpy(this->dogName, dogName.c_str());
}

void Treatment::setDogAge(const int dogAge){
    //cout << "Setting dog age to: " << dogAge << endl;
    this->dogAge = dogAge;
}

void Treatment::setTreatmentName(const string &treatmentName) {
    //cout << "Setting treatment name to: " << treatmentName << endl;
    delete[] this->treatmentName; 
    this->treatmentName = new char[treatmentName.size() + 1];
    strcpy(this->treatmentName, treatmentName.c_str());
}

void Treatment::setTreatmentCost(const double treatmentCost){
    //cout << "Setting treatment cost to: " << treatmentCost << endl;
    this->treatmentCost = treatmentCost;
}

void Treatment::setDayGiven(const string &dayGiven) {
    //cout << "Setting day given to: " << dayGiven << endl;
    delete[] this->dayGiven; 
    this->dayGiven = new char[dayGiven.size() + 1];
    strcpy(this->dayGiven, dayGiven.c_str());
}

void Treatment::setNotes(const string &notes) {
    //cout << "Setting notes to: " << notes << endl;
    delete[] this->notes; 
    this->notes = new char[notes.size() + 1];
    strcpy(this->notes, notes.c_str());
}

//Overloading the Assignment Operator
Treatment& Treatment::operator=(const Treatment& rhs){
    cout << "\n----- Assignment operator called." << endl;
    
    // Check for self-assignment
    if(this != &rhs){ 
    
        //Free the existing lhs data
        cout << "\n----- Freeing existing data." << endl;
        delete[] dogName;
        delete[] treatmentName;
        delete[] dayGiven;
        delete[] notes;

        //Create a new arrays of the correct size for the lhs - allocate new mwmory
        dogName = new char[strlen(rhs.dogName) + 1];
        treatmentName = new char[strlen(rhs.treatmentName) + 1];
        dayGiven = new char[strlen(rhs.dayGiven) + 1];
        notes = new char[strlen(rhs.notes) + 1];
        
        
        //Copy the contents of the lhs obj to the lhs obj
        strcpy(dogName, rhs.dogName);
        dogAge = rhs.dogAge;
        strcpy(treatmentName, rhs.treatmentName);
        treatmentCost = rhs.treatmentCost;
        strcpy(dayGiven, rhs.dayGiven);
        strcpy(notes, rhs.notes);
        cout << "\n----- Assignment completed" << endl;
        
    }else {
        cout << "\n----- Self-assignment detected." << endl;
    }
    return *this; 
}


  void Treatment::printDetails() const {
    cout << "Dog Name: " << dogName << "\n"
         << "Dog Age: " << dogAge << "\n"
         << "Treatment Name: " << treatmentName << "\n"
         << "Treatment Cost: " << treatmentCost <<"$\n"
         << "Day Given: " << dayGiven << "\n" 
         << "Notes: " << notes << endl;
}