#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*whileѭ����ѧ��ƽ���ֳ���*/ 
int main() {
	float chinese,math,english,average;
	int i,s;//ѧ��������ѧ������ 
	char msgcode[]="void",code[]="exit";//��ʼ���ַ����������趨�Ƚϳ��� 
	printf("������ѧ��������"); 
	scanf("%d",&s);//ɨ����̻�ȡѧ���������洢��s������ 
	i=1;//��ʼ��ѧ��������ʹ���1��ʼ���� 
	while (i<=s){
		printf("�������%dλѧ�����ģ���ѧ��Ӣ��ɼ���\n",i);
		scanf("%f%f%f",&chinese,&math,&english);//��ȡѧ���ɼ� 
		average=( chinese + math + english )/3;//��ƽ���� 
		printf("ѧ��%d��ƽ����Ϊ��%.2f(��)\n",i,average);
		i++;
	}
	while  ( strcmp(msgcode,code)){//�Ƚ��ַ����Ƿ���� 
		printf("������exit���˳�����\n");
		scanf("%s",&msgcode);//��ȡ������� 
	
	}
	return 0;
}
