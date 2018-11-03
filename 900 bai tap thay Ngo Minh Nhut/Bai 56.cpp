#include <stdio.h>
#include <math.h>

void notifications();
void input(int *n);
bool perform(int n);

int main()
{
    int flag = 1;
    do
    {
        int n;
        notifications();
        input(&n);

        bool check = perform(n);
        if (check == false) printf("\tDUNG");
        else printf("\tSAI");

        printf("\n----------------------------------------------------------------------------------------------------");
        printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
        printf("\n----------------------------------------------------------------------------------------------------");
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\t CHECK SO NGUYEN DUONG n CO TOAN CHU SO LE HAY KHONG");
}
void input(int *n)
{
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (*n < 0)    printf("\n>>>[ERROR] Nhap n >= 0. Nhap Lai!<<<");
    } while (*n < 0);
}
// type bool(boolean) true or false.
bool perform(int n)
{
    while (n != 0)
    {
        int check = n % 10;// lay phan du de check tu phai qua trai.
        // if false thi no se nhay ra ngoai .
        if (check % 2 == 0) return true; // neu remainder for 2 thi return true.
        n /= 10;// lay so vua subtraction ra .
    }
    return false;
}
