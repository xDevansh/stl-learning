#include<iostream>
#include<list>
#include<iterator>
int main()
{
    std::list<char> textE{'S','i','g','n','l'};

    auto it=textE.begin();
    std::advance(it,4);

    textE.insert(it,'a');

    for(auto const& word:textE)
    {
     
           std::cout<<word;
    }


}


