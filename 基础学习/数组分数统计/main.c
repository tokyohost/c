#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float score[SIZE],sum=0,temp;
	int i,man=0,j,MAX;
	
	printf("��������Ҫͳ�Ƶ�ʮ�����ݣ�\n");
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
/*	���Դ�ӡ��������� 
	for(i=0;i<SIZE;i++){
		printf("%f ",score[i]);
	}
*/ 
	printf("\n��������Ϊ��%d ��ƽ����Ϊ: %.2f �� ��߷�Ϊ��%.2f ����ͷ�Ϊ: %.2f",man,sum/SIZE,score[0],score[SIZE-1]);
	return 0;
}
