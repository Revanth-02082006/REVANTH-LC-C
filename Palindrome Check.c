#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_palindrome(char s[]) {
    int start = 0, end = string_length(s) - 1;
    while (start < end) {
        while (start < end && !isalnum(s[start])) start++;
        while (start < end && !isalnum(s[end])) end--;
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
