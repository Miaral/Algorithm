#include<iostream>
#include<vector>

using  namespace std;

template<class T>
void Swap(T &a,T &b){
    T temp =a;
    a=b;
    b=temp;
}

void bubblesort(int arr[],int n){
    if(n<=1)return ;
    bool is_swap = false;
    for(int i = 1;i < n;++i){
        is_swap = false;
        for(int j = 1;j<n+1-i;j++){
            if (arr[j] < arr[j-1]) {
                swap(arr[j], arr[j-1]);
                is_swap = true;
            }
        }
        if(!is_swap)break;
    }
}
void print(int arr[],int n){
     for (int i = 0; i < n; i++)
    {

        cout << arr[i] << ' ';
    }
    cout << endl;
}
int main() {
    int arr[] = {34,66,2,5,95,4,46,27};
    bubblesort(arr,sizeof(arr)/sizeof(int)); //cout => 2 4 5 27 34 46 66 95
    print(arr,sizeof(arr)/sizeof(int));
    return 0;
}