#include<stdio.h>
int main(void){

int i,x,h;
printf("生成一个正方形\n");printf("正方形有几层");
scanf("%d",&x) ;
for(i=0;i<x;i++)
{
	putchar('*') ;
	for(h=1;h<x;h++)
	putchar('*');putchar('\n');
}
return 0;
}
