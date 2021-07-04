#include <iostream>

void merge(int* arr, int left, int mid, int right)
{
    int L = mid - left + 1, R = right - mid;
    int left_arr[L], right_arr[R];
    int i, j, k;
    j = 0;
    for(i = left; i <= mid; i++)
    {
        left_arr[j++] = arr[i];
    }
    j = 0;
    for (i = mid + 1; i <= right; i++)
    {
        right_arr[j++] = arr[i];
    }
    i = 0; j = 0; k = left;
    while(i < L && j < R)
    {
        if(left_arr[i] <= right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
    while(i < L)
    {
        arr[k] = left_arr[i];
        i++;
        k++;

    }
    while (j < R)
    {
        arr[k] = right_arr[j];
        k++;
        j++;
    }
}

void merge_sort(int* arr, int left, int right)
{
    if(left < right)
    {
        int mid = left - 1 + (right - left + 1)/2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    merge_sort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}