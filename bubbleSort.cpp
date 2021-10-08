#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // for(bool flag=true;flag;){
    //     flag=false;
    //     for(int i=0;i<n-1;i++){
    //         if(arr[i]>arr[i+1]){
    //             arr[i] ^= arr[i+1];
    //             arr[i+1] ^= arr[i];
    //             arr[i] ^= arr[i+1];
    //             // int temp =arr[i];
    //             // arr[i]=arr[i+1];
    //             // arr[i+1]=temp;
    //             flag=true;
    //         }
    //     }
    // }
    bool index = true;
    int lastSwapPos = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        index = false;
        int end = lastSwapPos;
        for (int j = 0; j < end; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap(arr[j],arr[j+1]);
                //使用位运算做数字交换
                // arr[i] ^= arr[j];
                // arr[j] ^= arr[i];
                // arr[i] ^= arr[j];
                //使用加法进行数字交换
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                index = true;
                lastSwapPos = j;
            }
        }
        if (!index)
            break;
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

    bubbleSort(arr, n);
    print(arr, n);

    // cout<<arr[2];
    return 0;
}