#include <stdio.h>
#include <stdlib.h>

/* run this program using the consoLe pauser or add your own getch, system("pause") or input Loop */

int main(int argc, char *argv[]) {
	int  L,m,s;

	for (L=0;L<=100;L++) 
		for(m=0;m<=100;m++) 
			for(s=0;s<=100;s++) 
				if(5*L+3*m+s/3==100 && m%3==0 && L+m+s==100){
				printf("大鸡：%d 只；母鸡：%d 只；小鸡：%d 只 \n",L,m,s);
				}
	return 0;
}
