#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x,y,z;
	printf("����������Сʵ��x��y��");
	scanf("%f%f",&x,&y);
	z=x>y?x:y;
	printf("��ʵ��%.2f,%.2f��,%.2f���",x,y,z); 
	
	return 0;
}
