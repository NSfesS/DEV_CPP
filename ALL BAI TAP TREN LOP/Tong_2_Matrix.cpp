#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
	int flag=1;
	do
	{
	    printf("Tinh tong cua 2 ma tran\n");
	    
	    int a1[MAX][MAX],a2[MAX][MAX];
	    int row,col;
	    // Nhap ma tran
	    do
		{
	    	printf("Nhap vao dong:",row);
	    	scanf("%d",&row);
	    	
	    	printf("\nNhap vao cot:",col);
	    	scanf("%d",&col);
	    	
	    	if((row <=0 || row > MAX )|| (col <=0 || col > MAX) )	printf("Nhap sai, Nhap lai!\n");
		} while ((row <=0 || row > MAX )|| (col <=0 || col > MAX));
		
		printf("Ma tran a1\n");
		int i,j;
		
		for (i=0;i< col;i++)
		{
			for(j=0;j<row;j++)
			{
				printf("a[%d][%d]",i,j);
				scanf("%d",&a1[i][j]);
			}
		printf("\n");
		}
		
		printf("Ma tran a2\n");
		for (i=0;i< col;i++)
		{
			for(j=0;j<row;j++)
			{
				printf("a[%d][%d]",i,j);
				scanf("%d",&a2[i][j]);
				// viet tat cho printf("a[%d][&d]",i,j);	
				//printf("\t");
			}
		printf("\n");
		}
		// tinh tong 2 ma tran
		int S;
		printf("Tong ma tran la\t");
		for(i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
			{
				S=a1[i][j]+a2[i][j];
				printf(" %d",S);
			}
		printf("\n");
		}
	printf("\nNhap 0 de thoat,Nhap so bat ky de tiep tuc:[_]\b\b");
	scanf("%d",&flag);
	}while(flag!=0);
	return 0 ;
}	
