#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i,j,g,s,b,q,w,sw;
	scanf("%d",&num);
	for(i=9999;i<=999999;i++){
		if(i<=99999){
			w=i/10000;
			q=i%10000/1000;
			b=i%1000/100;
			s=i%100/10;
			g=i%10; 
		//	printf("%d %d %d %d %d\n",w,q,b,s,g);
			if(w==g&&q==s){
				if((w+q+b+s+g)==num){
					printf("%d\n",i);
				}
			}
		}else{
			sw=i/100000;
			w=i%100000/10000;
			q=i%10000/1000;
			b=i%1000/100;
			s=i%100/10;
			g=i%10;
		//	printf("%d %d %d %d %d %d\n",sw,w,q,b,s,g);
			if(sw==g&&w==s&&q==b){
				if((sw+w+q+b+s+g)==num){
					printf("%d\n",i);
				}
			}
		}
	}
	return 0;
}
