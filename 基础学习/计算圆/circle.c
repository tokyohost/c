#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*这个程序是用来计算圆的面积和周长 */ 
int main(int argc, char *argv[]) {
	float r; //半径 
	float c; //周长 
	float s; //面积 
	printf("请输入圆的半径："); 
	scanf("%f",&r);
	c = 2 * 3.14 * r;
	s = 3.14 * r * r;
	printf("圆的周长=%.2f，圆的面积=%.2f",c,s);
	return 0;
}
