#include <stdio.h> 
#include <stdlib.h>
#include <windows.h> 
int main()
{
	printf("Made with TBS.");
	Sleep(3000);
	system("cls");
	printf("��ӭʹ�ð���æ2.0�汾��\n������Ŀǰֻ���ж�һ�������ܷ�7��11������������ʾ������\n���ߴ��Ŀǰ���ڸ��£���л���֧�֣�\n1���ж��ܷ�7������\n2���ж��ܷ�11������\n������ָ���룺");
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
	system("pause");
	return 0;
}
