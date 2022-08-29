#include "EfficientTruckloads.h"
#include <math.h>
#include <iostream>

int EfficientTruckloads :: numTrucks(int numCrates, int loadSize){

    //make sure inputs are both positive
    numCrates = abs(numCrates);
    loadSize = abs(loadSize);

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

        int numtrucks1;
        int numtrucks2;

        //search for loadSize in inputs 

        bool in_tab = false;
        for (int i = 0; i < inputs.size(); i++){
            if (inputs.at(i) == numcrates1){
                numtrucks1 = outputs.at(i);
                in_tab = true;
            }
        }
        if (in_tab == false){
            inputs.push_back(numcrates1);
            outputs.push_back(numTrucks(numcrates1, loadSize));
            numtrucks1 = outputs.back();
        }
        
        in_tab = false;
        for (int i = 0; i < inputs.size(); i++){
            if (inputs.at(i) == numcrates2){
                 numtrucks2 = outputs.at(i);
                 in_tab = true;
            }
        }
        if (in_tab == false){
            inputs.push_back(numcrates2);
            outputs.push_back(numTrucks(numcrates2, loadSize));
            numtrucks2 = outputs.back();
        }

        int ans = numtrucks1 + numtrucks2;

        for (int i = 0; i < inputs.size(); i++){
            std :: cout << inputs.at(i) << " " << ans << std :: endl;
        }
        return ans;
    }

    return 0;
}