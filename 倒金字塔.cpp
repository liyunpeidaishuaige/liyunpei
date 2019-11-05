#include<stdio.h>
int main(void)
{
int i,j,x;
printf("½ğ×ÖËşÓĞ¼¸²ã£º");scanf("%d",&x); 
for (i=1;i<=x;++i)  
{for (j=1;j<=i;++j)  
printf(" ");
for (j=1;j<=2*(x-i+1)-1;++j) 
printf("%d",i%10);printf("\n");
}
return 0; 
}
