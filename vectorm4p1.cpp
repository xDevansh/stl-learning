#include<iostream>
#include<vector>
#include<ranges>

int main()
{
    std::vector<int> v1;

    /* std::vector<int> v2(5);

    std::vector<int> v3(5,10);

    std::vector<int> v4{1,2,3,4};
    return 0;

     */

    std::cout<<"SIZE: "<<v1.size()<<'\n'<<"CAPACITY: "<<'\n';

    for(int i: std::views::iota(1,16))
    {
        v1.push_back(i);
        std::cout<<"itertion :"<<i<<'\n';
        std::cout<<"SIZE: "<<v1.size()<<'\n'<<"CAPACITY: "<<v1.capacity()<<'\n';
    }
}