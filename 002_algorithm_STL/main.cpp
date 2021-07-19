#include <iostream>
#include <algorithm>
#include <vector>



int main()
{
    #include "../fileio.h"

    int a = 5, b = 4;
    std::cout << std::max(a, b) << std::endl;

    std::swap(a,b);
    std::cout << a << ", " << b << std::endl;

    std::string str = "Sharan";
    std::reverse(str.begin(), str.end());
    std::cout << str << std::endl;

    std::vector<int> vect = {1,3,6,7};
    std::rotate(vect.begin(), vect.begin() +2, vect.end());
    for(int x : vect)
    {
        std::cout << x << ", ";
    } std::cout << std::endl;

    return 0;
}