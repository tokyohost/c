#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,year;//i为判断变量； 
	year=1;//初始变量； 
	while(year!=0){
	//	printf("请输入需要判断的年数：\n");
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
