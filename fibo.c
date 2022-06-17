#include <stdio.h>

int main (int n) {
    int t[n];
    t[0] = 1;
    t[1] = 1;
    for (int i = 2; i < n; ++i){
        t[i] = t[i-1] + t[i-2];
    }
    printf("Le n-ieme nombre de fibonacci est %d\n", t[n-1]);
}

