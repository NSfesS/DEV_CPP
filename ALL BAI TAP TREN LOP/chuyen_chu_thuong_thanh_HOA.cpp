#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
	int flag=1;
	do
	{
    char Kytu[MAX];
	    printf("Nhap vao chuoi(chu thuong)\n>");
      //Nhap ky tu vao may
	 	gets(Kytu);
	 	printf("Chuoi ky tu thuong\n>");
    // in ra ky tu vua nhap
	    puts(Kytu);
	    printf("chuoi ky tu in HOA la\n=>\t");
      //code chuyen ky tu thuong thanh HOA
	    strupr(Kytu);
	    puts(Kytu);
	printf("Nhap 0 de thoat,Nhap ky tu bat ky de tiep tuc:\n");
	scanf("%d",flag);
	}while(flag!=0);
	return 0 ;
}
