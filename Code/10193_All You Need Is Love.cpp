#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
������J�ڭn��諸�Ʀr��(times)�A�A���O��J�Ʀr1�P�Ʀr2�A�O�_�o��ӼƦr����۴�A�i�H��s�A
�ps1=10�As2=2�A10-2=8�A8-2=6�A6-2=4�A4-2=2�A2-2=0�A���\��X:All you need is love!
��ҫ�i�H�o�{��n�P�D�̤j���]�Ʀ����A�դ��O1�A�N���\�A���o�̭n�`�N�A�Ʀr1�B2���O"2�i��"�A�ó���"�r�ꫬ�A" 
*/ 
int main()
{
	char str_s[2002];//�Ʀr1(�r��) 
	char str_l[2002];//�Ʀr2(�r��) 
	int i,j,k;
	int l_s;//�r�����(�Ʀr1) 
	int l_l;//�r�����(�Ʀr2)
	int int_s;//�Ʀr1
	int int_l;//�Ʀr2
	int times;//���X�ռƦr 
	int temp;//�D�̤j���]�ƻݭn 
	scanf("%d",&times);
	for(k=0;k<times;k++)
	{
		scanf("%s%s",str_s,str_l);
		l_s=strlen(str_s);//�p��r����� 
		l_l=strlen(str_l);//�p��r����� 
		j=0,int_s=0;
		for(i=l_s-1;i>=0;i--)//�o�̪�����"�r��"�h�P�_�A��10�i��(int) 
		{
			if(str_s[i]=='1')//�զr����1�N�n�[ 
			{
				int_s+=pow(2,j);
				j++;
			}
			if(str_s[i]=='0') j++;
		}
		j=0,int_l=0;
		for(i=l_l-1;i>=0;i--)//�޿�@�ˡA�����Ʀr2 
		{
			if(str_l[i]=='1')
			{
				int_l+=pow(2,j);
				j++;
			}
			if(str_l[i]=='0') j++;
		}
		while(int_l!=0)//�o�̨D�̤j���]�� 
		{
			temp=int_s%int_l;
			int_s=int_l;
			int_l=temp;
		 }
		 printf("Pair #%d: ",k+1);
		 if(int_s==1) 
		 {
		 	printf("Love is not all you need!\n");
		 }
		 else
		 {
		 	printf("All you need is love!\n");
		 }	
	}
 } 
