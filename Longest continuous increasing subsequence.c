int findLengthOfLCIS(int* nums, int numsSize) 
{
    int c=1,max=1;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]<nums[i+1])
        {
            c++;
        }
        if(nums[i]>=nums[i+1]||i==numsSize-2)
        {
            if(c>max)
            {
                max=c;
            }
            c=1;
        }

    }
    return max;
}
