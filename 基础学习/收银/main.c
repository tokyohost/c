#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float money,sum,i,avg;//i����������Ʒ���� 
	avg=i=0;
	while(money!=0){
		printf("��������Ʒ�۸� ���롱0������\n");
		scanf("%f",&money);
		sum+=money;//�ۼ� 
		printf("��ǰ�۸�Ϊ��%.2f \n",sum); 
		i++;//�����ۼ� 
	} 
	avg=sum/(i-1);//����ƽ���� 
	printf("Ӧ֧����%.2f ��Ԫ��\n ƽ����Ϊ��%.2f",sum,avg);
	
	return 0;
}
