#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*while循环求学生平均分程序*/ 
int main() {
	float chinese,math,english,average;
	int i,s;//学生计数，学生总数 
	char msgcode[]="void",code[]="exit";//初始化字符串变量，设定比较常量 
	printf("请输入学生总数："); 
	scanf("%d",&s);//扫描键盘获取学生总数并存储在s变量中 
	i=1;//初始化学生计数，使其从1开始计数 
	while (i<=s){
		printf("请输入第%d位学生语文；数学；英语成绩：\n",i);
		scanf("%f%f%f",&chinese,&math,&english);//获取学生成绩 
		average=( chinese + math + english )/3;//求平均分 
		printf("学生%d的平均分为：%.2f(分)\n",i,average);
		i++;
	}
	while  ( strcmp(msgcode,code)){//比较字符串是否相等 
		printf("请输入exit来退出程序\n");
		scanf("%s",&msgcode);//获取输入代码 
	
	}
	return 0;
}
