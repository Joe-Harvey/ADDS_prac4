#include "EfficientTruckloads.h"
#include <math.h>

int EfficientTruckloads :: numTrucks(int numCrates, int loadSize){

    //make sure inputs are both positive
    numCrates = abs(numCrates);
    loadSize = abs(loadSize);

    //base case

    if (numCrates <= loadSize){
        return 1;
    }

    //search for loadSize in inputs
    bool in_vec = false;
    for (int i = 0; i < inputs.size(); i++){
        if (inputs.at(i) == numCrates){
            in_vec = true;
        }
    }

    if (in_vec == false){
        inputs.push_back(numCrates);
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