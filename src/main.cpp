#include <iostream>
#include "Treatment.hpp"  

int main() {
    Treatment tickPrevention("Luna", "NextGard 10-25kg", "2024-11-02", "Monthly");

    cout << tickPrevention.getTreatmentName() <<endl;
    return 0;
}
