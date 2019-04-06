#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float money,sum,i,avg;//i控制输入商品件数 
	avg=i=0;
	while(money!=0){
		printf("请输入商品价格： 键入”0“结束\n");
		scanf("%f",&money);
		sum+=money;//累加 
		printf("当前价格为：%.2f \n",sum); 
		i++;//件数累加 
	} 
	avg=sum/(i-1);//计算平均数 
	printf("应支付：%.2f （元）\n 平均数为：%.2f",sum,avg);
	
	return 0;
}
