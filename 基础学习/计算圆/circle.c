#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*�����������������Բ��������ܳ� */ 
int main(int argc, char *argv[]) {
	float r; //�뾶 
	float c; //�ܳ� 
	float s; //��� 
	printf("������Բ�İ뾶��"); 
	scanf("%f",&r);
	c = 2 * 3.14 * r;
	s = 3.14 * r * r;
	printf("Բ���ܳ�=%.2f��Բ�����=%.2f",c,s);
	return 0;
}
