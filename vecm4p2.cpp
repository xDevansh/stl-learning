#include<iostream>
#include<vector>
#include<ostream>

struct Point
{
    int X_value{};
    int Y_value{};
    std::vector<int> v1;
};

std::ostream& operator<<(std::ostream& os, const std::vector<int>& v1)
{
    os<<"( ";
    os<<v1[0];
    int count{};
    for(const auto& p: v1)
    { 
        if(count!=0)
        {
            os<<" , "<<p;
        }
        count++;
    }
    os<<" )";
    return os;
}

int main()
{
    //creating a vector of elements having type Point
    std::vector<Point> points=
    {
        {1,2,{10,20}},
        {3,4,{30,40}}
    };

    //pushing a new element in pointss vector using designated initializer list
    points.push_back({.X_value{5},.Y_value{6},.v1{50,60,70}});

    //loop to print the vector
    for(const auto& p:points)
    {
        std::cout<<"X: "<<p.X_value<<" | "<<"Y: "<<p.Y_value<<"Vector: "<<p.v1<<" | v1 size: "<<p.v1.size()<<'\n';

    }
    return 0;

}
