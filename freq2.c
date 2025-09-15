#include <conio.h>
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    clrscr();
    printf("Enter a string = ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n' && str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
        }
    }

    printf("Character frequencies : \n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    getch();
    return 0;
}
