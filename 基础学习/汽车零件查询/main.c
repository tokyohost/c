#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[2][5]={{1501,1502,1503,1504,1505},{1000,500,230,700,885}};
	int scannum,i,j=0;
	char exit;
	
	do{
		printf("������Ҫ��ѯ�������ţ�\n");
		scanf("%d",&scannum);
		
		for(i=0;i<5;i++){
			if(scannum==num[0][i]){
				printf("�����ţ�%d\n�������%d \n",num[0][i],num[1][i]);
				return 0;
			}
			j++;
		}
		 
		
		printf("��������Ǵ���������ţ���ѡ���������루Y�����˳���ѯ��N��\n");
		scanf("\n%c",&exit);

		if(exit=='N'){				//����TM���� 
			return 0;
		}
		if(exit!='Y'){				//��������д�� 
			printf("������󣡳����˳���");
			return 1; 
		} 
	}while(exit!='N');
	return 0;
}
