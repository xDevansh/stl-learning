#include<iostream>
#include<vector>

int main()
{
    std::vector<int> numbers {2,3,6};

    std::vector<int>::iterator it;
    for(it = numbers.begin();it!=numbers.end();it++)
    {
        std::cout<<*it<<'\n';
    }
    return 0;

}