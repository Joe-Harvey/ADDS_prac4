#include <iostream>
#include <string>
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include "Reverse.h"
using namespace std;

int main(){

    Reverse r;
    int val = -14;
    cout << r.reverseDigit(val) << endl;

    string str = "appa";
    cout << r.reverseString(str) << endl;

    Truckloads t;

    cout << t.numTrucks(10, 2) << endl;

    EfficientTruckloads e;

    cout << e.numTrucks(10, 2) << endl;

    return 0;
}