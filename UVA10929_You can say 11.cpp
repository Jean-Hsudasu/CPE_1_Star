#include<stdio.h>
#include<stdlib.h>
int main()
{
	char number[1002];//�ڭ̨ϥΦr��ӫŧi�A�]���D�ػ��|��1000�Ӧ�� 
	int minsum1,minsum2;//minsum1�O��"����"�쪺�q�q�[�_�ӡAminsum2�O��"�_��"�쪺�q�q�[�_�ӡA  
	int sum;//������[�_�� 
	int i;
	while(true)
	{
		sum=0;
		scanf("%s",&number);
		if(number[0]=='0'&&number[1]=='\0') break;//number[1]=='\0'���N��O�p�G�᭱�O"�Ū�" 
		minsum1=0;
		minsum2=0;
		for(i=0;number[i]!='\0';i++)
		{
			if(i%2==0)
			{
				minsum1+=number[i]-'0';	//-'0'���N��O�N�r���ন�Ʀr�A�p:'1'->1 
			}
			if(i%2==1)
			{
				minsum2+=number[i]-'0';	
			}	
		}
		sum=abs(minsum1-minsum2);//abs���N��O��"����" 
		//printf("%d %d %d\n",minsum1,minsum2,sum);
		if(sum%11==0)
		{
			printf("%s is a multiple of 11.\n",number);
		}
		else
		{
			printf("%s is not a multiple of 11.\n",number);
		}
	
	}
	
	
 } 
