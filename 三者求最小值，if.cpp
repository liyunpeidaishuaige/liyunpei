#include<stdio.h>
int main(void)
{
	int x,y,z,max;
	puts("请依次输入三个整数");
	printf("整数A"),scanf("%d",&x) ;printf("整数B"),scanf("%d",&y) ;printf("整数C"),scanf("%d",&z) ;
	max=x;
	if(y<x) max=y;if(z<y) max=z;
	printf("他们中的最小值为：%d",max);
	return 0;
}
