#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int login,passwd,EnterLogin,EnterPasswd,i;
	i=3;
	login=123;
	passwd=345;
	do{
		printf("请输入用户名：\n");
		 scanf("%d",&EnterLogin);
		printf("请输入密码：\n");
		 scanf("%d",&EnterPasswd);
		if(EnterLogin!=login){
			printf("用户不存在！\n");
		 	i--;
		}else if(EnterPasswd!=passwd){
		 	printf("密码错误！\n");
			i--;
		}else{
		 	printf("登陆成功！\n");
		 	break; 
		}
}
while(i!=0);
	 if(i==0){
	 	printf("用户名或密码输入错误超过3次，账户锁定！\n");
	 }
	return 0;
}
