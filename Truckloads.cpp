#include "Truckloads.h"
#include <math.h>
#include <iostream>

int Truckloads :: numTrucks(int numCrates, int loadSize){

    //make sure inputs are both positive
    numCrates = abs(numCrates);
    loadSize = abs(loadSize);

    //error case
    if (isdigit(numCrates) == true || isdigit(loadSize) == true){
        std :: cout << "ERROR" << std :: endl;
        return 0;
    }

    //base case

    if (numCrates <= loadSize){
        return 1;
    }

    //recursive case
    if (numCrates > loadSize){

        //divide crates into two with one being larger if odd number
        int numcrates1;
        int numcrates2;
        if (numCrates % 2 == 0){
            numcrates1 = numCrates / 2;
            numcrates2 = numCrates / 2;
        }
        if (numCrates % 2 == 1){
            numcrates1 = numCrates / 2;
            numcrates2 = numCrates / 2 + 1;
        }

        int ans = numTrucks(numcrates1, loadSize) + numTrucks(numcrates2, loadSize);
        return ans;
    }

    return 0;
}