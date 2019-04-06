#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[10000],max,fond,i,y=-1;
	scanf("%d",&max);
	for(i=0;i<max;i++){
		scanf("%d",&num[i]);
	} 
	scanf("%d",&fond);
	for(i=0;i<max;i++){
		if(num[i]==fond){
			y=i+1;
			break;
		}
	}
	printf("%d",y);
	return 0;
}
