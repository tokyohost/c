#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,g,s,b;
	for(i=100;i<=999;i++){
		b=i/100;
		s=((i%100)/10);
		g=i%100%10;
		if((b*b*b+s*s*s+g*g*g)==i){
			printf("%d\n",i);
		}
	} 
	return 0;
}
