#include<stdio.h>
#include<stdlib.h>
/*
�o�@�D�P���l�Ʀ����A�P�_�O�_��9�����ơA�ե��ٻݭn�P�_�i�H�]��X���h�A�p:999 => 27(9+9+9) => 9(2+7, 2��) 
																	 99999 99999 99999 99999 9 => 189=> 18=> 9(1+8, 3��)
																	 �Ъ`�N��X�|��"1000���" 
*/ 
int main()
{
	char number[1002];//�����Φr���s�a 
	int check_number;//�|���_�ܰʪ��Ʀr 
	int temp;
	int i;
	while(scanf("%s",number)!=EOF)
	{
		check_number=0;//��l�� 
		for(i=0;number[i]!='\0';i++)
		{
			check_number+=number[i]-'0';//��U�Ӧr���ۥ[�A���ন�Ʀr 
		}
		i=0;//��l�� 
		if(check_number==0) break;//�ݿ�J��0�A�{������ 
		if(check_number%9==0)
		{
			i++;//�եi�H�Q9�㰣�N��ܦ��@���F 
			if(check_number>10)//�դj��Q�~��] 
			{
				temp=check_number;
				check_number=0;//�B�ʪ��� 
				while(temp>0)//�o�̱N��A�p��@�� 
				{
					check_number+=temp%10;
					temp/=10;
				}
				i++;
			}
			while(check_number>10)
			{
				temp=check_number;
				check_number=0;
				while(temp>0)
				{
					check_number+=temp%10;
					temp/=10;
				}
				i++;
			}
			printf("%s is a multiple of 9 and has 9-degree %d.\n",number,i);
		}
		else
		{
			printf("%s is not a multiple of 9.\n",number);
		}
	 } 
 } 
