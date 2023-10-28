#include <iostream>

using namespace std;

int Partition(int Arr[], int left, int right)
{
	//下标量 比pivot大或小的元素放置的位置
	int index = left - 1;//-1
	// pivot (rand() % (right - left + 1)) + left;
	int pivot = Arr[right];					//right = 7
	for (int i = left; i <= right - 1; i++) //left 0
	{
		if (Arr[i] <= pivot)
		{
			index++;
			// swap(Arr[index],Arr[i]);
			int temp = Arr[index];
			Arr[index] = Arr[i];
			Arr[i] = temp;
		}
	}
	//当前index所指向的位置是pivot前的一个位置
	Arr[right] = Arr[index + 1];
	Arr[index + 1] = pivot;
	return index + 1;
}

void QuickSort(int Arr[], int left, int right)
{
	if (left < right)
	{
		int pivot = Partition(Arr, left, right);
		QuickSort(Arr, left, pivot - 1);
		QuickSort(Arr, pivot + 1, right);
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

	int arr[] = {80, 30, 60, 40, 20, 10, 50, 70};
	int n = sizeof(arr) / sizeof(arr[0]);

	QuickSort(arr, 0, 7);
	print(arr, n);

	return 0;
}