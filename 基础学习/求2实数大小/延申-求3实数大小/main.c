#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y,z,c; 
	printf("请输入x,y,z三个实数来进行比较：\n");
	scanf("%f%f%f",&x,&y,&z);
	c=x>y?x:y;
	c=c>z?c:z;
	printf("%f,%f,%f三个数中，%f最大。\n",x,y,z,c);
	return 0;
}
