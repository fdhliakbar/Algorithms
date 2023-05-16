#include <bits/stdc++.h>

int main(){
    std::string teks;
    std::string findString;
    int amountAppear = 0;

    std::cout<<"Enter teks: ";
    std::getline(std::cin, teks);

    std::cout<<"Enter the string you want to search for: ";
    std::getline(std::cin, findString);

    /***************************************
        Save index when searching string in
        text using find() function
    ****************************************/
    size_t pos = teks.find(findString);

    while(pos != std::string::npos){
        amountAppear++;
        pos = teks.find(findString, pos + 1);
    }
    std::cout<<"The number of occurrences of the string \""<<findString<<"\" in the text: "<<amountAppear<<'\n';
}