#include<stdio.h>
int main(void)
{
	int x,y,z;
    puts("����������������");
	printf("����A:");scanf("%d",&x);
	printf("����B:");scanf("%d",&y);
	z=x-y;
	if(z>=11||z<=-11) puts("���ǵĲ���ڵ���11");
	else puts("���ǵĲ�С�ڵ���10");
		return 0;
}
