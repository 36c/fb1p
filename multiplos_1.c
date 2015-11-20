#include<stdio.h>
int Mayor[10];
int d=0;
int e;
int main()
{
	printf("dame el numero\n");
	scanf("%d",&e);
	for(d=0;d<10;d++)
	{
	Mayor[d]=e*(d+1);
	printf("Sus multiplos son:%d\n", Mayor[d]);	
	}
}

