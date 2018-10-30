#include <stdio.h>
#include <math.h>

void notifications();
void input(float *x, int *n);
float mu(float x, int a);// int a la gia tri i khi i++ se thuc hien tinh ham mu++
int giaiTHUA(int j);// cu moi lan i++ se gan vao j va thuc hien phep giai thua

int main()
{
    int flag = 1;
    do
    {
        float x;
        int n;
        notifications();
        input(&x, &n);
        float S = 0;
        for (int i = 1; i <= n; i++)
            // ta gan function a <=> i.
            S += mu(x,i) / giaiTHUA(i);
        printf("\n\t[KET QUA] Sn = %f\n", S);
        printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\tTINH x + (x^2)/2! + (x^3)/3! + ... + (x^n)/N!");
}
void input(float *x, int *n)
{
    printf("\n**Nhap x: \a");
    scanf("%f", &*x);// khi ket qua sai quay lai day check co gan dung hay chua
    do
    {
        printf("\n**Nhap n: \a");
        scanf("%d", &*n);
        if (*n < 1) printf("\nNhap n > 0. Nhap lai!");
    } while (*n < 1);
}
// cu moi 1 vong lap la a se tang len 1 don vi cho float mu(x,i)
float mu(float x, int a)
{
    float M = pow(double(x), double(a));// khi vong lap trong int main() , i++ thi a cung a++
    return M;
}
// ta gan j <=> i trong ham giaiTHUA(i);
int giaiTHUA(int j)
{
    int gt = 1;
    for (int i = 1; i <= j; i++)
        gt *= i;
    return gt;
}
