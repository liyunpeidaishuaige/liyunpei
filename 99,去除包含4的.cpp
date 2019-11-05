#include<stdio.h>
int main(void){

int i,j,c;
for(i=1;i<=9;i++){
	for(j=1;j<=9;j++){
		int c=i*j;if(c%10==4||c/10==4){
			printf("  ");
			continue;
		}printf("%3d",c);
	}putchar('\n');

}
return 0;
}
