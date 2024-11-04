#include <iostream>
using namespace std;

class Treatment {
private:
    // Alocam memoria
    char *dogName;
    int dogAge; 
    char *treatmentName;
    double treatmentCost;
    char *dayGiven;
    char *notes;


public:
    //Constructor
    Treatment(const string &dogName, const int dogAge,const string &treatmentName, const double treatmentCost, const string &dayGiven, const string &notes);
    //Destructor
    ~Treatment();

    // Getters const - sa nu modifice nimeni
    const char* getDogName() const;
    int getDogAge() const;
    const char* getTreatmentName() const;
    double getTreatmentCost() const;
    const char* getDayGiven() const;
    const char* getNotes() const;

    // Setters
    void setDogName(const string &dogName);
    void setDogAge(const int dogAge);
    void setTreatmentName(const string &name);
    void setTreatmentCost(const double treatmentCost);
    void setDayGiven(const string &dayGiven);
    void setNotes(const string &frequency);

    //Overloading the Assignment Operator
    //f.operator=(g) <> f=g   f-lhs object g-rhs object
    Treatment& operator=(const Treatment& rhs);

    void printDetails() const;
};