#include<stdio.h>
int main(void)
{
	int x,y,z,max;
	puts("������������������");
	printf("����A"),scanf("%d",&x) ;printf("����B"),scanf("%d",&y) ;printf("����C"),scanf("%d",&z) ;
	max=x;
	if(y<x) max=y;if(z<y) max=z;
	printf("�����е���СֵΪ��%d",max);
	return 0;
}
