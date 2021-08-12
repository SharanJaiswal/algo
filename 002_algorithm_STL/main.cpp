#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cstdio>


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


    // ALL THE IMMEDIATE BELOW FUNCTIONS IN COMMENTED FORM, ARE NOT THE PART OF std:: library, OR ANY C++ LIBRARY
    // __builtin_popcount(<int>)
    // __builtin_popcountl(<long>)
    // __builtin_popcountll(<long long>)
    // _builtin_parity(<num>)   return true(1) for odd number of one's, otherwise false(0)
    // _builtin_clz(<num>)
    // _builtin_ctz(<num>)
    // all abouve three will have 'l' and 'll' version also
    int cnt = __builtin_popcount(4);
    std::cout << "popcount:" << cnt << std::endl;

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    std::cout << *std::max_element(arr, arr+4) << std::endl;  // excludes RHL. We can also provide a predicate
    // std::min_element(start, end)

// std::next_permutation(startitr, termitr);    std::prev_permutation();    std::is_permutation()


    b = std::accumulate(arr, arr+8, a);
    std::cout << b << std::endl;

a=1;
    b = std::accumulate(arr, arr+8, a, [](int x, int y)
    {
        return x*y;
    });
    std::cout << b << std::endl;

a=1;
    b = std::accumulate(arr, arr+8, a, std::minus<int>());
    std::cout << b << std::endl;

    // PARTIAL SUM
    int bs[8];  // initial values of answer array will get overwritten
    std::partial_sum(arr, arr+8, bs);
    for(int x : bs)
    {
        std::cout << x << ", ";
    } std::cout << std::endl;

    // the sum of element is twice of its adjacent element
    std::partial_sum(arr, arr + 8, bs, [](int x, int y)
    {
        return x + 2 * y;
    });
    for (int x : bs)
    {
        std::cout << x << ", ";
    }
    std::cout << std::endl;

    return 0;
}