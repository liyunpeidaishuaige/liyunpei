#include<stdio.h>
int main(void){

 int x, i; 
printf("整数值： ");scanf("%d",&x);printf("小于他的奇数有：");
 for(i=1;i<x;i++)
 if (i%2==1)
 printf("%d",  i  );
 return 0;
 }
