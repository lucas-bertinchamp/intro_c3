#include <stdio.h>

void main() {
    char str[100];
    scanf("%[^\n]", str);
    printf("%s\n", str);
}
