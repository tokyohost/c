#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,guess,t,exit = 2;
	
	t = 9;						//��ʼ���²���� 
	srand(time(NULL));
	while(num <= 1){ 			//������С�� 
		num=rand()%101;			//���100-200���ڵ���
	}
	do{
		while(t > -1){
			printf("������²�����֣�\n");
			scanf("%d",&guess);
			if(guess < num){
				printf("���µ���С�ˣ����ٲ�һ�Σ�����ʣ%d �λ��ᣡ\n",t);
				t--;
			}else if(guess > num){
				printf("���µ������ˣ����ٲ�һ�Σ�����ʣ%d �λ��ᣡ\n",t);
				t--; 
			}
			else{
				printf("��ϲ�����¶��ˣ�����Ϸ������\n"); 
				break;
			}	
		}
		if(t == -1){
			printf("���Ĵ��������ˣ���Ϸ������ \n��ȷ��Ϊ��%d \n",num);
		} 
		printf("�Ƿ�����£�����'1'����������'0'�˳���\n");
		scanf("%d",&exit);
		if(exit == 1){
			t=9;						//��ʼ���²���� 
			num = 0;					//��ʼ�������� 
			while(num <= 1){ 			//������С�� 
				num = rand()%101;			//���100-200���ڵ���
			}
		}
	
	}while(exit != 0);		
	return 0;
}


