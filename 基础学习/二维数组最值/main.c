#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[100][100],n,m,i,j,min=999,minn,minm;
	
	printf("�������ά������к��У�\n");
	scanf("%d%d",&n,&m);
	printf("����%d��%d�е�����Ԫ�أ�\n",n,m);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&num[i][j]);
		/*	//��������   ��� ��������ˡ�����=_=�� ���ɾ���ֵ��С�� 
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
			//��������
				if(min>num[i][j]){
					min=num[i][j];
					minn=i;
					minm=j;
				} 
			//	if(i==n-1&&j==m-1)
			//	printf("num[%d][%d]=%d",minn,minm,min);
			
		}
	} 
	//�����ά���� 
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%6d ",num[i][j]);
		}
		printf(" \n");
	}
	//�����Сֵ���±� 
	printf("num[%d][%d]=%d",minn,minm,min);
	
	return 0;
}
