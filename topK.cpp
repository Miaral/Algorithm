#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int partition(int *nums, int left, int right)
{
    int pivot = nums[left];
    int first = left;
        while (left < right) {
            while (left < right & nums[right] >= pivot) {
                right--;
            }
            while (left < right & nums[left] <= pivot) {
                left++;
            }
            if(left < right){
                int tem = nums[right];
                nums[right] = nums[left];
                nums[left] = tem;
            };
        }
        nums[first] = nums[left];
        nums[left] = pivot;
        return left;
}
int theKthNumber(int *nums, int n, int k){
    int left = 0;
    int right = n - 1;
    int target = n - k;
    while (true) {
        int p = partition(nums, left, right);
        if (p == target) {
            return nums[p];
        } else if (target < p) {
            right = p - 1;
        } else {
            left = p + 1;
        }
    }
}
int main(){
    int len,k;
    scanf("%d%d", &len, &k);
    int *N = (int *)malloc(len*(sizeof(int)));
    for (int i = 0; i <len ; ++i) {
        scanf("%d", &N[i]);
    }
    printf("%d\n",theKthNumber(N, len, k));
    return 0;
}
