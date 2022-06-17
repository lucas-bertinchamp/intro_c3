#include <stdio.h>
#include <string.h>

void main() {
    char chaine[100];
    scanf("%[^\n]", chaine);
    printf("%d\n", strlen(chaine));
    }
