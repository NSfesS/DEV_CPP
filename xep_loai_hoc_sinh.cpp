#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 02 ");
	printf("*--------------- WELCOME TO GITHUB ---------------*");
        printf("\n*------------------ PHONG PHAM ----------------*");
	float diem;
        printf("Ploai hoc sinh theo diem so, Moi ban nhap diem hoc sinh \n");
        scanf("%f",&diem);
   	 	if (diem < 0 || diem > 10)
   		
	    {
		printf("nhap diem sai ");
		return 0;
     	}
     		if (diem > 8 && diem < 10) printf("Loai Gioi");
		 		else if ( diem >= 6.5 && diem< 8) 
				printf("Loai Kha ");
		 			else if ( diem >=5 && diem < 6.5) 
			    	printf(" Loai TB");
		 				else if ( diem >= 3.5 && diem < 5) 
						printf(" Loai Yeu");
		 					else printf(" Loai Kem ");
	return 0 ;
}
