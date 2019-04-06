#include <stdio.h>

int main(){
	float i;
	printf("请输入需要保留两位小数的数值：\n");
	scanf("%f",&i);
	i=(i*100+0.5)/100.0;
	printf("%.2f",i);
} 
