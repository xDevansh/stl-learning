#include<iostream>
#include<utility>
#include<string>

int main()
{
    auto myPair = std::make_pair(100,"Heba");

    std::cout<<"first element of pair: "<<myPair.first<<'\n'<<"second element of pair :"<<myPair.second<<std::endl;

    return 0;
}