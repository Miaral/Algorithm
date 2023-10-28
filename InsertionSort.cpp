#include <iostream>
using namespace std;
/*
构建有序数列，在未排序的数据中选取数据在已排序的数据中进行插入操作
*/
template <typename T>

void InsertionSelect(T arr[], int n)
{
    if (arr == NULL || n <= 0)
        return;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        { //有序数列扩充
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                // swap(arr[j+1],arr[j]);
            }
            else
                break;
        }
        arr[j + 1] = temp;
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
    int arr[] = {23, 1, 4 /*, 5, 15, 3, 8, 2*/};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSelect(arr, n);
    print(arr, n);
    return 0;
}