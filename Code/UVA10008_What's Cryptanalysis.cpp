#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int n;//�o�ӬO�u�n�]�X���j�� 
	char password[2000]={0};//�榸�j�餤����J�A�pThis is a test. 
	char SeparatePassword[2000]={0};//��榸�j�餤��This is a test.�ܦ�Thisisatest 
	int count[2000]= {0};//�p��r���� 
	int i,j,k,max=0;//�j��|�ϥΨ�A�o�̪�max�O�n����j�p�Ϊ��A�D�ئ���"�ƶq�h���n��e��" 
	int l=0;//�o�ӬO�n�p��password������ 
	scanf("%d",&n);
	for(i=0;i<n+1;i++)//�}�l�i�J�j�j�� �A���ƻ�nn+1�����|���� 
	{	
		gets(password);//�o�̨ϥ�gets����]�O�]���Ascanf����Ū�Ů� 
		if(i==0) continue;//�]��gets���S�ʷ|���h��ȡA�N��A�S����J�]�O�A�ҥH���F�קKbug�ڭ̱Ni=0���L�A�]�]�p���ҥH�W���n�gi=0;i<"n+1";i++ 
		l = strlen(password);
		k=0;
		for(j=0;j<2000;j++)//�o�ӫܭ��n!�N�r���l�� 
		{
			SeparatePassword[j]=' ';	
		}	
		for(j=0;j<l;j++)//�o�̬O�N�Ů沾�����B�J 
		{	
			if(password[j]!=' ')
			{
				SeparatePassword[k] = password[j];
				k++;	
			}		
		}
		for(j='A'; j<='Z'; j++)//�o�̬O�N�C��"�r��"�@�@�����A�pThisisatest�|�������]�L�@���ݬO�_��a�A������count[j]++�A�b�~��U�@�Ӱj��A�P�_�O�_��b 
        {
            for(k=0; SeparatePassword[k]!='\0'; k++)
            {
                if(toupper(SeparatePassword[k])==j)//�o�̪�toupprr�O�N�����r��"��"�ܦ��j�g�A�n���P�_ 
                {
                    count[j]++;
				}	
            }
            if(count[j]>max)//�o�̬O�ӧ�X"�̤j��"�աA�����n��X 
                max = count[j];
        }
        password[2000]={0};
	}
	for(i=max;i>0;i--)//�o�̪��޿�O�A���Ҧ����ƪ�"�̤j��"�A�b�q"�̤j��"�C�C��@�A�qA��Z�P�_�O�_��count[j]�O�ŦX�� 
	{
		for(j='A';j<='Z';j++)
		{
			if(count[j]==i)
			{
				printf("%c %d\n",j,i);
			}
		}
	}
}
