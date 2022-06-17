#include <stdio.h>

void main () {
    int nb = 0;

    scanf("%d", &nb);

    int t[nb];
    t[0] = 1;
    t[1] = 1;

    for (int i = 2; i < nb; ++i){
        t[i] = t[i-1] + t[i-2];
    }

    printf("Le %d-ieme nombre de fibonacci est %d\n", nb, t[nb-1]);
}

