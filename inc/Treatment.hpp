#include <iostream>

using namespace std;

class Treatment {
private:
    // Alocam memoria
    char *dogName;
    char *treatmentName;
    char *dayGiven;
    char *frequency;

public:
    //Constructor
    Treatment(const string &dogName, const string &treatmentName, const string &dayGiven, const string &frequency);
    //Destructor
    ~Treatment();

    // Getters const - sa nu modifice nimeni
    const char* getDogName() const;
    const char* getTreatmentName() const;
    const char* getDayGiven() const;
    const char* getFrequency() const;

    // Setters
    void setDogName(const string &dogName);
    void setName(const string &name);
    void setDayGiven(const string &dayGiven);
    void setFrequency(const string &frequency);
};