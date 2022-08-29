#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H
#include <vector>

class EfficientTruckloads{

    private:
    std :: vector<int> inputs;
    std :: vector<int> outputs;

    public:
    int numTrucks(int numCrates, int loadSize);
};

#endif