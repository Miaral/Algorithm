#include <iostream>

using namespace std;
template <typename T>

void selectSort(T arr[], int n)
{
    T i, j, min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            swap(arr[i], arr[min]);
        }
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

    selectSort(arr, n);
    print(arr, n);

    return 0;
}