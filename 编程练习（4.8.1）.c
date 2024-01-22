hello,world!

#include<stdio.h>
int main(void)
{
	char mingzi[40];
	char xingshi[40];
	
	printf("enter your first name:\n");
	scanf("%s",mingzi);  //输入这里不能够加\n换行； 
	printf("enter your last name:\n");
	scanf("%s",xingshi);  //输入这里不能够加\n换行；
	
	printf("%s,%s\n",mingzi,xingshi);
	
	return 0;
} 
