#include <stdio.h>
int main(void)
{
	int month;
	printf("�������·ݣ�");
	scanf("%d",&month);
	switch (month/3) {
		case 1 : printf("%d���Ǵ���",month);break;
		case 2 : printf("%d�����ļ�",month);break;
		case 3 : printf("%d�����＾",month);break;
		case 0 : printf("%d���Ƕ���",month);break;
		case 4 : printf("%d���Ƕ���",month);break;
		default :printf("%d�²�����",month);break;
	}
	return 0;
 } 
