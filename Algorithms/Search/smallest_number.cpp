#include <iostream>

int main(){
    int x,y,z,min;

    std::cin>>x>>y>>z;

    if(x<=y && x<=z){
        min = x;
    } else if(y <= z){
        min = y;
    } else {
        min = z;
    }

    std::cout<<min<<std::endl;
}