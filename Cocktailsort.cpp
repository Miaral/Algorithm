#include <iostream>

using namespace std;
//双向冒泡
void CockTailSort(int arr[], int n)
{

    int left = 0;
    int right = n - 1;

   

    while (left < right)
    {
        for (int i = left; i < right; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
               
            }
        }
        right--;

        for (int i = right; i > left; i--)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);

            }
        }
        left++;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 23, 4, 5, 15, 3, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    CockTailSort(arr, n);
    print(arr, n);

    return 0;
}