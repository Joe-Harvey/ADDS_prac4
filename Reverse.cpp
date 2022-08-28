#include "Reverse.h"
using namespace std;

int Reverse :: reverseDigit(int value){

    string s_value = to_string(value);

    //get digits in value

    int n = s_value.size();

    //invalid input
    if (n < 1){
        return -1;
    }

    //base case
    if (n == 1){
        return value;
    }

    //recursive case
    if (n > 1){

        //store and erase first digit
        char c = s_value.at(0);
        s_value.erase(0, 1);

        //call function and add first digit to the end
        int n_value = stoi(s_value);
        string n_string = to_string(reverseDigit(n_value));
        n_string += c;

        return stoi(n_string);
    }

    return -1;
}

string Reverse :: reverseString(string letters){
    
    //get size of string

    int n = letters.size();

    //invalide input
    if (n < 1){
        return "ERROR";
    }

    //base case
    if (n == 1){
        return letters;
    }

    //recursive case
    if (n > 1){

        //store and erase first character
        char c = letters.at(0);
        letters.erase(0, 1);

        //call function and add first character to the end
        string n_letters = reverseString(letters);
        n_letters += c;

        return n_letters;
    }

    return "ERROR";
}
