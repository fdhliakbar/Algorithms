/********************************************************************
* Algorithm implementations
*
* What is Bubble Sort ?
*
* Bubble Sort is the simplest sorting algorithm
* that works by repeatedly swapping the adjacent elements
* if they are in the wrong order.
* This algorithm is not suitable for large data
* sets as its average and worst-case time complexity is quite high.
*
* https://www.geeksforgeeks.org/bubble-sort/
********************************************************************/


#include <iostream>

int main(){
    int arr[5] = {5,2,6,1,12};
    int lenghtArr = sizeof(arr)/sizeof(arr[0]);
    int temporary;

    //Bubble sorting process
    for(int i=0;i<lenghtArr;i++){
        int random = 0;
        for(int j=0; j<lenghtArr; j++){
            if(arr[j] > arr[j+1]){
                temporary = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temporary;
                random++;
            }
        }
        std::cout<<'\n';
        //Stop the process when the results have been obtained
        if(random == 0) break;
        std::cout<<"Sorting steps "<<i+1<<" : \n";
        for(int k=0;k<lenghtArr;k++){
            std::cout<<arr[k]<<" ";
        }
    }
    std::cout<<"\nSorting result: ";
    for(int i=0;i<lenghtArr;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}