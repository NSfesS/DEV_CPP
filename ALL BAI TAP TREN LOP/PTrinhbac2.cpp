// còn nhiều sai sót lắm đang view và Fix dần
#include<stdio.h>
#include<math.h>
int main()
 {
 	float a , b , c , x1 , x2 , delta;
 	 printf("giai ptrinh bac 2 ax^2 + bx + c = 0 \n Nhap a:\n");
 	 scanf("%f",&a);
 	 printf("Nhap b:\n");
 	 scanf("%f", &b);
 	 printf("Nhap c:\n",&c);
 	 scanf("%f",&c);
 	if (a==0)
	 {
 		if (b==0) 
		     {
 			if (c==0)
 			printf("Ptrinh vo so nghiem");
 			else 
 			printf("Ptrinh vo nghiem");
 			
			 }
			 else
			  {
			 	x1=(-b)/c;
			 	printf("Ptrinh co 1 nghiem dac biet: %f",x1);
			 }
 			
	 }	
	else 
	 {
		 	delta = b*b - 4*a*c;
		 	if ( delta < 0)
		 	printf("Ptrinh vo nghiem");
		 	if(delta > 0) 
		 	{
		 	  	x1 = (-b + sqrt(delta))/(2*a);
		 	  	x2 = (-b - sqrt(delta))/(2*a);
		 	  	printf("ptrinh co 2 nghiem pbiet\t");
		 	 	printf("nghiem x1 :");
		 	  	printf("%f",x1);
		      	printf("nghiem x2 :");
		 		printf("%f",x2);
		     		if(delta = 0)
					 {
				    	x1 =  (-b)/2*a;
		     			printf("Ptrinh co 1 nghiem kep");
		     			printf("x1=x2: %f",x1);
		        	 }
		    }
			
	 }
 	return 0 ;
 	
 }
