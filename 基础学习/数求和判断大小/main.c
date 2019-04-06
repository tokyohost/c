#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[100000],all,i,j,temp,sum;           //num数列必须要大于100000才行啊。。 
	scanf("%d\n",&all);
	for(i=0;i<all;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<all;i++){
		for(j=all-1;j>i;j--){
			if(num[i]>=num[j]){             //判断大小，并排序 
				temp=num[j];
				num[j]=num[i];
				num[i]=temp;
			}
		}
		sum+=num[i];
	}
	printf("%d\n%d\n%d\n",num[all-1],num[0],sum);   //最大值，与最小值 


	return 0;
}
