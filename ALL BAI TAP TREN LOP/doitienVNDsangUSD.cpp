#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 int main()
 {
  system("color 02");
  printf("*--------------- WELCOME TO GITHUB ---------------*");
  printf("\n*------------------ PHONG PHAM ----------------*");
 	// tien co gia tri thap phan nen khai bao float
 	float VND , USD ;
 	 printf("Doi tien VND sang USD\n");
 	 printf("nhap la:(X000.VND): ");
 	 scanf("%f",&VND);
 	 USD = VND/23255.814;
 	 printf("thanh tien USD :%f$",USD);
 	return 0 ;
 	
 }

