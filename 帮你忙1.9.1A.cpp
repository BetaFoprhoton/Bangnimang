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
    		printf("��ӭʹ�ð���æ1.9.1��\n");
    		printf("������ʼ���ֽ̳̣����Ժ�"); 
    		Sleep(3000);
    		system("cls");
    		printf("�ڽ������ʱ������ڳ�������ʱ���ֱ��������޷�������ҳ��������ͼ��\n");
			{
		system("color 1F");
		printf("***ERROR:THE FILE IS NOT OPENED!***\n");
		printf("*********PLEASE TRY AGAIN!*********\n");
		printf("***********STOP:ERROR A1***********\n");
		printf("�밴ENTER�Լ�����");
		getchar();
			}
			
			{
			system("color F2");
			system("cls");
			printf("�������ڳ�������ʱ��ѯ���������ҽ��������������ͼ��\n");
			printf("�Ƿ��ѯ������룿y/n\n\n");
			printf("y<---���롰y���Խ��롣\n");
			printf("�밴ENTER�Լ�����");
			getchar();
		    }
		    
		    {
		    	system("cls");
	printf(" |--------------------���¹���--------------------| \n");
	printf(" |---------------����Ϊ���θ�������---------------| \n");
	printf(" |                 ɾ���˼��ؽ���                 | \n");
	printf(" |               �����˸��¸���λ��               | \n"); 
	printf("�밴ENTER�Լ�����");
	getchar();
			}
			
			{
				system("cls");
	printf("�ڳ�����ҳ���������빦��ǰ��ָ�����ʹ�ö�Ӧ���ܡ�������ͼ��\n");			
    printf("|--------��ӭʹ�ð���æ1.6.6��--------|\n");
	printf("| ���ߴ�Ŀǰ���ڸ��£�ף�����ÿ��ģ�|\n");
	printf("|----- 1���ж�һ�����ܷ�7������-----|\n");
	printf("|-----2���ж�һ�����ܷ�11������-----|\n");
	printf("|-------------3����������-------------|\n");
	printf("|----------4���ж��ʣ�������----------|\n");
	printf("|-----------5������С��Ϸ��-----------|\n");
	printf("|----------6������Բ���ܳ���----------|\n");
	printf("|----------7������Բ�������----------|\n");
	printf("|----------8����������ѯ��----------|\n");
	printf("|------------9����ֹ����------------|\n");
	printf("������ָ���룺<---��������ָ����롣\n"); 
	printf("�밴ENTER�Լ�����");
	getchar();
		}
		
		{
			system("cls");
			printf("���������е������������������롰TBS.txt���С�������������ҽ����\n");
			printf("��BNM.txt��Ϊ�������б�Ҫ�ļ�����������ɾ����\n");
			printf("�밴ENTER�Լ�����");
			getchar();
		} 
		
		{
			system("cls");
			printf("�������ڡ�WKG���л�ø��๦�ܡ�\n");
			printf("�밴ENTER�Լ�����");
			getchar();
		}
		
		{
			system("cls");
			printf("����ʹ�ó�����ĳ���ܣ���������𰸺�����ʹ�ü��̡�����󣬽��Զ�������ҳ�档\n");
			printf("�밴ENTER�Լ�����");
			getchar();
		}
		
		{
			system("cls");
			printf("����ʹ�����������ذ��ճ�����ҳ����˳���ʽ�رճ��򣬷��������������޷�������¼��\n");
			printf("�밴ENTER�Լ�����");
			getchar();
		}
		
		{
			system("cls");
			printf("���ֽ̳̽����ˣ�ף���ʹ�����!");
			printf("ע���˰汾Ϊ����æ1.0���һ�汾��������ֹͣ��\n");
			printf("����������\n");
		}
		
		eert=fopen("BNM.txt","a");
		
    	fprintf(eert,"0\n");
    }
    	
    	fclose(eert);
    
    if(eert1==0)
    {
	printf("�Ƿ��ѯ������룿y/n\n\n");
	char rry;
	scanf("%c",&rry);
	
	if(rry=='y')
{
	system("cls");
	int xex1;
	printf("| ��ѡ�������룺|\n");
	printf("|--1��ERROR A1��--|\n");
	
	scanf("%d",&xex1);
	if(xex1==1)
	{
		system("cls");
		printf("�������ERROR A1�����ڰ���æ�����¼�ļ���TBS.txt����BNM.txt)û�б��ɹ��򿪻򴴽����ڳ��������Լ�ʱ�����Ĵ�����ʾ��\n");
		printf("�������ʹ���е����ô�����ʾ���������¼��㣺\n");
		printf("1���벻Ҫ��΢�š�QQ���������������ʹ�ñ����򣬳���������������޷������ļ���\n");
		printf("2����鱾�������ڵĴ����Ƿ���ʣ��ռ䡣���û�У��뽫�������ƶ�����ʣ��ռ�Ĵ��̡�\n");
		printf("�����ɺ�����������\n");
		printf("�˳��밴1");
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
		printf("�������ERROR A1�����ڰ���æ�����¼�ļ���TBS.exe����BNM.txt)û�б��ɹ��򿪻򴴽����ڳ��������Լ�ʱ�����Ĵ�����ʾ��\n");
		printf("�������ʹ���е����ô�����ʾ���������¼��㣺\n");
		printf("1���벻Ҫ��΢�š�QQ���������������ʹ�ñ����򣬳���������������޷������ļ���\n");
		printf("2����鱾�������ڵĴ����Ƿ���ʣ��ռ䡣���û�У��뽫�������ƶ�����ʣ��ռ�Ĵ��̡�\n");
		printf("�����ɺ�����������\n");
		printf("�˳��밴1");
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
	printf("............. ������������");
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
	fprintf(fp,"|-----��ӭʹ�ð���æ��������¼�ļ�-----|\n");
	fprintf(fp,"*******THE PROGRAM STARTS RUNNING! *******\n");
    }
	}
	while(1)
	{
	printf("|--------��ӭʹ�ð���æ1.9.1��--------|\n");
	printf("|-----�˰汾Ϊ����æ1.0���һ�汾-----|\n");
	printf("|-- ����æ��ֹͣ���¸�л��ҵ�֧�֣�--|\n");
	printf("|-----1:�ж�һ�������ܷ�7������-----|\n");
	printf("|----2���ж�һ�������ܷ�11������----|\n");
	printf("|-------------3����������-------------|\n");
	printf("|----------4���ж��ʣ�������----------|\n");
	printf("|-------------5��С��Ϸ��-------------|\n");
	printf("|----------6������Բ���ܳ���----------|\n");
	printf("|----------7������Բ�������----------|\n");
	printf("|----------8����������ѯ��----------|\n");
	printf("|----------------9:WKG----------------|\n");
	printf("|------------10:��ֹ����------------|\n");
	printf("������ָ���룺"); 
    int a;
    scanf("%d",&a);

    if(a==1)
{
		system("cls");
		printf("�ж�һ�������ܷ�7������\n���������֣�");
		int b;
		scanf("%d",&b);

		if(b%7==0)
{
	    system("cls");
		printf("�ܡ�\n��л����ʹ�ã�");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:�ж�%d�ܷ�7���������Ϊ�ܡ�\n",b);
		
		Sleep(5000);
		system("cls");
}
		if(b%7!=0)
{
	    system("cls");
		printf("���ܡ�\n��л����ʹ�ã�");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:�ж�%d�ܷ�7���������Ϊ���ܡ�\n",b);
		
		Sleep(5000);
		system("cls");
}
}
	if(a==2)
{
		system("cls");
		printf("�ж�һ�������ܷ�11������\n���������֣�");
		int c;
		scanf("%d",&c);
		
		if(c%11==0)
{
		system("cls");
		printf("�ܡ�\n��л����ʹ�ã�");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:�ж�%d�ܷ�11���������Ϊ�ܡ�\n",c);
		
		Sleep(5000);
		system("cls");
}
		if(c%11!=0)
{
		system("cls");
		printf("����.\n��л����ʹ�ã�");
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:�ж�%d�ܷ�7���������Ϊ���ܡ�\n",c);
		
		Sleep(5000);
		system("cls");
}
}
                if(a==3)
{
	    system("cls");
	    printf("1���ӷ���������\n2��������������\n3���˷���������\n4��������������\n������ָ���룺");
	    int x;
	    scanf("%d",&x);
	    
	    if(x==1)
{
	    double la,ka,ra;
	    ra=0;
	    system("cls");
	    printf("�������һ��������");
	    scanf("%lf",&la);
	    printf("������ڶ���������");
		scanf("%lf",&ka);
		ra = la+ka;
		printf("��Ϊ��\n");
		printf("%lf",ra);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:�ӷ�������%lf��%lf����%lf\n",la,ka,ra);
		
		Sleep(10000);
		system("cls");
} 
        if(x==2)
{
	    double lb,kb,rb;
	    rb=0;
        system("cls");
	    printf("�����뱻������");
	    scanf("%lf",&lb);
	    printf("�����������");
		scanf("%lf",&kb);
		rb = lb-kb;
		printf("��Ϊ��\n");
		printf("%lf",rb);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:����������%lf��%lf����%lf\n",lb,kb,rb);
		
		Sleep(10000);
		fclose(fp);
		system("cls");
}
        if(x==3)
{
	    double l,k,r;
	    r=0;
	    system("cls");
	    printf("�������һ��������");
	    scanf("%lf",&l);
	    printf("������ڶ���������");
		scanf("%lf",&k);
		r = l*k;
		printf("��Ϊ��\n");
		printf("%lf",r);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:�˷�������%lf��%lf����%lf\n",l,k,r);
			
		Sleep(10000);
		system("cls");    
}
        if(x==4)
{

	    double lc,kc,rc;
	    rc=0;
	    system("cls");
	    printf("�����뱻������");
	    scanf("%lf",&lc);
	    printf("������һ����Ϊ0�ĳ�����");
		scanf("%lf",&kc);
		if(kc==0)
		{
			system("cls");
			printf("����");
			Sleep(2500);
			system("cls"); 
		}
		else
		{
		rc = lc/kc;
		printf("��Ϊ��\n");
		printf("%lf",rc);
		
	    fp=fopen("TBS.txt","a");
	    
		fprintf(fp,"����æv1.9.1:����������%lf����%lf����%lf\n",lc,kc,rc);
		
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
	printf("|------���޸ù��ܡ�------|\n");
    printf(" **** ����%d����˳� ****\n",rr);
    Sleep(1000);
    system("cls");
    rr=rr-1;
    }
}
}
        if(a==4)
{
	    system("cls");
	    printf("���������֣�");
	    int ssr,count,mc;
	    count=0;
	    scanf("%d",&ssr);
	    for(mc=2;mc<=ssr-1;mc++)
	    {
	    	if(ssr%mc==0)
	    	      count++;
		}
		if(count==0)
		    printf("��������л����ʹ�ã�");
		
	        fp=fopen("TBS.txt","a");
	    
		    fprintf(fp,"����æv1.9.1:�ж��ʺ�������%d���Ϊ����\n",ssr);
		    
		    Sleep(5000);
		    system("cls");
	
		if(count!=0)
		    printf("��������л����ʹ�ã�");
		
	        fp=fopen("TBS.txt","a");
	    
		    fprintf(fp,"����æv1.9.1:�ж��ʺ�������%d���Ϊ����\n",ssr);
		    
		    Sleep(5000);
			system("cls"); 
}
                if(a==5)
{
	int gm;
	system("cls");
	printf("��ӭ����С��Ϸ����ѡ����Ϸ��\n");
	printf("1:----����С��Ϸ������Ҫ�ڰ˴λ����ڲ³���������㵽һ����������ɵ�������\n");
	printf("2:----���Թ�\n�ƶ���\nW--�����ƶ���\nS--�����ƶ���\nA--�����ƶ���\nD--�����ƶ���\n���ҵ���ȷ��·�߳��Թ�)\n");
	printf("3:----�˳���\n");
	printf("��������룺");
	scanf("%d",&gm);
	if(gm==1)
	{
	system("cls");
    printf("����С��Ϸ��ʼ������8�λ��ᣬһ��Ҫ����Ŷ��");
	int z,f,sum;
	sum=8;
	srand((unsigned)time(NULL));
	z = rand()%100;
	while(2)
	{
		sum--;
		scanf("%d",&f);
		if(f>z)
		    printf("���ˣ� ��ʣ��%d�λ��ᣬ �����\n",sum);
		if(f<z)
		    printf("С�ˣ� ��ʣ��%d�λ��ᣬ �����\n",sum);
		if(f==z) 
		{
			printf("��ϲ���� ����ˣ�\n");
			Sleep(1500);
			system("cls");
			break;
		}
		if(sum==0)
		{
			printf("û�����ˣ������ɣ�\n");
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
	printf("��ϲ�㣬�ɹ�ͨ�أ�");
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
	printf("|------���޸ù��ܡ�------|\n");
    printf(" **** ����%d����˳� ****\n",rr6);
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
	printf("��ѡ��Բ���ʽ���ֵ��\n");
	printf("1:3.14\n");
	printf("2:3.1415926\n");
	printf("��������룺");
	scanf("%d",&cccp);
	      if(cccp==1)
{
            system("cls");
	      	printf("������뾶��");
	      	scanf("%lf",&m100);
	      	m39 = m100*2*3.14000000000;
	      	printf("�ܳ���%lf",m39);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"����æv1.9.1:Բ�ܳ�����Բ����Ϊ3.14���뾶Ϊ%lf���Ϊ%lf\n",m100,m39);
	      	
	      	Sleep(4500);
	      	system("cls");
}
		    if(cccp==2)
{
	        system("cls");
	      	printf("������뾶��");
	      	scanf("%lf",&m40);
	      	m41 = m40*2*3.14159260000;
	      	printf("�ܳ���%lf",m41);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"����æv1.9.1:Բ�ܳ�����Բ����Ϊ3.1415926���뾶Ϊ%lf���Ϊ%lf\n",m40,m41);
	      	
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
	printf("|------���޸ù��ܡ�------|\n");
    printf(" **** ����%d����˳� ****\n",rr1);
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
	printf("��ѡ��Բ���ʽ���ֵ��\n");
	printf("1:3.14\n");
	printf("2:3.1415926\n");
	printf("��������룺");
	scanf("%d",&op);
	      if(op==1)
	      {
	      	system("cls");
	      	printf("������뾶��");
	      	scanf("%lf",&fd);
	      	mmp = fd*fd*3.140000000000;
	      	printf("�����%lf",mmp);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"����æv1.9.1:Բ�������Բ����Ϊ3.14���뾶Ϊ%lf���Ϊ%lf\n",fd,mmp);
	      	
	      	Sleep(4500);
	      	system("cls");
		  }
		  if(op==2)
		  {
		  	system("cls");
	      	printf("������뾶��");
	      	scanf("%lf",&m10);
	      	m12 = m10*m10*3.14159260000;
	      	printf("�����%lf",m12);
		
	        fp=fopen("TBS.txt","a");
	    
	      	fprintf(fp,"����æv1.9.1:Բ�������Բ����Ϊ3.1415926���뾶Ϊ%lf���Ϊ%lf\n",m10,m12);
	      	
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
	printf("|------���޸ù��ܡ�------|\n");
    printf(" **** ����%d����˳� ****\n",rr2);
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
	printf("| ��ѡ�������룺|\n");
	printf("|--1��ERROR A1��--|\n");
	
	scanf("%d",&xex);
	if(xex==1)
	{
		system("cls");
		printf("�������ERROR A1�����ڰ���æ�����¼�ļ���TBS.txt����BNM.txt��û�б��ɹ��򿪻򴴽����ڳ��������Լ�ʱ�����Ĵ�����ʾ��\n");
		printf("�������ʹ���е����ô�����ʾ���������¼��㣺\n");
		printf("1���벻Ҫ��΢�š�QQ���������������ʹ�ñ����򣬳���������������޷������ļ���\n");
		printf("2����鱾�������ڵĴ����Ƿ���ʣ��ռ䡣���û�У��뽫�������ƶ�����ʣ��ռ�Ĵ��̡�\n");
		printf("�����ɺ�����������\n");
		printf("�˳��밴1");
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
		printf("�������ERROR A1�����ڰ���æ�����¼�ļ���TBS.exe����BNM.txt)û�б��ɹ��򿪻򴴽����ڳ��������Լ�ʱ�����Ĵ�����ʾ��\n");
		printf("�������ʹ���е����ô�����ʾ���������¼��㣺\n");
		printf("1���벻Ҫ��΢�š�QQ���������������ʹ�ñ����򣬳���������������޷������ļ���\n");
		printf("2����鱾�������ڵĴ����Ƿ���ʣ��ռ䡣���û�У��뽫�������ƶ�����ʣ��ռ�Ĵ��̡�\n");
		printf("�����ɺ�����������\n");
		printf("�˳��밴1");
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
	printf("����æv1.9.1\n");
	printf("PUECOOR WORK ROOM\n PUECOOR������2022��������Ȩ����\n");
	printf("����������help����ȡ�������ݡ�\n");
	printf(">>>");
	}
	
	{
	scanf("%s",yyui);
	
		
	if(yyui[0]=='h'&&yyui[1]=='e'&&yyui[2]=='l'&&yyui[3]=='p'||yyui[0]=='H'&&yyui[1]=='E'&&yyui[2]=='L'&&yyui[3]=='P'||yyui[0]=='/'&&yyui[1]=='?')
	{
		printf("\n����Ϊָ��������ݣ�\n");
		printf("HELP// /?--------��ȡ������Ϣ\n"); 
		printf("WKGN--------����һ������æ������ʹ��ڡ�\n");
		printf("WINV--------Windowns���ԡ�\n");
		printf("OCMD--------��cmd��\n");
		printf("TASK--------��Windowns�����������\n");
		printf("EXIT//ESC--------�˳�MDC��\n");
		printf("CLS--------������\n");
		printf(">>>");
	}



	else if(yyui[0]=='w'&&yyui[1]=='k'&&yyui[2]=='g'&&yyui[3]=='n'||yyui[0]=='W'&&yyui[1]=='K'&&yyui[2]=='G'&&yyui[3]=='N')
	{
		
	printf("\n����æv1.9.1\n");
	printf("PUECOOR WORK ROOM\nPUECOOR������2022��������Ȩ����\n");
	printf("����������help����ȡ�������ݡ�\n");
	printf(">>>");



	}
	
	
	else if(yyui[0]=='w'&&yyui[1]=='i'&&yyui[2]=='n'&&yyui[3]=='v'||yyui[0]=='W'&&yyui[1]=='I'&&yyui[2]=='N'&&yyui[3]=='V')
	{
	
	
		printf("\n�Ѵ�windows���ԡ�\n");
		printf(">>>");
		system("start winver");
	


}

	else if(yyui[0]=='o'&&yyui[1]=='c'&&yyui[2]=='m'&&yyui[3]=='d'||yyui[0]=='O'&&yyui[1]=='C'&&yyui[2]=='M'&&yyui[3]=='D')
	{
	
	
		printf("\n�Ѵ�cmd\n");
		printf(">>>");
		system("start");
	


}


	else if(yyui[0]=='t'&&yyui[1]=='a'&&yyui[2]=='s'&&yyui[3]=='k'||yyui[0]=='T'&&yyui[1]=='A'&&yyui[2]=='S'&&yyui[3]=='K')
	{
	
	
		printf("\n�Ѵ�windows�����������\n");
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
     	
     	
     	printf("%s�����ڲ�ָ��޷�ִ�С�\n",yyui);
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
	printf("|------���޸ù��ܡ�------|\n");
    printf(" **** ����%d����˳� ****\n",qqtt);
    Sleep(1000);
    system("cls");
    qqtt=qqtt-1;
	}
} 
        if(a==10)
{
	system("cls");
	printf("��л����ʹ�ã�");
	Sleep(1500);
	system("cls");
	printf("Made with DVE-C++.");
	Sleep(1500);
	system("cls");
	printf("By PUECOOR WORK ROOM.");
	Sleep(1500);
	system("cls");
	printf("������������");
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
