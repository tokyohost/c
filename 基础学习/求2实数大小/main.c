#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x,y,z;
	printf("请输入待求大小实数x，y：");
	scanf("%f%f",&x,&y);
	z=x>y?x:y;
	printf("两实数%.2f,%.2f中,%.2f最大",x,y,z); 
	
	return 0;
}
