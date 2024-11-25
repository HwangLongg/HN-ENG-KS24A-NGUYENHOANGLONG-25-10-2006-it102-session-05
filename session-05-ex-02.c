#include <stdio.h>

int main() {
    int a = 15, b;
    
   
    printf("Hay nhap vao so cho den khi bang 15: ");
    scanf("%d", &b);  

    
    while (a != b) {
        printf("So ban nhap chua dung. Hay nhap lai: ");
        scanf("%d", &b); 
    }
    
   
    printf("Da nhap dung so 15.\n");
    return 0;
}
