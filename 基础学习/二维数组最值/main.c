#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[100][100],n,m,i,j,min=999,minn,minm;
	
	printf("请输入二维数组的行和列：\n");
	scanf("%d%d",&n,&m);
	printf("输入%d行%d列的数组元素：\n",n,m);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&num[i][j]);
		/*	//负数处理   妈的 是我想多了。。。=_=！ 看成绝对值最小了 
			if(num[i][j]*-1>0){
				if(abs(num[i][j])>min){
					min=num[i][j];
					minn=i;
					minm=j;
					if(i==n-1&&j==m-1)
					printf("num[%d][%d]=%d",minn,minm,min);
				}
			}
			*/ 
			//正数处理
				if(min>num[i][j]){
					min=num[i][j];
					minn=i;
					minm=j;
				} 
			//	if(i==n-1&&j==m-1)
			//	printf("num[%d][%d]=%d",minn,minm,min);
			
		}
	} 
	//输出二维数组 
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%6d ",num[i][j]);
		}
		printf(" \n");
	}
	//输出最小值和下标 
	printf("num[%d][%d]=%d",minn,minm,min);
	
	return 0;
}
