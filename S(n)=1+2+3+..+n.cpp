#include<stdio.h>
// dung quan tam thang nay
#include<stdlib.h>
 int main()
 {
    system("color 02");
    printf("*--------------- WELCOME TO GITHUB ---------------*");
    printf("\n*------------------ PHONG PHAM ----------------*");
    printf("\nLien he:phongpham663@gmail.com");
    int n, S=0, i=1; 
    printf("Nhap n:\t");
    scanf("%d",&n);
 // xet dieu kien n > 0
    if (n <0)
   		{
		printf("ban nhap sai");
		return 0;
		}
	 	while (i<=n)
		{
		S+=i;
// dua ra list cac buoc tinh
		printf("%d\n",S);
		i++;	
		}	
 printf("S(n)= 1 + 2 + 3 +...+ n : %d\n",S);
  return 0 ;
  }
