#include<iostream>
#include<utility>
#include<string>

int main()
{
    std::pair<int,std::string> myPair;

    myPair.first=100;
    myPair.second="Heba";

    std::cout<<"first element of pair: "<<myPair.first<<'\n'<<"second element of pair :"<<myPair.second<<std::endl;

    return 0;
}