#include <stdio.h>
int main(void)
{
	int x;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	printf("绝对值是：");
	if (x>0) 
	printf("%d",x);
	else
	printf("%d",-x);
	return 0;
	 
 } 
