#include<iostream>
#include<vector>

int main()
{
    std::vector<int> scores{100,80,60,40};

    scores.insert(scores.begin(),120);
    scores.pop_back();
    scores.erase(scores.begin()+2);

    std::cout<<"( ";
    for(size_t i=0;i<scores.size();i++)
    {
        std::cout<<scores[i];
        if(i!=scores.size()-1)
        {
            std::cout<<" , ";
        }
    }
    std::cout<<" )"<<std::endl;
    return 0;
}