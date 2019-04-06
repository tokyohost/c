#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[2][5]={{1501,1502,1503,1504,1505},{1000,500,230,700,885}};
	int scannum,i,j=0;
	char exit;
	
	do{
		printf("请输入要查询的零件编号：\n");
		scanf("%d",&scannum);
		
		for(i=0;i<5;i++){
			if(scannum==num[0][i]){
				printf("零件编号：%d\n库存量：%d \n",num[0][i],num[1][i]);
				return 0;
			}
			j++;
		}
		 
		
		printf("您输入的是错误的零件编号，请选择：重新输入（Y），退出查询（N）\n");
		scanf("\n%c",&exit);

		if(exit=='N'){				//我真TM机智 
			return 0;
		}
		if(exit!='Y'){				//困，不想写了 
			printf("输入错误！程序退出！");
			return 1; 
		} 
	}while(exit!='N');
	return 0;
}
