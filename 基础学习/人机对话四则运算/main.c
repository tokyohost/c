#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0,i=0,j=0;
	char ch='$';
	while(ch!='#'){
		printf("��������Ҫ�����������������һ����������ո��������\n");
		scanf("%d %c %d",&i,&ch,&j);
		switch(ch){
			case '+':sum=i+j;break;
			case '-':sum=i-j;break;
			case '*':sum=i*j;break;
			case '/':sum=i/j;break;
			default :printf("�������\n"); 
		} 
		printf("���Ϊ��%d \n",sum);
		printf("�����˳�������'#'�ţ����������������ַ���\n");
		scanf("\n %c",&ch);
	}
	return 0;
}
