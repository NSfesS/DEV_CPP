#include<stdio.h>
//dung care thang (stdlib.h)
#include<stdlib.h>
 int main()
 {
  //khai bao cua ham stdlib.h
  system("color 02");
  //tinh tong so nguyen nen khai bao bang integer
  int n, S=0, i=1; 
  printf("Nhap n:\n");
  scanf("%d",&n);
   if (n <0)
   		{
		printf("ban nhap sai");
		return 0;
		}

/*code While:
  B1: May thuc hien cau lenh 1
  B2: Sau do tinh gia tri bieu thuc 1 ,neu gia tri bthuc sai thi program out. 
  Neu gia tri bthuc dung thi quay lai B1.Chu y:lenh While ktra dkien truoc moi Run*/		
	 	while (i<=n)
		{
		S+=i;
		i++;	
		}	
 printf("S(n)= 1 + 2 + 3 +...+ n : %d\n",S);
  return 0 ;
  }
