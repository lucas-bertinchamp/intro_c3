#include <stdio.h>

void main(int tab1[], int tab2[]) {
    int n = sizeof(tab1);
    int tab3[n];
    for (int i=0; i<n; ++i){
        tab3[i] = tab1[i] + tab2[i];
    }
}