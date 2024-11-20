#include <stdio.h>
#include <ctype.h>

void count_vowels_consonants(char s[], int *vowels, int *consonants) {
    *vowels = *consonants = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}
