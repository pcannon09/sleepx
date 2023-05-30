#include <iostream>
#include "../include/sleepx.hpp"

int main()
{
    std::cout << "-= START =-\n";
    std::cout << "Waiting 5 nanoseconds...\n";
    
    sleepx::nanoseconds(5);

    std::cout << "Done!\n";
    std::cout << "Waiting 5 miliseconds...\n";

    sleepx::seconds(0.5);

    std::cout << "Done!\n";
    std::cout << "Waiting 0.5 secs...\n";

    sleepx::seconds(0.5);
    
    std::cout << "Done!\n";
    std::cout << "Waiting 1 second for 5 times\n";

    for (int i ; i < 5 ; i++)
    {
        sleepx::seconds(1);
    
        std::cout << "Lap: " << i << "\n";
    }

    std::cout << "Done!\n";

    std::string answer;

    std::cout << "Do you want to wait 1 min? Y / N? (In lower case) ";

    std::cin>>answer;

    if (answer == "yes" || answer == "y")
    {
        sleepx::minutes(1);

        std::cout << "Do you want to wait 1 hour? Y / N? (In lower case) ";

        std::cin>>answer;

        if (answer == "yes" || answer == "y")
        {
            sleepx::hour(1);
        }
    
        else
        {
            return 0;
        }
    }

    else
    {
        return 0;
    }

    std::cout << "-= End =-\n";

    return 0;
}

