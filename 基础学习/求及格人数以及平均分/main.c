#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float count=0,sum=0;
	int man=0;
	
	printf("������ɼ�����-1������\n");
	 
	do{
		scanf("%f",&count);
		if(count>=60){
			sum+=count;
			man++;
		}
	}while(count!=-1);
	printf("����%d �˼���ƽ����Ϊ��%.2f",man,sum/man);
	
	return 0;
}
