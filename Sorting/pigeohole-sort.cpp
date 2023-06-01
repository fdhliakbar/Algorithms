#include <bits/stdc++.h>

void pigeonHoleSort(int values[], int sizeValues){
    int minimumValue = values[0], maximumValue = values[0];

    std::cout<<"Before sorting  : ";
    for(int i = 0; i < sizeValues; i++){
        std::cout<<values[i]<<" ";
    }
    std::cout<<'\n';

    for(int i=1;i<sizeValues;i++){
        if(values[i] < minimumValue) minimumValue = values[i];
        if(values[i] > maximumValue) maximumValue = values[i];
    }

    //find range of values
    int rangeValue = maximumValue - minimumValue + 1;

    std::vector<int> holes[rangeValue];

    for (int i = 0; i < sizeValues; i++)
        holes[values[i] - minimumValue].push_back(values[i]);

    int index = 0;
    for (int i = 0; i < rangeValue; i++) {
        std::vector<int>::iterator it;
        for (it = holes[i].begin(); it != holes[i].end(); ++it)
            values[index++] = *it;
    }

    std::cout<<"Sorted order is : ";
    for(int i=0;i<sizeValues;i++){
        std::cout<<values[i]<<" ";
    }

}


int main(){
    int values[6] = {8, 5, 1, 2, 10, 4};
    int sizeValues = sizeof(values) / sizeof(values[0]);

    pigeonHoleSort(values, sizeValues);
    return 0;
}