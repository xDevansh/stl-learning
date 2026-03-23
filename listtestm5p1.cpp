#include<iostream>
#include<list>

int main()
{
    std::list<std::string> myList{"Alice","Bob","Charlie"};

    myList.push_back("Dave");
    myList.pop_front();
/* 
    std::cout<<myList[1];
 */    
    return 0;
}