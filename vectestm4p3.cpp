#include<iostream>
#include<vector>

void updateCenter(std::vector<std::vector<int>>& vec)
{
    vec[1][1]=99;
}

int main()
{
    std::vector<std::vector<int>> vec(3,std::vector<int>(3,0));
    updateCenter(vec);
    std::cout<<vec[1][1]<<std::endl;
    return 0;
}