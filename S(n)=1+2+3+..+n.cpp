#include<stdio.h>
#include<stdlib.h>
 int main()
 {
  system("color 02");
  int n, S=0, i=1;
  printf("Nhap n:\n");
  scanf("%d",&n);
   if (n <0)
   		{
		printf("ban nhap sai");
		return 0;
			}
		while (i<= n)
		{
		S+=i;
		i++;	
			}	
 printf("S(n)= 1 + 2 + 3 +...+ n : %d\n",S);
  return 0 ;
  }
