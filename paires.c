#include <stdio.h>

void main () {
    int c = 0;
    int t[50];
    for (int i = 0; i< 100; i = i+2){
        t[c] = i;
        ++c;
    }
    print_tableau(t, 50);
}

void print_tableau(int tab[], int len) {
    for (int i=0; i<len; ++i){
        printf("%d ", tab[i]);
    }
    printf("\n");
}
