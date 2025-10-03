#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>

void stringLength(char str[]) {
    printf("Length of the string = %d\n", strlen(str));
}

void stringReverse(char str[]) {
    int len, i;
    char rev[100];
    len = strlen(str);
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);
}

void stringCompare(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal\n");
    else
        printf("Strings are NOT equal\n");
}

void stringConcat(char str1[], char str2[]) {
    char result[200];
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string = %s\n", result);
}

void checkPalindrome(char str[]) {
    int len, i, flag = 1;
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is NOT a palindrome\n", str);
}

void main() {
    char str1[100], str2[100];
    int choice;
    clrscr();
    while (1) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Compare Two Strings\n");
        printf("4. Concatenate Two Strings\n");
        printf("5. Check Palindrome\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1);
                stringLength(str1);
                break;
            case 2:
                printf("Enter a string: ");
                gets(str1);
                stringReverse(str1);
                break;
            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                stringCompare(str1, str2);
                break;
            case 4:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                stringConcat(str1, str2);
                break;
            case 5:
                printf("Enter a string: ");
                gets(str1);
                checkPalindrome(str1);
                break;
            case 6:
                printf("Exiting program...\n");
                getch();
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
