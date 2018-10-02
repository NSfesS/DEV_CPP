//DEV CPP WITH PHONG PHAM/https://www.facebook.com/phongpham147
#include <stdio.h>
int main()
{
    int a, n ;
    	a=1;
    float S;
    	S=0;
    	do
    		{
    			printf("\nNhap n:\t");
    			scanf("%d",&n);
    				if(n<1) printf("\nNhap n>=1. Nhap lai!");
			}while(n<1);
				while(a<=n)
				//for(a=0;a<=n;a++)
					{
						S+=float(2*a+1)/(2*a+2);// tren tu la mot complex 
						printf("%f\n",S);
						a++;
					}
					printf("Sn=...+(2n+1)/(2n+2)=%f",S);
	return 0 ;
}

