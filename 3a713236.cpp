    
#include <stdio.h>
#include<stdlib.h>

int main() 
{
	int year;
	printf("請輸入一個年份:");
	scanf("%d",&year);
	if((year % 4==0)&&(year%100 !=0)||(year % 400==0))
	printf("%d是閏年",year);
	else
	printf("%d是平年",year);
	return 0;
}
