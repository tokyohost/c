#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("������������������\n");
	scanf("%d",&num);
	while(num!=1){
		if(num%2==0){  //�ж��Ƿ���ż�� 
			num=num/2;
			printf("%d \n",num);
		} 
		else{
			num=3*num+1;
			printf("%d \n",num);
		}
	} 
	return 0;
}
