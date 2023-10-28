#include <iostream>
#include<vector>

template<class T>
void quick_sort_recursive(T arr[], int start, int end) {
    if (start >= end) return;
    T mid = arr[end];
    int left = start, right = end - 1;
    while (left < right) {
        while (arr[left] < mid && left < right) left++;
        while (arr[right] >= mid && left < right) right--;
        std::swap(arr[left], arr[right]);
    }
    if (arr[left] >= arr[end])
        std::swap(arr[left], arr[end]);
    else
        left++;
    quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}

template<typename T>
void quick_sort(T arr[], int len) {
    quick_sort_recursive(arr, 0, len - 1);
}

int main()
{
    int arr[] = {0, 34, 66, 2, 5, 95, 4, 46, 27};
    quick_sort(arr, 9);
    for (int i = 0; i < 9; ++i)
    {
        std::cout << arr[i] << " "; // print => 0 2 4 5 27 34 46 66 95
    }
    std::cout << std::endl;
    return 0;
}