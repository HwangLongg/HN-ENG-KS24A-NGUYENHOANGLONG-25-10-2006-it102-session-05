#include <stdio.h>

int main() {
    int a, b, c, chon;
    
    while (1) {
    
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        if (chon == 1) {
 
            printf("Nhap 3 so: ");
            scanf("%d %d %d", &a, &b, &c);
        } 
        else if (chon == 2) {
 
            int tong = a + b + c;
            printf("Tong 3 so: %d\n", tong);
        } 
        else if (chon == 3) {
         
            float tbc = (a + b + c) / 3.0;
            printf("Trung binh cong: %.2f\n", tbc);
        } 
        else if (chon == 4) {
    
            int min = a;
            if (b < min) min = b;
            if (c < min) min = c;
            printf("So nho nhat: %d\n", min);
        } 
        else if (chon == 5) {
   
            int max = a;
            if (b > max) max = b;
            if (c > max) max = c;
            printf("So lon nhat: %d\n", max);
        } 
        else if (chon == 6) {
           
            break;
        } 
        else {
            printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    }
    
    return 0;
}
