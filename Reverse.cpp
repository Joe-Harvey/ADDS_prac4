#include "Reverse.h"
#include <string>
using namespace std;

int Reverse :: reverseDigit(int value){

    string s_value = to_string(value);

    //get digits in value

    int n = size(s_value);

    //base case
    if (size <= 1){
        return value;
    }

    //recursive case
    if (n > 1){

        //store and erase first digit
        string s = s_value.at(0);
        s_value.erase(0);

        //call function and add first digit to the end
        int val = stoi(s_value);
        string n_string = to_string(reverseDigit(s_value));
        n_string += s;
        return stoi(n_string);
    }
}