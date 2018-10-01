//DEV_CPP_whith:PHONG PHAM
#include <stdio.h>
#include <stdlib.h>
// libary clear console man hinh(system("cls");)
#include <conio.h>
int main()
{
    system("color 02 ");
    // flag khi an 0 program stop
    int n,flag=1;
    printf("Kiem tra so nguyen duong n nhap vao la chan hay le");
	    do	
	    {
	    	// clear console
	    	system("cls");
	    	printf("\nNhap n:\t");
	    	scanf("%d",&n);
	    	// n khac o 
			    if(n!=0)
			    {
				if(n%2==0) printf("So chan");
				else printf("So le");
				}
				else printf("Khong chan khong le");
			printf("\nNhap 0 de thoat, Nhap so bat ky de tiep tuc:\t");
			scanf("%d",&flag);
		}
		while(flag!=0);
		system("color 05");
	getch();
	return 0 ;
}
