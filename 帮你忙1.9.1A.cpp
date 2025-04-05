#include<stdio.h> 
#include<windows.h> 
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
	system("color F2");
{
	
	FILE *eert;

{
    if((eert=fopen("BNM.txt","a"))==NULL)
    {
    	system("color 1F");
		printf("***ERROR:THE FILE IS NOT OPENED!***\n");
		printf("*********PLEASE TRY AGAIN!*********\n");
		printf("***********STOP:ERROR A1***********\n");
		
	}
	else
	{
		{
		{
    	int eert1;
    	eert1=1;
    	
    	eert=fopen("BNM.txt","r");
    	
    	fscanf(eert,"%d",&eert1);
    	
    	if(eert1!=0)
    	{
    		printf("欢迎使用帮你忙1.9.1！\n");
    		printf("即将开始新手教程，请稍后。"); 
    		Sleep(3000);
    		system("cls");
    		printf("在进入程序时，如果在程序启动时出现报错，导致无法进入主页。（如下图）\n");
			{
		system("color 1F");
		printf("***ERROR:THE FILE IS NOT OPENED!***\n");
		printf("*********PLEASE TRY AGAIN!*********\n");
		printf("***********STOP:ERROR A1***********\n");
		printf("请按ENTER以继续。");
		getchar();
			}
			
			{
			system("color F2");
			system("cls");
			printf("您可以在程序启动时查询错误代码查找解决方法。（如下图）\n");
			printf("是否查询错误代码？y/n\n\n");
			printf("y<---输入“y”以进入。\n");
			printf("请按ENTER以继续。");
			getchar();
		    }
		    
		    {
		    	system("cls");
	printf(" |--------------------更新公告--------------------| \n");
	printf(" |---------------以下为本次更新内容---------------| \n");
	printf(" |                 删减了加载界面                 | \n");
	printf(" |               更改了更新更改位置               | \n"); 
	printf("请按ENTER以继续。");
	getchar();
			}
			
			{
				system("cls");
	printf("在程序主页您可以输入功能前的指令代码使用对应功能。（如下图）\n");			
    printf("|--------欢迎使用帮你忙1.6.6！--------|\n");
	printf("| 作者大目前还在更新，祝大家玩得开心！|\n");
	printf("|----- 1：判断一个数能否被7整除。-----|\n");
	printf("|-----2：判断一个数能否被11整除。-----|\n");
	printf("|-------------3：计算器。-------------|\n");
	printf("|----------4：判断质，合数。----------|\n");
	printf("|-----------5：猜数小游戏。-----------|\n");
	printf("|----------6：计算圆的周长。----------|\n");
	printf("|----------7：计算圆的面积。----------|\n");
	printf("|----------8：错误代码查询。----------|\n");
	printf("|------------9：终止程序。------------|\n");
	printf("请输入指令码：<---在这输入指令代码。\n"); 
	printf("请按ENTER以继续。");
	getchar();
		}
		
		{
			system("cls");
			printf("程序中所有的运算结果，都将被存入“TBS.txt”中。您可以在这查找结果。\n");
			printf("“BNM.txt”为程序运行必要文件，请勿随意删除。\n");
			printf("请按ENTER以继续。");
			getchar();
		} 
		
		{
			system("cls");
			printf("您可以在“WKG”中获得更多功能。\n");
			printf("请按ENTER以继续。");
			getchar();
		}
		
		{
			system("cls");
			printf("当您使用程序中某功能，程序给出答案后，请勿使用键盘。几秒后，将自动返回主页面。\n");
			printf("请按ENTER以继续。");
			getchar();
		}
		
		{
			system("cls");
			printf("当您使用完程序，请务必按照程序主页面的退出方式关闭程序，否则运算结果可能无法正常记录。\n");
			printf("请按ENTER以继续。");
			getchar();
		}
		
		{
			system("cls");
			printf("新手教程结束了，祝大家使用愉快!");
			printf("注：此版本为帮你忙1.0最后一版本，更新已停止。\n");
			printf("请重启程序。\n");
		}
		
		eert=fopen("BNM.txt","a");
		
    	fprintf(eert,"0\n");
    }
    	
    	fclose(eert);
    
    if(eert1==0)
    {
	printf("是否查询错误代码？y/n\n\n");
	char rry;
	scanf("%c",&rry);
	
	if(rry=='y')
{
	system("cls");
	int xex1;
	printf("| 请选择错误代码：|\n");
	printf("|--1：ERROR A1。--|\n");
	
	scanf("%d",&xex1);
	if(xex1==1)
	{
		system("cls");
		printf("错误代码ERROR A1是由于帮你忙结果记录文件（TBS.txt）或（BNM.txt)没有被成功打开或创建，在程序启动自检时弹出的错误提示。\n");
		printf("如果您在使用中弹出该错误提示，请检查以下几点：\n");
		printf("1：请不要在微信、QQ或其他聊天软件内使用本程序，程序在聊天软件内无法创建文件。\n");
		printf("2：检查本程序所在的磁盘是否还有剩余空间。如果没有，请将本程序移动至有剩余空间的磁盘。\n");
		printf("检查完成后请重启程序。\n");
		printf("退出请按1");
		int a11;
		while(1)
		{
		scanf("%d",&a11);
		if(a11==1)
		{
			system("cls");
			break;
		}
		if(a11!=1)
		{
		system("cls");
		printf("错误代码ERROR A1是由于帮你忙结果记录文件（TBS.exe）或（BNM.txt)没有被成功打开或创建，在程序启动自检时弹出的错误提示。\n");
		printf("如果您在使用中弹出该错误提示，请检查以下几点：\n");
		printf("1：请不要在微信、QQ或其他聊天软件内使用本程序，程序在聊天软件内无法创建文件。\n");
		printf("2：检查本程序所在的磁盘是否还有剩余空间。如果没有，请将本程序移动至有剩余空间的磁盘。\n");
		printf("检查完成后请重启程序。\n");
		printf("退出请按1");
		}
    	}
	}
}
    else
{
	system("cls");
	printf(".....     .           .  .........             ........                     \n");
	printf(".     .    .         .   .                    .             .          .    \n");
	printf(".       .   .       .    .                    .             .          .    \n");
	printf(".       .    .     .     .........   .......  .         . . . . .  . . . . .\n");
	printf(".       .     .   .      .                    .             .          .    \n");
	printf(".     .        . .       .                    .             .          .    \n");
	printf(".....           .        .........              .......                     \n");
	printf("                              Made with DVE-C++                             \n");
	Sleep(5000);
	system("cls");
	printf(".............\n");
	printf(". .......   . \n");
	printf(". .      .  .\n");
	printf(". .......   .\n"); 
	printf(". .         .\n");
	printf(". .         .\n");
	printf("............. By PUECOOR WORK ROOM.");
	Sleep(3000);
	system("cls");
	printf(".............\n");
	printf(".     .     .\n");
	printf(".     .     .\n");
	printf(".   .....   .\n"); 
	printf(".     .     .\n");
	printf(".  .......  .\n");
	printf("............. 土拨鼠制作。");
	Sleep(3000);
	system("cls");
{
	FILE *fp;
	
{
	if((fp=fopen("TBS.txt","a"))==NULL)
	{
		system("color 1F");
		printf("***ERROR:THE FILE IS NOT OPENED!***\n");
		printf("*********PLEASE TRY AGAIN!*********\n");
		printf("***********STOP:ERROR A1***********\n");
	}
	else
{
	fp=fopen("TBS.txt","a");
	{
	fprintf(fp,"|-----欢迎使用帮你忙运算结果记录文件-----|\n");
	fprintf(fp,"*******THE PROGRAM STARTS RUNNING! *******\n");
    }
	}
	while(1)
	{
	printf("|--------欢迎使用帮你忙1.9.1！--------|\n");
	printf("|-----此版本为帮你忙1.0最后一版本-----|\n");
	printf("|-- 帮你忙已停止更新感谢大家的支持！--|\n");
	printf("|-----1:判断一个整数能否被7整除。-----|\n");
	printf("|----2：判断一个整数能否被11整除。----|\n");
	printf("|-------------3：计算器。-------------|\n");
	printf("|----------4：判断质，合数。----------|\n");
	printf("|-------------5：小游戏。-------------|\n");
	printf("|----------6：计算圆的周长。----------|\n");
	printf("|----------7：计算圆的面积。----------|\n");
	printf("|----------8：错误代码查询。----------|\n");
	printf("|----------------9:WKG----------------|\n");
	printf("|------------10:终止程序。------------|\n");
	printf("请输入指令码："); 
    int a;
    scanf("%d",&a);

    if(a==1)
{
		system("cls");
		printf("判断一个整数能否被7整除。\n请输入数字：");
		int b;
		scanf("%d",&b);

		if(b%7==0)
{
	    system("cls");
		printf("能。\n感谢您的使用！");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:判断%d能否被7整除，结果为能。\n",b);
		
		Sleep(5000);
		system("cls");
}
		if(b%7!=0)
{
	    system("cls");
		printf("不能。\n感谢您的使用！");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:判断%d能否被7整除，结果为不能。\n",b);
		
		Sleep(5000);
		system("cls");
}
}
	if(a==2)
{
		system("cls");
		printf("判断一个整数能否被11整除。\n请输入数字：");
		int c;
		scanf("%d",&c);
		
		if(c%11==0)
{
		system("cls");
		printf("能。\n感谢您的使用！");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:判断%d能否被11整除，结果为能。\n",c);
		
		Sleep(5000);
		system("cls");
}
		if(c%11!=0)
{
		system("cls");
		printf("不能.\n感谢您的使用！");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:判断%d能否被7整除，结果为不能。\n",c);
		
		Sleep(5000);
		system("cls");
}
}
                if(a==3)
{
	    system("cls");
	    printf("1：加法计算器。\n2：减法计算器。\n3：乘法计算器。\n4：除法计算器。\n请输入指令码：");
	    int x;
	    scanf("%d",&x);
	    
	    if(x==1)
{
	    double la,ka,ra;
	    ra=0;
	    system("cls");
	    printf("请输入第一个加数：");
	    scanf("%lf",&la);
	    printf("请输入第二个加数：");
		scanf("%lf",&ka);
		ra = la+ka;
		printf("和为：\n");
		printf("%lf",ra);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:加法计算器%lf加%lf等于%lf\n",la,ka,ra);
		
		Sleep(10000);
		system("cls");
} 
        if(x==2)
{
	    double lb,kb,rb;
	    rb=0;
        system("cls");
	    printf("请输入被减数：");
	    scanf("%lf",&lb);
	    printf("请输入减数：");
		scanf("%lf",&kb);
		rb = lb-kb;
		printf("差为：\n");
		printf("%lf",rb);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:减法计算器%lf减%lf等于%lf\n",lb,kb,rb);
		
		Sleep(10000);
		fclose(fp);
		system("cls");
}
        if(x==3)
{
	    double l,k,r;
	    r=0;
	    system("cls");
	    printf("请输入第一个乘数：");
	    scanf("%lf",&l);
	    printf("请输入第二个乘数：");
		scanf("%lf",&k);
		r = l*k;
		printf("积为：\n");
		printf("%lf",r);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:乘法计算器%lf乘%lf等于%lf\n",l,k,r);
			
		Sleep(10000);
		system("cls");    
}
        if(x==4)
{

	    double lc,kc,rc;
	    rc=0;
	    system("cls");
	    printf("请输入被除数：");
	    scanf("%lf",&lc);
	    printf("请输入一个不为0的除数：");
		scanf("%lf",&kc);
		if(kc==0)
		{
			system("cls");
			printf("错误。");
			Sleep(2500);
			system("cls"); 
		}
		else
		{
		rc = lc/kc;
		printf("商为：\n");
		printf("%lf",rc);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"帮你忙v1.9.1:除法计算器%lf除以%lf等于%lf\n",lc,kc,rc);
		
		Sleep(10000);
		system("cls");
	}
}
        if(x>4||x<1)
{
	system("cls");
	int rr;
	rr=5;
	while(rr>=0)
	{
	printf("|------暂无该功能。------|\n");
    printf(" **** 将在%d秒后退出 ****\n",rr);
    Sleep(1000);
    system("cls");
    rr=rr-1;
    }
}
}
        if(a==4)
{
	    system("cls");
	    printf("请输入数字：");
	    int ssr,count,mc;
	    count=0;
	    scanf("%d",&ssr);
	    for(mc=2;mc<=ssr-1;mc++)
	    {
	    	if(ssr%mc==0)
	    	      count++;
		}
		if(count==0)
		    printf("质数。感谢您的使用！");
		
	        fp=fopen("TBS.txt","a");
	    
		    fprintf(fp,"帮你忙v1.9.1:判断质合数数字%d结果为质数\n",ssr);
		    
		    Sleep(5000);
		    system("cls");
	
		if(count!=0)
		    printf("合数。感谢您的使用！");
		
	        fp=fopen("TBS.txt","a");
	    
		    fprintf(fp,"帮你忙v1.9.1:判断质合数数字%d结果为合数\n",ssr);
		    
		    Sleep(5000);
			system("cls"); 
}
                if(a==5)
{
	int gm;
	system("cls");
	printf("欢迎游玩小游戏，请选择游戏。\n");
	printf("1:----猜数小游戏（您需要在八次机会内猜出计算机在零到一百内随机生成的整数）\n");
	printf("2:----走迷宫\n移动：\nW--向上移动。\nS--向下移动。\nA--向左移动。\nD--向右移动。\n（找到正确的路走出迷宫)\n");
	printf("3:----退出。\n");
	printf("请输入代码：");
	scanf("%d",&gm);
	if(gm==1)
	{
	system("cls");
    printf("猜数小游戏开始，您有8次机会，一定要猜中哦。");
	int z,f,sum;
	sum=8;
	srand((unsigned)time(NULL));
	z = rand()%100;
	while(2)
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
			Sleep(1500);
			system("cls");
			break;
		}
		if(sum==0)
		{
			printf("没机会了，重来吧！\n");
			Sleep(1500);
			system("cls");
			break;
    	}
}
    }
    if(gm==2)
    {
    	system("cls");
    	system("color 02");
    	char mg[50][50]={"##############################",
		                 "#o         ####       #####   ",
						 "#  #######  #########     #  #",
						 "#  #######  ############ # # #",
						 "#  #######  #########  # # # #",
						 "#      ##   #########  # # # #",
						 "#   #   #        ####  # # # #",
						 "#   ##  #######  #####   # # #",
						 "#   ##     ####  #####   # # #",
						 "##   ####    ##     ##   # # #",
						 "###  #######  #  #  ###  #   #",
						 "#    ###      #  #  ####  #  #",
						 "#  #####  #####  #     #  #  #",
						 "#  #      #      #  ####  #  #",
						 "#   ######### ####   #       #",
						 "#             #        #     #",
						 "##############################"
						 };
		int mg1,mg2,mg3,mg4,er;
		mg1=1; mg2=1; mg3=1; mg4=29;
		char ch;
		for(er=0;er<=16;er++)
		puts(mg[er]);
		
		while(mg1!=mg3||mg2!=mg4)
		{
		ch=_getch();
		if(ch=='s')
		{
			if(mg[mg1+1][mg2]!='#')
			{
				mg[mg1][mg2]=' ';
				mg1++;
				mg[mg1][mg2]='o';
			}
		}
		if(ch=='w')
		{
			if(mg[mg1-1][mg2]!='#')
			{
				mg[mg1][mg2]=' ';
				mg1--;
				mg[mg1][mg2]='o';
			}
		}
		if(ch=='a')
		{
			if(mg[mg1][mg2-1]!='#')
			{
				mg[mg1][mg2]=' ';
				mg2--;
				mg[mg1][mg2]='o';
			}
		}
		if(ch=='d')
		{
			if(mg[mg1][mg2+1]!='#')
			{
				mg[mg1][mg2]=' ';
				mg2++;
				mg[mg1][mg2]='o';
			}
		}
		system("cls");
		for(er=0;er<=16;er++)
		puts(mg[er]);
	}
	system("cls");
	printf("恭喜你，成功通关！");
	Sleep(4000);
	system("cls");
	system("color F2");
}
else if(gm==3)
{
	system("cls");
}
else
{
	system("cls");
	int rr6;
	rr6=5;
	while(rr6>=0)
	{
	printf("|------暂无该功能。------|\n");
    printf(" **** 将在%d秒后退出 ****\n",rr6);
    Sleep(1000);
    system("cls");
    rr6=rr6-1;
    }
}
}
        if(a==6)
{
	system("cls");
	int cccp;
	double jjk,sb,jj,bb,m100,m39,m40,m41; 
	printf("请选择圆周率近似值。\n");
	printf("1:3.14\n");
	printf("2:3.1415926\n");
	printf("请输入代码：");
	scanf("%d",&cccp);
	      if(cccp==1)
{
            system("cls");
	      	printf("请输入半径：");
	      	scanf("%lf",&m100);
	      	m39 = m100*2*3.14000000000;
	      	printf("周长是%lf",m39);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"帮你忙v1.9.1:圆周长计算圆周率为3.14，半径为%lf结果为%lf\n",m100,m39);
	      	
	      	Sleep(4500);
	      	system("cls");
}
		    if(cccp==2)
{
	        system("cls");
	      	printf("请输入半径：");
	      	scanf("%lf",&m40);
	      	m41 = m40*2*3.14159260000;
	      	printf("周长是%lf",m41);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"帮你忙v1.9.1:圆周长计算圆周率为3.1415926，半径为%lf结果为%lf\n",m40,m41);
	      	
	      	Sleep(4500);
	      	system("cls");
}
           if(cccp>2||cccp<1)
{
	system("cls");
	int rr1;
	rr1=5;
	while(rr1>=0)
	{
	printf("|------暂无该功能。------|\n");
    printf(" **** 将在%d秒后退出 ****\n",rr1);
    Sleep(1000);
    system("cls");
    rr1=rr1-1;
    }
}
}
        if(a==7)
{
	system("cls");
	int op;
	double fd,mmp,m10,m12,m44,m15,m33;
	printf("请选择圆周率近似值。\n");
	printf("1:3.14\n");
	printf("2:3.1415926\n");
	printf("请输入代码：");
	scanf("%d",&op);
	      if(op==1)
	      {
	      	system("cls");
	      	printf("请输入半径：");
	      	scanf("%lf",&fd);
	      	mmp = fd*fd*3.140000000000;
	      	printf("面积是%lf",mmp);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"帮你忙v1.9.1:圆面积计算圆周率为3.14，半径为%lf结果为%lf\n",fd,mmp);
	      	
	      	Sleep(4500);
	      	system("cls");
		  }
		  if(op==2)
		  {
		  	system("cls");
	      	printf("请输入半径：");
	      	scanf("%lf",&m10);
	      	m12 = m10*m10*3.14159260000;
	      	printf("面积是%lf",m12);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"帮你忙v1.9.1:圆面积计算圆周率为3.1415926，半径为%lf结果为%lf\n",m10,m12);
	      	
	      	Sleep(4500);
	      	system("cls");
		  }
		  if(op>2||op<1)
{
	system("cls");
	int rr2;
	rr2=5;
	while(rr2>=0)
	{
	printf("|------暂无该功能。------|\n");
    printf(" **** 将在%d秒后退出 ****\n",rr2);
    Sleep(1000);
    system("cls");
    rr2=rr2-1;
    }
}
}
       if(a==8)
{
	system("cls");
	int xex;
	printf("| 请选择错误代码：|\n");
	printf("|--1：ERROR A1。--|\n");
	
	scanf("%d",&xex);
	if(xex==1)
	{
		system("cls");
		printf("错误代码ERROR A1是由于帮你忙结果记录文件（TBS.txt）或（BNM.txt）没有被成功打开或创建，在程序启动自检时弹出的错误提示。\n");
		printf("如果您在使用中弹出该错误提示，请检查以下几点：\n");
		printf("1：请不要在微信、QQ或其他聊天软件内使用本程序，程序在聊天软件内无法创建文件。\n");
		printf("2：检查本程序所在的磁盘是否还有剩余空间。如果没有，请将本程序移动至有剩余空间的磁盘。\n");
		printf("检查完成后请重启程序。\n");
		printf("退出请按1");
		int a1;
		while(1)
		{
		scanf("%d",&a1);
		if(a1==1)
		{
			system("cls");
			break;
		}
		if(a1!=1)
		{
		system("cls");
		printf("错误代码ERROR A1是由于帮你忙结果记录文件（TBS.exe）或（BNM.txt)没有被成功打开或创建，在程序启动自检时弹出的错误提示。\n");
		printf("如果您在使用中弹出该错误提示，请检查以下几点：\n");
		printf("1：请不要在微信、QQ或其他聊天软件内使用本程序，程序在聊天软件内无法创建文件。\n");
		printf("2：检查本程序所在的磁盘是否还有剩余空间。如果没有，请将本程序移动至有剩余空间的磁盘。\n");
		printf("检查完成后请重启程序。\n");
		printf("退出请按1");
		}
	}
	}
}
    if(a==9)
{
	system("cls");
	system("color 0F");
	char yyui[3];
	yyui[0]='d';
	yyui[1]='b';
	yyui[2]='s';
	yyui[3]='b';
	while(1)
	{
	if(yyui[0]=='d'&&yyui[1]=='b'&&yyui[2]=='s'&&yyui[3]=='b'||yyui[0]=='D'&&yyui[1]=='B'&&yyui[2]=='S'&&yyui[3]=='B')
	{
	printf("帮你忙v1.9.1\n");
	printf("PUECOOR WORK ROOM\n PUECOOR工作室2022保留所有权利。\n");
	printf("您可以输入help来获取帮助内容。\n");
	printf(">>>");
	}
	
	{
	scanf("%s",yyui);
	
		
	if(yyui[0]=='h'&&yyui[1]=='e'&&yyui[2]=='l'&&yyui[3]=='p'||yyui[0]=='H'&&yyui[1]=='E'&&yyui[2]=='L'&&yyui[3]=='P'||yyui[0]=='/'&&yyui[1]=='?')
	{
		printf("\n以下为指令帮助内容：\n");
		printf("HELP// /?--------获取帮助信息\n"); 
		printf("WKGN--------打开另一个帮你忙命令解释窗口。\n");
		printf("WINV--------Windowns属性。\n");
		printf("OCMD--------打开cmd。\n");
		printf("TASK--------打开Windowns任务管理器。\n");
		printf("EXIT//ESC--------退出MDC。\n");
		printf("CLS--------清屏。\n");
		printf(">>>");
	}



	else if(yyui[0]=='w'&&yyui[1]=='k'&&yyui[2]=='g'&&yyui[3]=='n'||yyui[0]=='W'&&yyui[1]=='K'&&yyui[2]=='G'&&yyui[3]=='N')
	{
		
	printf("\n帮你忙v1.9.1\n");
	printf("PUECOOR WORK ROOM\nPUECOOR工作室2022保留所有权利。\n");
	printf("您可以输入help来获取帮助内容。\n");
	printf(">>>");



	}
	
	
	else if(yyui[0]=='w'&&yyui[1]=='i'&&yyui[2]=='n'&&yyui[3]=='v'||yyui[0]=='W'&&yyui[1]=='I'&&yyui[2]=='N'&&yyui[3]=='V')
	{
	
	
		printf("\n已打开windows属性。\n");
		printf(">>>");
		system("start winver");
	


}

	else if(yyui[0]=='o'&&yyui[1]=='c'&&yyui[2]=='m'&&yyui[3]=='d'||yyui[0]=='O'&&yyui[1]=='C'&&yyui[2]=='M'&&yyui[3]=='D')
	{
	
	
		printf("\n已打开cmd\n");
		printf(">>>");
		system("start");
	


}


	else if(yyui[0]=='t'&&yyui[1]=='a'&&yyui[2]=='s'&&yyui[3]=='k'||yyui[0]=='T'&&yyui[1]=='A'&&yyui[2]=='S'&&yyui[3]=='K')
	{
	
	
		printf("\n已打开windows任务管理器。\n");
		printf(">>>");
	    system("start taskmgr");

	
}


	else if(yyui[0]=='e'&&yyui[1]=='x'&&yyui[2]=='i'&&yyui[3]=='t'||yyui[0]=='E'&&yyui[1]=='X'&&yyui[2]=='I'&&yyui[3]=='T'||yyui[0]=='e'&&yyui[1]=='s'&&yyui[2]=='c'||yyui[0]=='E'&&yyui[1]=='S'&&yyui[2]=='C')
	{
	
	
		system("cls");
		system("color F2");
		break;
	

}
else if(yyui[0]=='c'&&yyui[1]=='l'&&yyui[2]=='s'||yyui[0]=='C'&&yyui[1]=='L'&&yyui[2]=='S')
{
	system("cls");
	printf(">>>");
}

     else
     {
     	
     	
     	printf("%s不是内部指令，无法执行。\n",yyui);
     	printf(">>>");
     	
     	
	 }
}
}
}
        
        if(a>10||a<1)
{
	system("cls");
	int qqtt;
	qqtt=5;
	while(qqtt>=0)
	{
	printf("|------暂无该功能。------|\n");
    printf(" **** 将在%d秒后退出 ****\n",qqtt);
    Sleep(1000);
    system("cls");
    qqtt=qqtt-1;
	}
} 
        if(a==10)
{
	system("cls");
	printf("感谢您的使用！");
	Sleep(1500);
	system("cls");
	printf("Made with DVE-C++.");
	Sleep(1500);
	system("cls");
	printf("By PUECOOR WORK ROOM.");
	Sleep(1500);
	system("cls");
	printf("土拨鼠制作。");
	Sleep(1500);
	system("cls");
	fp=fopen("TBS.txt","a");
	
	fprintf(fp,"******* THE PROGRAM STOPS RUNNING! *******\n");
	break;
	fclose(fp);
	
}
}
}
}
}
}
}
}
}
}
}
system("pause");
	return 0;
}
