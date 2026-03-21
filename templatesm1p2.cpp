#include<iostream>

template <typename T>
T getMax(T a,T b)
{
    return (a > b) ? a : b;
}

int main()
{
    std::cout<<"Max of '2' and '5' is: "<<getMax<int>(2,5)<<'\n';
    std::cout<<"Max of '2.5' and '5.5' is: "<<getMax<float>(2.5,5.5)<<'\n';
    std::cout<<"Max of 'a' and 'a' is: "<<getMax('a','z')<<'\n';

    return 0;
    
}
