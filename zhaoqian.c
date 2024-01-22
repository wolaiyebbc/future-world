#include <stdio.h>

int main()
{
	int price=0;
	
	printf("请输入金额（元）");
	scanf("%d",&price);
	
	int chang=100-price;
	
	printf("找您%d元\n",chang);
	
	return 0; 
}

