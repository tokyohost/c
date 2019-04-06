#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  n,temp[1000],j;
	static long sum[1000000];
	scanf("%d",&n);
	sum[1]=1;
	sum[2]=1;
	for(j=2;j<=n;j++){
		sum[j]=(sum[j-1]+sum[j-2])%10007;
		
	}
/*	if(sum[j]>=10007){

	j=n;
	sum[j]%=10007;
		printf("%ld",sum[j]);
	
//	printf("%ld",y);		
	}
	*/
	//j=n;
	printf("%ld",sum[j-1]);
	
	 
	return 0;
}
