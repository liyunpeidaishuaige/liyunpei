#include<stdio.h>
int main(void)
{
	int i;int x;int y;printf("请输入一个整数：");scanf("%d",&x);
 
	for(i=1;i<=x;i++){
		printf("%d",i%10);
	}
	return 0;
}
