#include<stdio.h>
int main(void)
{
	int x,y,z;
    puts("请输入两个整数。");
	printf("整数A:");scanf("%d",&x);
	printf("整数B:");scanf("%d",&y);
	z=x-y;
	if(z>=11||z<=-11) puts("他们的差大于等于11");
	else puts("他们的差小于等于10");
		return 0;
}
