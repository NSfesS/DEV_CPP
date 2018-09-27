#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02 ");
    int a = 1, n;
    float S = 0;
    	do
		{
			printf("\nNhap n:");
			scanf("%d",&n);
			if(n < 1)
			{
				printf("Ban da nhap sai:Moi ban nhap lai:");
			}
		}
		while(n<1);
			while (a<=n)
			{
			S+=1.0/(2*n +1);
			printf("%f\n",S);
			a++;
			}
		printf("Sn=%f",S);
		return 0 ;
}
