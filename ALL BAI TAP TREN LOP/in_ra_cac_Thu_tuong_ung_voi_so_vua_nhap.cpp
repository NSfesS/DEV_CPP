#include <stdio.h>
int main()
{
    int a=0;
	do 
	{
		printf("Nhap vao so de in ra Thu tuong ung:\t");
		scanf("%d",&a);
	}
	while(a<=0||a>=7);
		switch(a)
		{
			case 2: printf("Thu 2");
			break;
			case 3: printf("Thu 3");
			break;
			case 4: printf("Thu 4");
			break;
			case 5: printf("Thu 5");
			break;
			case 6: printf("Thu 6");
			break;
			case 7: printf("Thu 7");
			break;
			case 8: printf("Thu CN");
			break;
			default: printf("ERROR");
			break;
		}
	return 0 ;
}
