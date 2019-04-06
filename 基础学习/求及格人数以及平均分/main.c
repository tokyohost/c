#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float count=0,sum=0;
	int man=0;
	
	printf("请输入成绩，以-1结束：\n");
	 
	do{
		scanf("%f",&count);
		if(count>=60){
			sum+=count;
			man++;
		}
	}while(count!=-1);
	printf("共有%d 人及格，平均分为：%.2f",man,sum/man);
	
	return 0;
}
