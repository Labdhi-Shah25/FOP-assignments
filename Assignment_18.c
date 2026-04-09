#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], sub[100], rev[100];
    int length, i, j, is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str1);

    length = 0;
    while (str1[length] != '\0') {
        length++;
    }
    printf("Length of string = %d\n", length);

    j = 0;
    for (i = length - 1; i >= 0; i--) {
        rev[j] = str1[i];
        j++;
    }
    rev[j] = '\0';
    printf("Reversed string = %s\n", rev);

    for (i = 0; i < length; i++) {
        if (str1[i] != rev[i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 1) {
        printf("The string is a Palindrome\n");
    } else {
        printf("The string is not a Palindrome\n");
    }

    printf("Enter another string for equality check: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    if (strstr(str1, str2) != NULL) {
        printf("Substring found in main string\n");
    } else {
        printf("Substring not found\n");
    }

    return 0;
}