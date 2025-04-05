#include <stdio.h> 
#include <stdlib.h>
#include <windows.h> 
#include <time.h>
int main()
{
	printf(".............\n");
	printf(".     .     .\n");
	printf(".     .     .\n");
	printf(".   .....   .\n"); 
	printf(".     .     .\n");
	printf(".  .......  .\n");
	printf("............. Made with TBS.");
	Sleep(3000);
	system("cls");
	printf("欢迎使用帮你忙4.0版本！\n祝大家玩得开心！作者大大目前还在更新，感谢大家支持！\n1：判断能否被7整除。\n2：判断能否被11整除。\n3：计算器。（不能显示小数部分）\n4：猜数小游戏。\n请输入指令码：");
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
                if(a==3)
{
	    system("cls");
	    printf("1：加法计算器。\n2：减法计算器。\n3：乘法计算器。\n4：除法计算器。\n请输入指令码：");
	    int x;
	    scanf("%d",&x);
	    
	    if(x==1)
{
	    int la,ka,ra;
	    ra=0;
	    system("cls");
	    printf("请输入第一个加数：");
	    scanf("%d",&la);
	    printf("请输入第二个加数：");
		scanf("%d",&ka);
		ra = la+ka;
		printf("和为：\n");
		printf("%d",ra);
} 
        if(x==2)
{
	    int lb,kb,rb;
	    rb=0;
        system("cls");
	    printf("请输入被减数：");
	    scanf("%d",&lb);
	    printf("请输入减数：");
		scanf("%d",&kb);
		rb = lb-kb;
		printf("差为：\n");
		printf("%d",rb);
}
        if(x==3)
{
	    int l,k,r;
	    r=0;
	    system("cls");
	    printf("请输入第一个乘数：");
	    scanf("%d",&l);
	    printf("请输入第二个乘数：");
		scanf("%d",&k);
		r = l*k;
		printf("积为：\n");
		printf("%d",r);	    
}
        if(x==4)
{

	    int lc,kc,rc;
	    rc=0;
	    system("cls");
	    printf("请输入被除数：");
	    scanf("%d",&lc);
	    printf("请输入一个不为0的除数：");
		scanf("%d",&kc);
		rc = lc/kc;
		printf("商为：\n");
		printf("%d",rc);
}
}
                if(a==4)
{
	system("cls");
    printf("猜数小游戏开始，您有8次机会，一定要猜中哦。");
	int z,f,sum;
	sum=8;
	srand((unsigned)time(NULL));
	z = rand()%100;
	while(1)
	{
		sum--;
		scanf("%d",&f);
		if(f>z)
		    printf("大了， 还剩下%d次机会， 请继续\n",sum);
		if(f<z)
		    printf("小了， 还剩下%d次机会， 请继续\n",sum);
		if(f==z) 
		{
			printf("恭喜您！ 答对了！\n");
			break;
		}
		if(sum==0)
		{
			printf("没机会了，重来吧！\n");
			break;
    	}
}
    }
	system("pause");
	return 0;
}
