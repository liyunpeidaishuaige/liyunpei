#include<stdio.h>
int main(void){

int i,x,h;
printf("����һ��������\n");printf("�������м���");
scanf("%d",&x) ;
for(i=0;i<x;i++)
{
	putchar('*') ;
	for(h=1;h<x;h++)
	putchar('*');putchar('\n');
}
return 0;
}
