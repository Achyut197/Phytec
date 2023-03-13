#include<stdio.h>
int main()
{
	int amt, total;
	printf("amount is:");
	scanf("%d",&amt);
	total=amt/100;
	printf("\n there are:");
	printf("\n %d note of 100.00\n:",total);
	amt=amt-(total*100);
	total=amt/50;
	printf("\n %d note of 50.00\n:",total);
        amt=amt-(total*50);
	total=amt/20;
        printf("\n %d note of 20.00\n:",total);
	amt=amt-(total*20);
	total=amt/10;
	printf("\n %d note of 10.00\n:",total);
        amt=amt-(total*5);
	total=amt/5;
        printf("\n %d note of 5.00\n:",total);
        printf("\n %d note of 2.00\n:",total);
        amt=amt-(total*2);
        total=amt/1;
	printf("%d note of 1.00\n:",total);
	return 0;
}



