#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
system("color 02");
float a,b,c,delta;
printf("\n Nhap vao a:\t");
scanf("%f",&a);

printf("\n Nhap vao b:\t");
scanf("%f",&b);

printf("\n Nhap vao c:\t");
scanf("%f",&c);

if(a==0)
{
	if(b==0)
	{
	if(c==0) printf("\n Phuong trinh  co vo so nghiem!");
	else printf("\n Phuong trinh  vo nghiem!");
	}
	else printf("\n Phuong trinh da cho co nghiem la: %.3f",-c/b);
}
else
{
delta=b*b-4*a*c;
if (delta<0) printf("phuong trinh da cho vo nghiem!");
else if (delta=0) printf("phuong trinh da cho co nghiem kep la: %.3f",-b/(2*a));
else printf("phuong trinh da cho co 2 nghiem la: x1= %.3f\t x2= %.3f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
}
system("color 05");
return 0;
}
