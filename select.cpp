#include <iostream>
#include <vector>

template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
void SelectSort(std::vector<int> &nums, int n)
{
    if (n <= 1)
        return;
    int mid;
    for (int i = 0; i < n - 1; ++i)
    {
        mid = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (nums[j] < nums[mid])
            {
                mid = j;
            }
        }
        std::swap(nums[mid], nums[i]);
    }
}
void print(std::vector<int> &nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << nums[i] << ' ';
    }
    std::cout << std::endl;
}
int main()
{
    std::vector<int> nums = {1, 5, 6, 3, 2, 12, 9};
    SelectSort(nums, 7);
    print(nums, 7);
    return 0;
}
