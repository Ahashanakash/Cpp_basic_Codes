#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string input;
        
        std::cin>>input;

        int sum = 0;
        for (char c : input)
        {
            sum += static_cast<int>(c);
        }

        std::cout<< sum << std::endl;
    }

    return 0;
}
