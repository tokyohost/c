#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,year;//iΪ�жϱ����� 
	year=1;//��ʼ������ 
	while(year!=0){
	//	printf("��������Ҫ�жϵ�������\n");
		scanf("%d",&year);
		if(year>=1){
			if(year%100==0){
				i=year%400;
				if(i==0){
					printf("yes"); 
					break;
				}
					
				else{
					printf("no");
					break;
				}
						
			}
			else if(year%100!=0){
					i=year%4;
					if(i==0){
						printf("yes");
						break;
					}
						 
					else{
						printf("no");
						break;
					}
							
			}
		}
	}
	return 0;
}
