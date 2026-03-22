#include<iostream>
#include<tuple>
#include<string>

/* 
std::ostream& operator<<(std::ostream& os,const std::pair<int,std::string>& pair)
{
    return os<<pair.first<<","<<pair.second;
}
 */

int main()
{
    std::tuple myTuple{2,234,"hello"};
/* 
    int elem0 = std::get<0>(myTuple);
    int elem1 = std::get<1>(myTuple);
    std::string elem2 = std::get<2>(myTuple);
 */
    auto [elem0,elem1,elem2] = myTuple;
    std::cout << "elem0: " << elem0 << ", elem1: " << elem1 << ", elem2: "<<elem2<<"\n";


}
