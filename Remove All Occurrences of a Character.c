#include <stdio.h>

void remove_char(char s[], char c) {
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}
