char * reverseStr(char * s, int k){
    //Time complexity: O(n), where n is the length of s
    //Space complexity: O(1), work is done in-place 
    int stringLength = strlen(s);

    for(int i = 0; i < stringLength - 1; i += 2*k)
    {
        int left = i;
        //we need to make sure we don't assign right to be greater than
        //the largest index of s
        int right = (i + k - 1) > stringLength - 1 ? stringLength - 1 : i + k - 1;
        //make the appropriate reversale
        while(left < right)
        {
            char temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }
    }
    return s;
}
