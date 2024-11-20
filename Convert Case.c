#include <stdio.h>
#include <ctype.h>

void convert_case(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        }
    }
}
