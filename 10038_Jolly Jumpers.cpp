#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number[3002];//�o�̬O�s"�@�}�l"���}�C�A�p:2,4,1 
	int absnumber[3002];//�o�̬O�s�g�L"�p��L��"���}�C �A�p:|1-4|,|4-2| 
	int bug[3002];//�o�̬O�s�w�g�P�_�L���Ʀr�A�H�K�A���� 
	int i,j,n;//�o�̪�n�O�ڳo���j��n��J�X�ӼƦr 
	int flag;//�o�ӬO�̫ᰵ�P�_�|�Ψ쪺 
	int k;//�o�ӬObug�|�Ψ쪺 
	while(scanf("%d",&n)==1)
	{		
		for(i=0;i<n-1;i++)
		{
			bug[i]=0;//�N���k�s�A�H�K�U�@�Ӱj�馳���Ш� 
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&number[i]);
		}
		for(i=n-1;i>0;i--)
		{
			absnumber[i-1]=abs(number[i]-number[i-1]);//�o�̬O�@�Ӥ@�ө��U�۴�A�åB�n�O"��"���ҥH�ϥ�abs 
		}
		flag=0;
		k=0;
		for(i=0;i<n-1;i++)
		{
		 	for(j=1;j<n;j++)
			{
			 	if(absnumber[i]==j&&absnumber[i]!=bug[j-1])//�o�̶i����A���n�`�N"���୫��"�A�ҥH�h�s�@��bug 
				 {
				 	flag++;
			 		bug[k]=j;
			 		k++;
			 		continue;	
				 } 
			 	
			}	
		}
		if(flag==n-1)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
 	} 
 
 
 }
