#include <iostream>
#include "Treatment.hpp"  

int main() {
    Treatment tickPrevention("Luna", "NextGard 10-25kg", "2024-11-02", "Monthly");

    cout << tickPrevention.getDayGiven() <<endl;
    tickPrevention.setDayGiven("2024-10-20");
    cout << tickPrevention.getDayGiven() <<endl;
    return 0;
}
