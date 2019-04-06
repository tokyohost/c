#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int letter=0,digi=0,other=-1,i;//'#'号也算一个其他字符，所以 -1个 
	char ch[100000];
	
	printf("请输入字符，以'#'号结束：\n");
	for(i=1;;i++){
	ch[i]=getchar();
	if(ch[i]>='A' && ch[i]<='Z'||ch[i]>='a' && ch[i]<='z')letter++;
	else if (ch[i]>='0' && ch[i]<='9')digi++;
		else other++;
	if(ch[i]=='#')break;
	}
	printf("您输入的字符中：字母有：%d 个；数字有：%d 个；其他字符有：%d 个",letter,digi,other);
	return 0;
}
