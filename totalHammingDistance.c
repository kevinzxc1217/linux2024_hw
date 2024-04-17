#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <stdint.h> 

int totalHammingDistance(int* nums, int numsSize)
{
    int total = 0;;
    for (int i = 0;i < numsSize;i++)
        for (int j = 0; j < numsSize;j++)
            total += __builtin_popcount(nums[i] ^ nums[j]); 
    return total >> 1;
}

int main()
{
    int nums[4] = {4, 14, 2};
    int ans = totalHammingDistance(nums, 3);
    printf("%d",ans);

    return 0;
}