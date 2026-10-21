#include <stdio.h>

int main() {
    char ch = 'a';

    do {
        printf("%c", ch);

        if (ch + 4 <= 'z') {
            printf(", ");
        }

        ch = ch + 4;

    } while (ch <= 'z');

    return 0;
}