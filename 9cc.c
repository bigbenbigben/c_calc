#include <stdio.h>

int main(void) {
    char buf[256];
    int number;
    scanf("%255s", buf);

    number = buf[0] - '0';
    printf("%d\n", number);
}