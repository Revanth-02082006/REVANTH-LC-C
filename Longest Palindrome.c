int longestPalindrome(char *s) {
    int set[128] = {0};
    int l = 0, a = 0;
    for (; *s; s++) {
        if (!set[*s]) { set[*s] = 1; a += 1; }
        else { set[*s] = 0; l += 2; a -= 1; }
    }
    return l + (a ? 1 : 0);
}
