#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[2002];
	int l,i,j;
	while(gets(input))//�o�̤��Φb�i��j=0�F�A�]���D�حn�֥[ 
	{
		l=strlen(input);
		for(i=0;i<l;i++)
		{
			if(input[i]=='"')
			{
				if(j%2==0) printf("``");//�ϥ�j�h�P�_�{�b�O�Ĥ@���٬O�ĤG�� 
				else printf("''");
				j++;
			}
			else
			{
				printf("%c",input[i]);
			}
		}
		printf("\n");
	}
	
	
 } 
