#include <stdio.h>
int main(void)
{
	int month;
	printf("请输入月份：");
	scanf("%d",&month);
	switch (month/3) {
		case 1 : printf("%d月是春季",month);break;
		case 2 : printf("%d月是夏季",month);break;
		case 3 : printf("%d月是秋季",month);break;
		case 0 : printf("%d月是冬季",month);break;
		case 4 : printf("%d月是冬季",month);break;
		default :printf("%d月不存在",month);break;
	}
	return 0;
 } 
