#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int login,passwd,EnterLogin,EnterPasswd,i;
	i=3;
	login=123;
	passwd=345;
	do{
		printf("�������û�����\n");
		 scanf("%d",&EnterLogin);
		printf("���������룺\n");
		 scanf("%d",&EnterPasswd);
		if(EnterLogin!=login){
			printf("�û������ڣ�\n");
		 	i--;
		}else if(EnterPasswd!=passwd){
		 	printf("�������\n");
			i--;
		}else{
		 	printf("��½�ɹ���\n");
		 	break; 
		}
}
while(i!=0);
	 if(i==0){
	 	printf("�û���������������󳬹�3�Σ��˻�������\n");
	 }
	return 0;
}
