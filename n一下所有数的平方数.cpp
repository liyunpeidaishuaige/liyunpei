#include<stdio.h>
int main(void)
{ 
int n,i,f; 
printf("n的值是");scanf("%d",&n);
 for(i=1;i<=n;i++){
 	f=i*i ;printf("%d的二次方是%d",i,f);putchar('\n');
 }
 
 return 0;
 } 
