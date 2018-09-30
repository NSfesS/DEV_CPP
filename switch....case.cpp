//DEV_CPP
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02 ");
    int  a;
    printf("Nhap so 1 hoac 2 : \n");
    scanf("%d",&a);
    	if (a != 1 && a != 2)
			{
			printf("Nhap sai roi ");
			return 0;
			}
		// ham lenh switch(_) khong co ";"
   	 		switch (a)
   	 			{
   	 			case 1: printf("104 Nguyen Van Troi, P8 , Phu Nhuan , Ho Chi Minh ");
   	 			// break neu xet dung xe dung lai.
   	 					break;
   	 			case 2:  printf("18A/1 Cong Hoa ");
   	 				  	break;
				}
	return 0 ;
}

