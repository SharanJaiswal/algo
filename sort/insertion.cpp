#include <iostream>

void insertion_sort(int* arr, int n)
{
    for(int i = 1; i< n; i++)
    {
        int j = i - 1, key = arr[i];
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n;
    std::cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}