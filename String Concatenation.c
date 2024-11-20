#include <stdio.h>

void concatenate_strings(char s1[], char s2[]) {
    int i = 0, j = 0;
    while (s1[i] != '\0') {
        i++;
    }
    while (s2[j] != '\0') {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';
}
