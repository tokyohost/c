#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,min,max,cen,temp,i;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;;i++){
		temp=a*i;
		if(temp%a==0&&temp%b==0&&temp%c==0){
			printf("%d",temp); 
			break;
		}
	}
	 
	return 0;
}
