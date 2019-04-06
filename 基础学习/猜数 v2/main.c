#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,guess,t,exit = 2;
	
	t = 9;						//初始化猜测次数 
	srand(time(NULL));
	while(num <= 1){ 			//限制最小数 
		num=rand()%101;			//随机100-200以内的数
	}
	do{
		while(t > -1){
			printf("请输入猜测的数字：\n");
			scanf("%d",&guess);
			if(guess < num){
				printf("您猜的数小了！请再猜一次，您还剩%d 次机会！\n",t);
				t--;
			}else if(guess > num){
				printf("您猜的数大了！请再猜一次，您还剩%d 次机会！\n",t);
				t--; 
			}
			else{
				printf("恭喜您！猜对了！！游戏结束！\n"); 
				break;
			}	
		}
		if(t == -1){
			printf("您的次数用完了，游戏结束！ \n正确答案为：%d \n",num);
		} 
		printf("是否继续猜？输入'1'继续，输入'0'退出：\n");
		scanf("%d",&exit);
		if(exit == 1){
			t=9;						//初始化猜测次数 
			num = 0;					//初始化被猜数 
			while(num <= 1){ 			//限制最小数 
				num = rand()%101;			//随机100-200以内的数
			}
		}
	
	}while(exit != 0);		
	return 0;
}


