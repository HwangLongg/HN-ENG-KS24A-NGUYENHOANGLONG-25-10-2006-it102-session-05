#include <stdio.h>
int main () {
    int a , c;
    printf ("nhap vao so nguyen duong tu 1 - 10  ");
    scanf ("%d",&a);
    if ( a > 0 && a < 11) {
        for ( int i = 1 ; i < 10 ; i ++ ){
            c = a * i ;
            printf ("%d * %d = %d \n ", a , i , c);
        }
    }
    else {
        printf (" so vua nhap khong nam trong khoang 1 - 10");
    }
    return 0 ;
}