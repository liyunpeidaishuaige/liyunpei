#include<stdio.h>
int main(void)
{
	int x,y,z,d,max;
	puts("请依次输入四个整数");
	printf("整数A"),scanf("%d",&x) ;printf("整数B"),scanf("%d",&y) ;printf("整数C"),scanf("%d",&z) ;printf("整数D"),scanf("%d",&d) ;
	max=x;
	if(y>x) max=y;if(z>y) max=z;if(d>z)max=d;
	printf("他们中的最大值为：%d",max);
	return 0;
}
