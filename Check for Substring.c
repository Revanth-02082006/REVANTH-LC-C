#include <stdio.h>
#include <stdbool.h>

bool contains_substring(char main_str[], char sub_str[]) {
    int i, j;
    for (i = 0; main_str[i] != '\0'; i++) {
        for (j = 0; sub_str[j] != '\0' && main_str[i + j] == sub_str[j]; j++);
        if (sub_str[j] == '\0') {
            return true;
        }
    }
    return false;
}
