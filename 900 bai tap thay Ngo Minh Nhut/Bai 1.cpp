#include<stdio.h>
// dung quan tam thang nay
#include<stdlib.h>
 int main()
 {
    system("color 02");
    int n, S=0, i=1; 
    printf("\nNhap n:\t");
    scanf("%d",&n);
 // xet dieu kien n > 0
	 do{
    		if (n <0) printf("ban nhap sai. Nhap Lai:");
	   }
	 while(n<0);
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
