#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
	printf("Noi chuoi ky tu s1 voi s2");
	char s1[MAX], s2[MAX];
	printf("\nNhap chuoi ky tu 1:\t");
	gets(s1);
	printf("\nNhap chuoi ky tu 2:\t");
	gets(s2);
	printf("\nS1 noi S2 la:=>");
	printf("%s %s",s1,s2);
	return 0 ;
}
