#include <stdio.h>

int main() {
    int n, tong  = 0;

    printf("Hay nhap vao mot so nguyen duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
       tong += i; 
    }
    printf("Tong cua cac so tu 1 den %d la: %d\n", n, tong);

    return 0;
}
