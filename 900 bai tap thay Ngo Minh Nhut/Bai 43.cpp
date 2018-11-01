#include <stdio.h>
#include <stdlib.h>

void notifications();
void input(int *n);
int demSL(int n);

int main()
{
    int flag = 1;
    do
    {
        int n;
        notifications();
        input(&n);
        printf("\n[KET QUA] So luong so nguyen duong cua %d la: %d", n, demSL(n));
        printf("\n\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d",&flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\tDEM SO LUONG CHU SO NGUYEN DUONG");
}
void input(int *n)
{
    do
    {
        printf("\nNhap n: \a");
        scanf("%d", &*n);
        if (*n < 1)  printf("\n>>>[ERROR] Nhap n > 0. Nhap lai!<<<");
    } while (*n < 1);
}

int demSL(int n)
{
    int soluong = 0, dem = n;
    while (dem != 0)// khi chia con so != 0 thi interation den khi nao = 0 se dung.
    {
        soluong++;// thng nay chi co tac dung dem so lan lap .
        dem = dem / 10;// vd 35/10 = 3 interation 2 3/10 = 0 interation den end(chia so nguyen t ko can ep float).
    }
    return soluong;// phep tinh hoi so luong 
}
