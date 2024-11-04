#include <iostream>

using namespace std;

class Treatment {
private:
    // Alocam memoria
    char *dogName;
    char *treatmentName;
    char *dayGiven;
    char *description;

public:
    //Constructor
    Treatment(const string &dogName, const string &treatmentName, const string &dayGiven, const string &description);
    //Destructor
    ~Treatment();

};