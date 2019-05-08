
#include <stdio.h>
#include <stdlib.h>

// c++不熟悉,没法像其他几种语言那样使用map，索性就使用常规的暴力方法解决
int* twoSum1(int* nums, int numsSize, int target,int* returnSize ) {
    *returnSize=0;
    if(nums == NULL){
        return NULL;
    }
    int* indexes = (int*)malloc(2*sizeof(int)+1);
    for ( int i = 0; i < numsSize; i++) {
        for ( int j = i+1; j < numsSize; j++) {
            if(nums[i]+nums[j] == target){
                indexes[0] = i;
                indexes[1] = j;
                *returnSize = 2;
                return indexes;
            }
        }
    }
    return NULL;
}

int main(void) {
    int nums[] = { -1,6,3,2,3 };
    int count = sizeof(nums) / sizeof(*nums);
    int target = 6;
    int returnSize;
    int* indexes = twoSum1(nums, count, target,&returnSize);
    if (indexes != NULL && returnSize==2) {
        printf("%d %d\n", indexes[0], indexes[1]);
    } else {
        printf("Not found\n");
    }
    return 0;
}