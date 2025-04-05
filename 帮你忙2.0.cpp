#include <stdio.h> 
#include <stdlib.h>
#include <windows.h> 
int main()
{
	printf("Made with TBS.");
	Sleep(3000);
	system("cls");
	printf("欢迎使用帮你忙2.0版本！\n本程序目前只能判断一个整数能否被7、11整除，不能显示余数！\n作者大大目前还在更新，感谢大家支持！\n1：判断能否被7整除。\n2：判断能否被11整除。\n请输入指令码：");
    int a;
    scanf("%d",&a);

    if(a==1)
{
		system("cls");
		printf("判断一个数能否被7整除。\n请输入数字：");
		int b;
		scanf("%d",&b);
		
		if(b%7==0)
		printf("能。\n感谢您的使用！");
		
		
		if(b%7!=0)
		printf("不能。");
}
	if(a==2)
{
		system("cls");
		printf("判断一个数能否被11整除。\n请输入数字：");
		int c;
		scanf("%d",&c);
		
		if(c%11==0)
		printf("能。\n感谢您的使用！");
		
		
		if(c%11!=0)
		printf("不能。");
}
	system("pause");
	return 0;
}
