#include<iostream>

template <typename T>
auto multiplyTwo(T a,T b)
{
    return a*b;
}

int main()
{
    std::cout<<"Multiplication of '2' and '5' is: "<<multiplyTwo<int>(2,5)<<'\n';
    std::cout<<"Multiplication of '2.5' and '5.5' is: "<<multiplyTwo(2.5,5.5)<<'\n';
    std::cout<<"Multiplication of 'a' and 'z' is: "<<multiplyTwo('a','z')<<'\n';

    return 0;
    
}
