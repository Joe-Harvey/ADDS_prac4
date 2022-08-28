#include <iostream>
#include <string>
#include "Truckloads.h"
#include "Reverse.h"
using namespace std;

int main(){

    Reverse r;
    int val = 123456;
    cout << r.reverseDigit(val) << endl;

    string str = "hola";
    cout << r.reverseString(str) << endl;

    Truckloads t;

    cout << t.numTrucks(14, 3) << endl;

    return 0;
}