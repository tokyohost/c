#include <stdio.h>
int main(int argc, char** argv)
{
int num[10]={12,8,15,10,9,18,16,14,11,15};
int sum=0,i=0;

while(1){
if(i%2!=0)sum+=num[i];
if(sum>=50)break;
i++;
}
printf("sum=%d\n",sum);

return 0;
}


/*int main(){
	printf("%d",0%2) ;
}*/ 


