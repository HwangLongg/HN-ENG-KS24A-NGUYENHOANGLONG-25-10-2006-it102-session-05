# include <stdio.h>
int main (){
    int a , b, c , d , a1 , b1 , ucln  ;
    printf ("nhap vao 2 so nguyen duong bat ky ");
    scanf ("%d",&a);
     a1 = a ;
    scanf ("%d",&b);
    b1 = b ;
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
            ucln = a ;
            printf ("UCLN = %d ",a);
            break ;
        }
        b = a % c ;
         if (b == 0){
            ucln = c ;
            printf ("UCLN = %d ",c);
            break ;
        }
        a = c % b ;
         if (a == 0){
            ucln = b ;
            printf ("UCLN = %d ",b);
            break ;
        }
    }
    }
     d = a1 * b1 / ucln ;
    printf (" BCNN = %d ",d);
    return 0 ;
}