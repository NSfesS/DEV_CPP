#include <stdio.h>
#include <math.h>

void notifications();
void input(float *x, int *n);
float mu(float x, int mu_n);      

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
        {
            S = sqrt(double(mu(x, i)) + S);
        }
        printf("\n\t[KET QUA] Sn = %f", S);
        printf("\n\t\t Nhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
// function nay co the co hoac khong
void notifications()
{
    printf("\nTINH sqrt(x^n + sqrt(x^n-1 +...+ sqrt(x^2 + sqrt(x)))) co n sqrt");
}
void input(float *x, int*n)
{
    printf("\n**Input x: \a");
    scanf("%f", &*x);// can ham gan phai dung type 
    do
    {
        printf("\n**Input n: \a");
        scanf("%d", &*n);// can than ham gan phai dung type
        if (*n < 3)  printf("\nPhai Nhap n > 2. Nhap lai!");
    } while (*n < 3);
}
// co the lam gon bang cach khac.
float mu(float x, int mu_n)
{
    float S = pow(double(x), double(mu_n));
    return S;
}
// neu ra ket qua sai B1 xem lai function input.
