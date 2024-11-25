# include <stdio.h>
int main (){
    int a , b, c ;
    printf ("nhap vao 2 so nguyen duong bat ky ");
    scanf ("%d",&a);
    scanf ("%d",&b);
    if (a > b){
    for ( int i = 1 ; i > 0 ; i ++ ){
        c = a % b;
        if (c == 0){
            printf ("UCLN = %d ",b);
            break ;
        }
        a = b % c ;
         if (a == 0){
            printf ("UCLN = %d ",c);
            break ;
        }
        b = c % a ;
         if (b == 0){
            printf ("UCLN = %d ",a);
            break ;
        }
    }
    }
    else if (a < b){
    for ( int i = 1 ; i > 0 ; i ++ ){
        c = b % a;
        if (c == 0){
            printf ("UCLN = %d ",a);
            break ;
        }
        b = a % c ;
         if (b == 0){
            printf ("UCLN = %d ",c);
            break ;
        }
        a = c % b ;
         if (a == 0){
            printf ("UCLN = %d ",b);
            break ;
        }
    }
    }
}