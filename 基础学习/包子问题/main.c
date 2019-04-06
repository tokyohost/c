#include <stdio.h>
#include <stdlib.h>
#define N 50 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,temp,i,j,k,h,u[1000],t,n,s;
	scanf("%d\n%d\n%d",&a,&b,&c);
	if((a+b+c)%2==0&&a%2==0&&c%2==0&&c%2==0){
	printf("INF");	
	return 0;
	}else if(a==1||b==1||c==1){
		printf("0");
		return 0;
	}
	for(h=1;h<=100;h++){
		for(i=0;i<=h;i++){
			if(i*c==h)break; 
			for(j=0;j<=h;j++){
				if(i*c+j*b==h)break; 
				for(k=0;k<=h;k++){
					if(i*c+j*b+k*a==h)break;  
					if(c*i+b*j+a*k!=h){
						temp++;
						printf("%d\n",h);
						break;
					/*	for(t=0;t<=N;t++){
							u[t]=h;
							if(u[t]%3==0){
								n++;
								if(n==N){
									printf("INF");
									return 0;
								}
							}	else if(u[t]%2==0){
								s++;
								if(s==N){
									printf("INF");
									return 0;
								}
							}
						}*/
					}
				} 
			}
	if(temp>10){
		printf("%d",temp);
		return 0; 
		}
		}
	
	}
	return 0;
}
