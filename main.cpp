#include <iostream>
#include <string>
#include "Reverse.h"
using namespace std;

int main(){

    Reverse r;
    int val = 123456;
    cout << r.reverseDigit(val) << endl;

    string str = "espanol";
    cout << r.reverseString(str) << endl;

    return 0;
}