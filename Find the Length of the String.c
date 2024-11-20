#include <stdio.h>

int string_length(char s[]) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}
