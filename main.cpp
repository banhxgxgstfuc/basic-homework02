#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a,b,c;
	printf("請輸入出生年月日,請用逗號隔開數值:");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("%d年%d月%d日\n",a,b,c);
	system("pause");
	
	return 0;
}
