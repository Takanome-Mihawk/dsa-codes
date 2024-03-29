#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result); // Free the memory allocated in twoSum
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int *arr = NULL;

    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                arr = (int *)malloc(2 * sizeof(int));
                if (arr == NULL) {
                    return NULL;
                }
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
            }
        }
    }

    *returnSize = 0;
    return NULL;

}
