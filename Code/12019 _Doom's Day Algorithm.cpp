#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int monthday[]={0,31,28,31,30,31,30,31,31,30,31,30,31};//�o�̪�const�O�N��"����A����"����java��final 
	const char *weekday[]={"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};//�D�حn�D�H2011�~����ǡA��n1/1�O�P����(�l�@) 
	int i,n;
	int month,day;
	int totalday;
	scanf("%d",&n);
	while(n--)
	{
		totalday=0;
		scanf("%d%d",&month,&day);
		for(i=0;i<month;i++)
		{
			totalday+=monthday[i];//�N�Ҧ�����l�[�_�� 
		}
		totalday+=day;//�O�o�٭n�[�᭱������A�p��J2/6=0+31+6 
		printf("%s\n",weekday[totalday%7]);//�̫��X���� 
	}
}
