#include <bits/stdc++.h>

int main(){
    std::string inputText;

    std::cout<<"Enter a sentence: ";
    std::getline(std::cin, inputText);

    std::cout<<"Your sentence: "<<inputText<<'\n';

    int position = 0;
    int amount = 0;

    while(true){
        position = inputText.find(" ", position + 1);
        amount++;
        if(position < 0) break;
    }
    std::cout<<"Number of words out: "<<amount<<'\n';
}