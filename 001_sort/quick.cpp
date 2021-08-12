#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void partition(int* arr, int left, int right)
{
    if(left < right)
    {
        int i = left - 1, j;
        for(j = left; j < right; j++)
        {
            if(arr[j] < arr[right])
            {
                swap(&arr[++i], &arr[j]);
            }
        }
        swap(&arr[++i], &arr[right]);
        partition(arr, left, i-1);
        partition(arr, i+1, right);
    }
}

int main()
{
    #include "../fileio.h"
    int n;
    std::cin >> n;
    int arr[n], i;
    for(i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    partition(arr, 0, n-1);
    for (i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}