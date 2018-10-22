#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
int t[MAX], s[MAX], n, i,j;
void nhapSOXEMAY();
int tbTIME();
int tbKM();

int main()
{
	system("color 02");
	printf("\t\t\t\t\tVAN TOC TRUNG BINH TAT CA XE MAY");
	int tbkm();
	int tbtime();
	nhapSOXEMAY();

	float S;
	S = float (tbKM())/tbTIME();
	printf("\n\t =>>> Van toc trung binh cua %d xe = %.3f (km/h)", n, S);
	system("pause");
	return 0;
}

void nhapSOXEMAY()
{
	printf("\n Nhap so xe may:\a");
	scanf("%d", &n);
	//printf("So xe may: %d",soXEMAY)
	for (i = 1; i <= n; i++)
	{
		printf("\nThoi gian(h) xe %d =\a ", i);
		scanf("%d", &t[i]);
		printf("Quang duong(km) xe %d =\a ", i);
		scanf("%d", &s[i]);
	}
}

int tbTIME()
{
	float tbtime;
	int ttime = 0;
	for (i = 1; i <= n; i++)
	{
		// tb tgian
		ttime += t[i];
		tbtime = float(ttime) / n;
	}
	printf("\n>>[time] TB time  %d xe = %.3f (h)", n, tbtime);
	return tbtime;
}

int tbKM()
{
	float tbkm;
	int tkm = 0;
	for (i = 1; i <= n; i++)
	{
		tkm += s[i];
		tbkm = float(tkm) / n;
	}
	printf("\n\t>>[km] TB km %d xe = %.3f (km)", n, tbkm);
	return tbkm;
}
