/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) 
{
    int numTracker[10001] = {0};
    int i = 0, c = 0;
    for (i = 0; i < numsSize; i++)
    {
        numTracker[nums[i]]++;
        if (numTracker[nums[i]] > 1)
        {
            c++;
        }
    }
    *returnSize = 2*c;

    // Print duplicate first and then the missng number.
    int* ans = malloc((2*c)*sizeof(int));
    int k = 0, j = 0, l = 1;
    for (i = 1; i < numsSize + 1; i++)
    {
        if (numTracker[i] > 1)
        {
            ans[k++] = i; // Print the duplicate first
            for (j = l; j < numsSize + 1; j++)
            {
                if (numTracker[j] == 0)
                {
                    ans[k++] = j;
                    l = j + 1;
                    break;
                }
            }
        }
    }
    return ans;
}
