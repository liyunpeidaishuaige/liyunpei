#include<stdio.h>
int main(void)
{
	int x,y,z,d,min;
	puts("请依次输入三个整数");
	printf("整数A"),scanf("%d",&x) ;printf("整数B"),scanf("%d",&y) ;printf("整数C"),scanf("%d",&z) ;
	d=(x<y)? x:y;
	min=(z<d)? z:d;
    
	printf("他们中的最小值为：%d",min);
	return 0;
}
