#include<stdio.h>
int main()
{
	float x1,x2,item1,item2,average;
	printf("weight of item1:");
	scanf("%f",&x1);
	printf("\n weight of item2:");
        scanf("%f",&x2);
	printf("\n no of item1 purchases:");
	scanf("%f",&item1);
	printf("\n no of item2 purchases:");
	scanf("%f",&item2);
        average=((x1*item1)+(x2*item2))/(item1+item2);
	printf("\n avg value is=%f\n",average);
	return 0;
}



