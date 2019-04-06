#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int type,i,j;
	static int num[4000][4000];
	printf("请输入需要输出的行数：\n");
	scanf("%5d",&type);
	
	num[0][0]=1;
	for(i=1;i<type;i++){
		for(j=1;j<=i;j++){
			num[i][0]=1;
			num[i][j]=num[i-1][j-1]+num[i-1][j];
		}
	}
	for(i=0;i<type;i++){
		for(j=0;j<type;j++){
			if(num[i][j]!=0){
				printf("%d ",num[i][j]);
			}
			
		}
		printf("\n");
	}
	 
	return 0;
}
