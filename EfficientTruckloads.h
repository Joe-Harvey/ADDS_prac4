#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <vector>

class EfficientTruckloads{

    private:
    void table();
    vector<int> indicies;
    vector<int> inputs;
    
    public:
    int numTrucks(int numCrates, int loadSize);
};

#endif