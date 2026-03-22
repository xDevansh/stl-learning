#include<iostream>
#include<utility>
#include<string>

std::pair<int,std::string> comparePairs(const std::pair<int,std::string>& pair1, const std::pair<int,std::string>& pair2)
{
    return (pair1>pair2) ? pair1:pair2;
}

std::ostream& operator<<(std::ostream& os,const std::pair<int,std::string>& pair)
{
    return os<<pair.first<<","<<pair.second;
}

int main()
{
    auto myPair = std::make_pair(100,"Heba");

    std::pair myPair2{200,"Veba"};
    std::cout<<"first element of pair: "<<myPair.first<<'\n'<<"second element of pair :"<<myPair.second<<'\n';

    /* auto winner = comparePairs(myPair,myPair2); */
    std::cout<<"The pair: ("<<comparePairs(myPair,myPair2)<< ") wins"<<std::endl;
    /* std::cout<<"The pair: ("<<winner.first<<","<<winner.second<< ") wins"<<std::endl; */

    return 0;
}