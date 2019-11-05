#include<stdio.h>
int main(void)
{
int i,j,x;
printf("½ğ×ÖËşÓĞ¼¸²ã£º");scanf("%d",&x); 
for (i=1;i<=x;++i)  
{for (j=1;j<=x-i;++j)  
printf(" ");
for (j=1;j<=2*i-1;++j) 
printf("*");printf("\n");
}
return 0; 
}
