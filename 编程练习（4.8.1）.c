hello,world!

#include<stdio.h>
int main(void)
{
	char mingzi[40];
	char xingshi[40];
	
	printf("enter your first name:\n");
	scanf("%s",mingzi);  //�������ﲻ�ܹ���\n���У� 
	printf("enter your last name:\n");
	scanf("%s",xingshi);  //�������ﲻ�ܹ���\n���У�
	
	printf("%s,%s\n",mingzi,xingshi);
	
	return 0;
} 
