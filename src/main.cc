#include<iostream>
//#include "Character.hh"
#include "Hero.hh"

int main()
{

    Hero** heroList
    {
        new Hero*[4]
        {
            new Hero(5, 3, 1, 2, 3, 1, new std::string[4]{{"fire ball"}, {"fenix tail"}, {"war growl"}, {"fly"}}),
            new Hero(4, 3, 1, 2, 3, 1, new std::string[4]{{"water heal"}, {"erik do something"}, {"rays sword"}, {"fdgdf"}}),
            new Hero(7, 3, 1, 2, 3, 1, new std::string[4]{{"ksdjfhksj"}, {"lml"}, {"loremipsum"}, {"fly2"}}),
            new Hero(2, 3, 1, 2, 3, 1, new std::string[4]{{"fire ball"}, {"ddd"}, {"aaaa"}, {"bbbbb"}})
        }
    };

    for(int i{}; i < 4; i++)
    {

        std::cout << "Hero: " << i + 1 << std::endl;    
        for(int j{}; j < 4; j++)
        {
            std::cout << "Skill: " << *((*(heroList + i))->GetSkills() + j) << std::endl;
        }
        std::cout << std::endl;
    }

    std::cin.get();
    return 0;
}