#include <stdio.h>

int removeElement(int *nums, int numsSize, int val) {
    int count = 0;

    for (int i = 0; i < numsSize; i++)
        if (nums[i] == val) 
            count++;
        else 
            nums[i - count] = nums[i];
    return (numsSize - count);
}

int main() {
    // Example 1
    int nums1[] = {3, 2, 2, 3};
    int val1 = 3;
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1 = removeElement(nums1, numsSize1, val1);
    printf("Output: %d, nums = [", k1);
    for (int i = 0; i < k1; i++) {
        printf("%d", nums1[i]);
        if (i < k1 - 1) printf(", ");
    }
    for (int i = k1; i < numsSize1; i++) {
        printf(", _");
    }
    printf("]\n");

    // Example 2
    int nums2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2 = removeElement(nums2, numsSize2, val2);
    printf("Output: %d, nums = [", k2);
    for (int i = 0; i < k2; i++) {
        printf("%d", nums2[i]);
        if (i < k2 - 1) printf(", ");
    }
    for (int i = k2; i < numsSize2; i++) {
        printf(", _");
    }
    printf("]\n");

    return 0;
}