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
	printf("��ӭʹ�ð���æ4.0�汾��\nף�����ÿ��ģ����ߴ��Ŀǰ���ڸ��£���л���֧�֣�\n1���ж��ܷ�7������\n2���ж��ܷ�11������\n3������������������ʾС�����֣�\n4������С��Ϸ��\n������ָ���룺");
    int a;
    scanf("%d",&a);

    if(a==1)
{
		system("cls");
		printf("�ж�һ�����ܷ�7������\n���������֣�");
		int b;
		scanf("%d",&b);
		
		if(b%7==0)
		printf("�ܡ�\n��л����ʹ�ã�");
		
		
		if(b%7!=0)
		printf("���ܡ�");
}
	if(a==2)
{
		system("cls");
		printf("�ж�һ�����ܷ�11������\n���������֣�");
		int c;
		scanf("%d",&c);
		
		if(c%11==0)
		printf("�ܡ�\n��л����ʹ�ã�");
		
		
		if(c%11!=0)
		printf("���ܡ�");
}
                if(a==3)
{
	    system("cls");
	    printf("1���ӷ���������\n2��������������\n3���˷���������\n4��������������\n������ָ���룺");
	    int x;
	    scanf("%d",&x);
	    
	    if(x==1)
{
	    int la,ka,ra;
	    ra=0;
	    system("cls");
	    printf("�������һ��������");
	    scanf("%d",&la);
	    printf("������ڶ���������");
		scanf("%d",&ka);
		ra = la+ka;
		printf("��Ϊ��\n");
		printf("%d",ra);
} 
        if(x==2)
{
	    int lb,kb,rb;
	    rb=0;
        system("cls");
	    printf("�����뱻������");
	    scanf("%d",&lb);
	    printf("�����������");
		scanf("%d",&kb);
		rb = lb-kb;
		printf("��Ϊ��\n");
		printf("%d",rb);
}
        if(x==3)
{
	    int l,k,r;
	    r=0;
	    system("cls");
	    printf("�������һ��������");
	    scanf("%d",&l);
	    printf("������ڶ���������");
		scanf("%d",&k);
		r = l*k;
		printf("��Ϊ��\n");
		printf("%d",r);	    
}
        if(x==4)
{

	    int lc,kc,rc;
	    rc=0;
	    system("cls");
	    printf("�����뱻������");
	    scanf("%d",&lc);
	    printf("������һ����Ϊ0�ĳ�����");
		scanf("%d",&kc);
		rc = lc/kc;
		printf("��Ϊ��\n");
		printf("%d",rc);
}
}
                if(a==4)
{
	system("cls");
    printf("����С��Ϸ��ʼ������8�λ��ᣬһ��Ҫ����Ŷ��");
	int z,f,sum;
	sum=8;
	srand((unsigned)time(NULL));
	z = rand()%100;
	while(1)
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
			break;
		}
		if(sum==0)
		{
			printf("û�����ˣ������ɣ�\n");
			break;
    	}
}
    }
	system("pause");
	return 0;
}
