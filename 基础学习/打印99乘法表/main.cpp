#include <stdio.h>
int main(){
    int i,j,k;//i,j除数与被除数兼控制循环， k存储结果 
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
        	k=i*j;
            printf("%2d *%2d= %2d  ",j,i,k);
    }
        printf("\n");
    }
    printf("\n");
///
    for(i=1;i<=9;i++){
		
        for(j=9;j>=1;j--){
			k=i*j;
            printf("%2d *%2d= %2d  ",j,i,k);	
    }
       printf("\n");
    }
    printf("\n");
////     
    for(i=9;i>=1;i--){
        for(j=1;j<=i;j++){
        	k=i*j;
            printf("%2d *%2d= %2d  ",j,i,k);
    }
 printf("\n");      
    }
///
printf("\n");
	int space,m=0;
	for(i=9;i>=1;i--){
	        for(j=i;j>=1;j--){
	        	k=i*j;
	            printf("%2d *%2d= %2d  ",j,i,k);
	    }
	    m++;
	    printf("\n");
	    for(space=1;space<=m;space++){
	    	printf("            ");
		}
	      //  printf("\n");
	    }
    return 0;
}

