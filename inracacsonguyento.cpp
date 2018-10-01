# DEV_CPP
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    system("color 02 ");
	int a[MAX];
	int flag=0,j;
		do
		{
			printf("a[%d]",flag);
			scanf("%d",&a[flag]);
			// se bi du 1 khi thoat ra
			flag++;
		}
		while(a[flag-1]!=0&&flag < MAX);
			for (int i=0;i<flag-1;i++)
			{
				j =2;
				do
				{
					if (a[i]%2==0) break;
					j++;	
				}
				while (j<a[i]);
					if(j>=a[i]) printf("\na[%d]=%d\tSo nguyen to ",i,a[i]);
					else printf("\na[%d]=%d\tkhong la so nguyen to",i,a[i]);
			}
	return 0 ;
}

