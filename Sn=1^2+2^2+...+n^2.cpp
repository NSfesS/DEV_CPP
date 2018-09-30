#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02 ");
    printf("*--------------- WELCOME TO GITHUB ---------------*");
    printf("\n*------------------ PHONG PHAM ----------------*");
    printf("\nLien he:phongpham663@gmail.com");
    int i=1,S=0,n;
    printf("Nhap n bat ky:\t");
    scanf("%d",&n);
    	while(i<=n)
    	{
    		S+=i*i;
    		// dua ra list cac buoc tinh
    		printf("%d\n",S);
    		i++;
		}
	printf("S = %d\n",S);
	return 0 ;
}

