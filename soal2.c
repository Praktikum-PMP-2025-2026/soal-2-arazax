#include <stdio.h>

int rekursif(int angka, int count) {
    if (angka == 1){
        return count;
    }else if (angka % 2 == 0){
        return rekursif(angka/2, count+1);
    }else if (angka % 2 == 1){
        return rekursif(3*angka + 1, count+1);
    }
}

void hasil(int angka[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Langkah %d\n", rekursif(angka[i], 0));
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int angka[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &angka[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d\n", angka[i]);
    }
    hasil(angka, n);
    return 0;
}
