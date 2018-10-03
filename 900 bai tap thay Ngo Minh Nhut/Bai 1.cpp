#include<stdio.h>
 int main()
 {
    int n, S=0, a=1; 
    printf("\nNhap n:\t");
    scanf("%d",&n);
 // xet dieu kien n > 0
	 do{
    		if (n <0) printf("ban nhap sai. Nhap Lai:");
	   }
	 while(n<0);
	while (a<=n)
	{
	S+=a;
// dua ra list cac buoc tinh
	printf("%d\n",S);
	a++;	
	}	
 printf("S(n)= 1 + 2 + 3 +...+ n : %d\n",S);
 return 0 ;
  }
