#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265358979323
//#define pi 3.14159265358979323
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r;
	double s=0;
	scanf("%d",&r);
	s=pi*r*r;
//	s=(s*10000000+0.5)/10000000.0;  mdzz，double自己就已经四舍五入了。。。 
	printf("%.7lf",s);
	return 0;
}
