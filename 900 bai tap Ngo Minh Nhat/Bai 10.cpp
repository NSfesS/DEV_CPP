#include<stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
system("color 02");//mau xanh la de
int n,x,T;

printf("\nNhap n = ");
scanf("%d",&n);

while (n < 0 );
printf("\nnhap x =");
scanf("%d",&x);

T=pow(x,n);
printf("\n\t Tinh %d^%d=%d",x,n,T);
return 0;
}
