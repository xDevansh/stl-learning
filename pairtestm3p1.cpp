#include<iostream>
#include<utility>

std::ostream& operator<<(std::ostream& os,const std::pair<int,int>& pair)
{
    return os<<"SUM: "<<pair.first<<'\n'<<"Product: "<<pair.second<<std::endl;
}
std::pair<int,int> calculateData()
{
    int a,b,c;
    std::cin>>a>>b>>c;
    return {a+b+c,a*b*c};
}

int main()
{
    
    std::cout<<"enter three numbers to calculate their SUM AND PRODUCT"<<'\n';
    auto pair = calculateData();
    std::cout<<"The calculated SUM AND PRODUCT ARE: "<<'\n';
    std::cout<<pair<<std::endl;
}