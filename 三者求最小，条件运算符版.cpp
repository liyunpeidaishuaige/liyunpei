#include<stdio.h>
int main(void)
{
	int x,y,z,d,min;
	puts("������������������");
	printf("����A"),scanf("%d",&x) ;printf("����B"),scanf("%d",&y) ;printf("����C"),scanf("%d",&z) ;
	d=(x<y)? x:y;
	min=(z<d)? z:d;
    
	printf("�����е���СֵΪ��%d",min);
	return 0;
}
