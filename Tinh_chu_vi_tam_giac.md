// C = 2pir 
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
	int main()
{
	system("color 02");
	float r, C ;
	float pi = 3.14;
	printf("Nhap r :\n");
	scanf("%f",&r);
	C = 2*pi*r;
	printf("Chu Vi : %f (m^2)",C);
	return 0;
}
