#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char input[2000]={0};//�o�̬O����J���K�� 
	char key[]="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./'";//�o�ӬO�K��ѽX�ݭn����� 
	//char key[]="`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";
	int i,j,l,n;//�o�̪�n�O���Q�ഫ���p�g(tolower) 
	while(gets(input))//��gets�Ӧs�A�]����J�|���Ů� 
	{
		l=strlen(input);
			for(i=0;i<l;i++)
			{	
				n=tolower(input[i]);//�o�̴N�O�N������J�୼�p�g 
				if(n!='`' && n!='1' && n!='q' && n!='w' && n!='a' && n!='s' && n!='z' && n!='x')//�o�̭n�`�N�A�]���D�حn�D�A�ѽX�O��"��L�W����r"�V�����洫�A�p�G�O�����ӰO�o�n���L 
				{
					for(j=0;j<47;j++)//�]��key��47�Ӧr�� 
					{
						if(n==' ')
						{
							printf(" ");
							break;
						}
						if(n==key[j])
						{
							printf("%c",key[j-2]);//�o�̴N�O�V�������� 
						}
					}
				}
			}
		printf("\n");
	}
	
 } 
