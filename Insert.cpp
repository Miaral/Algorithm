#include<iostream>
#include<vector>

template<class T>
void Swap(T &a,T &b){
    T temp =a;
    a=b;
    b=temp;
}
void Insertsort(std::vector<int>&nums,int n){
    if(n<1)return ;
    for(int i = 0; i<n;i++){
        for(int j = i;j>0&&nums[j]<nums[j-1];j--){
            std::swap(nums[j],nums[j-1]);
        }

    }
}
void print(std::vector<int>&nums,int n){
      for (int i = 0; i < n; i++)
    {

        std::cout << nums[i] << ' ';
    }
   std::cout << std::endl;
}
int main(){
    std::vector<int>nums={12,3,6,5,16,25,9};
    Insertsort(nums,7);
    print(nums,7);
    return 0;
}