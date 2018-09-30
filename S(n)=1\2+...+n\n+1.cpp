//DEV_CPP
#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 02 ");
	int a ,n;
		a=1;
	float S;
		S=0;
	printf("S(n)=1/2 + 2/3 + 3/4 + .... + n / n + 1)");
	 	do
	 	{
	 		printf("\nNhap n:");
	 		scanf("%d",&n);
	 		if(n<1)
	 		printf("Nhap sai. Nhap lai");
		 }
		 while (n<1);
		while(a<=n)
		{
			S+=a/a+1;
			printf("\nList plus:%f",S);
			a++;
		}
	printf("\nTong la:\t%.2f",S);
	return 0 ;
}

