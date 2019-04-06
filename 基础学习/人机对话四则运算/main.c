#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0,i=0,j=0;
	char ch='$';
	while(ch!='#'){
		printf("请输入需要计算的两个运算数和一个运算符（空格隔开）：\n");
		scanf("%d %c %d",&i,&ch,&j);
		switch(ch){
			case '+':sum=i+j;break;
			case '-':sum=i-j;break;
			case '*':sum=i*j;break;
			case '/':sum=i/j;break;
			default :printf("输入错误！\n"); 
		} 
		printf("结果为：%d \n",sum);
		printf("如需退出请输入'#'号！继续则输入任意字符！\n");
		scanf("\n %c",&ch);
	}
	return 0;
}
