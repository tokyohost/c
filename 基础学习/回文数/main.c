#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,g,s,b,q;
	for(i=1000;i<10000;i++){
		q=i/1000;
		b=i%1000/100;
		s=i%1000%100/10;
		g=i%1000%100%10;
		if(q==g&&b==s){
			printf("%d\n",i);
		}
	} 
	return 0;
}
