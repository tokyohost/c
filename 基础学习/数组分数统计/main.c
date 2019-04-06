#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float score[SIZE],sum=0,temp;
	int i,man=0,j,MAX;
	
	printf("请输入需要统计的十个数据：\n");
	for(i=0;i<SIZE;i++){
		scanf("%f",&score[i]);
		if(score[i]>=60)
		man++;
		
		sum+=score[i];
	}
	
	for(i=0;i<SIZE;i++){
		MAX=i;
		for(j=i;j<SIZE;j++){
			if(score[MAX]<score[j]){
				temp=score[MAX];
				score[MAX]=score[j];
				score[j]=temp;
			}
		}		
	}
/*	测试打印排序后数组 
	for(i=0;i<SIZE;i++){
		printf("%f ",score[i]);
	}
*/ 
	printf("\n及格人数为：%d ，平均分为: %.2f ， 最高分为：%.2f ，最低分为: %.2f",man,sum/SIZE,score[0],score[SIZE-1]);
	return 0;
}
