#include <iostream>
#include <vector>
#include <algorithm>    // for including sorting algo
#include <functional>   // for providing the functional predicate. This header includes some inbuilt functions

int main()
{
    #include "../fileio.h"

    std::vector<int> values = {1,2,3,4,5};

    std::sort(values.begin(), values.end());
    for(int& x : values)
    {
        std::cout << x << std::endl;
    }

    // values.clear();  // No need of it.
    values = {1,2,6,2,79,34,7,85,2,54,6,3};
    // sorting based on the conditions inside of the function. It can be function/method/lambda etc.
    // the predicate function contributes by returning the boolean values. It takes 2 inputs ['a' and 'b'] and return true/false
    // If 'true' is returned, then 'a' will come before 'b'.
    // If 'false' is returned, then 'b' will come before 'a'.

    // below we are using the library fucntion, present in 'fucntional' header.
    std::sort(values.begin(), values.end(), std::greater<int>());

    // Using custom lambda function as a predicate to the std::sort
    std::sort(values.begin(), values.end(), [](int a, int b)
    {
        if (a == 1)
            return false;
        if (b == 1)
            return true;
        
        return a < b;
    });
    for(int& value : values)
    {
        std::cout << value << std::endl;
    }

    return 0;
}