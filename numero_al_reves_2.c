#include<stdio.h>//libreria e/s
int Max[10],y=0,b;
int main() 
{
	for(y=0;y<9;y++) 
	{
		printf("dame 10 numeros");
		scanf("%d\n",&Max[y]);
	}
	for(y=9;y>-9;y--)
	 {
	 	printf("los numeros al reves son:%d\n",Max[y]);	
	 }  
	 system("pause");  
}
