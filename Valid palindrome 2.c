bool palindromeHelper(char *s, int left, int right){
    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool validPalindrome(char *s) {
    // Two pointer solution 
    // Iterate with two pointers and then check if there is a different character
    // If there is, then try for both different cases of skipping one to the left or right
    // If both fail, return false
    int l = 0;
    int r = strlen(s)-1;
    while(l < r){
        if(s[l] != s[r]){
            return palindromeHelper(s,l+1,r)||palindromeHelper(s,l,r-1);
        }
        l++;
        r--;
    }
    return true;
}
