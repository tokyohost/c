#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int letter=0,digi=0,other=-1,i;//'#'��Ҳ��һ�������ַ������� -1�� 
	char ch[100000];
	
	printf("�������ַ�����'#'�Ž�����\n");
	for(i=1;;i++){
	ch[i]=getchar();
	if(ch[i]>='A' && ch[i]<='Z'||ch[i]>='a' && ch[i]<='z')letter++;
	else if (ch[i]>='0' && ch[i]<='9')digi++;
		else other++;
	if(ch[i]=='#')break;
	}
	printf("��������ַ��У���ĸ�У�%d ���������У�%d ���������ַ��У�%d ��",letter,digi,other);
	return 0;
}
