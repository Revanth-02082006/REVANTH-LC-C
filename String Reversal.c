#include <stdio.h>

void reverse_string(char s[]) {
    int start = 0, end = string_length(s) - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
