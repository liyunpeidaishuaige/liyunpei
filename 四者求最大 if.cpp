#include<stdio.h>
int main(void)
{
	int x,y,z,d,max;
	puts("�����������ĸ�����");
	printf("����A"),scanf("%d",&x) ;printf("����B"),scanf("%d",&y) ;printf("����C"),scanf("%d",&z) ;printf("����D"),scanf("%d",&d) ;
	max=x;
	if(y>x) max=y;if(z>y) max=z;if(d>z)max=d;
	printf("�����е����ֵΪ��%d",max);
	return 0;
}
