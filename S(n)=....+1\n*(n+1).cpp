// DEV_CPP
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02 ");
    int a,n;
    	a=1;
	float S;
		S=0;
	printf("Tinh S(n)=1/1x2+1/2x3+...+1/n(n+1)");
		do	
		{
			printf("\nNhap n:");
			scanf("%d",&n);
			if(n<0)
				{
					printf("Nhap sao. Nhap lai");
				}
		}
		while(n<0);
			while (a<=n)
			{
				S+=1.0/(a*(a+1));
				printf("list plus:%f\n",S);
				a++;
			}
			// lam tron 2 so thap phan
		printf("\nTong lam tron la:\t%.2f",S);
	return 0 ;
}

