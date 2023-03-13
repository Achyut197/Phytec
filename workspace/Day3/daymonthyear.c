#include<stdio.h>
int main()
{
	int ndays,years,m,d;
	printf(" input the no of days:");
	scanf("%d",&ndays);
	years=ndays/365;
	ndays=ndays-(365*years);
	m=ndays/30;
	d=ndays-(m*30);
	printf("%d years\n %d month\n %d Day",years,m,d);
	return 0;
}



