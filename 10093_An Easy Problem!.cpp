#include<stdio.h>
#include<stdlib.h>
/*
�o�D���ڤ]�ݱo���O�����A���i�H�����@�U�t��k�L�{ 
������J�@�Ӧr�� �paa12z�A�çP�_�r��}�Y�O�_���Ǫ��a��A�p:0000123�A+-456�A  123(�ťաB+�B-�B )
�P�_����N�r���ഫ���Ʀr�A0-9��0-9�AA-Z��10-36�Aa-z��37-62 
�ഫ����A�s�J�r�����̤j�ȡA�ñN�C�Ӧr�����ۥ[
�̫�N�̤j�Ȭ�i���}�l�ȡA�̧ǧP�_sum�O�_�|�Q���U�Ӫ�i�ȩ�"�㰣"�A�ŦX��+1�N�O���װ� 
*/
int main() 
{
	char str[10002];
	int i,j;
	int max,sum;
	int ptr;
	int ans;//�̫��X������ 
	int err;//�P�_�O�_�|�W�L63(�̦h�u�]��62) 
	while(scanf("%s",str)==1)
	{
		ptr=-1;
		 for(i = 0; str[i] != '\0'; i++)
        {
            if((str[i] != '0') && (str[i] != '+') && (str[i] != '-')&&(str[i] != ' '))//�]���}�Y�i�H�|���_�Ǫ��Ÿ� 
            {
                ptr = i;
                break;
            }
        }
        if(ptr < 0)
        {
            printf("2\n");
            continue;
        }
        max=0,sum=0,err=0;
		for(i=ptr;str[i]!='\0';i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				str[i]=str[i]-'0';//�N�r����int 
			}
			else if(str[i]>='A'&&str[i]<='Z')
			{
				str[i]=str[i]-'A'+10;
			}
			else if(str[i]>='a'&&str[i]<='z')
			{
				str[i]=str[i]-'a'+36;
			}
			else
			{
				err = 1;	
			}
                
			if(max<str[i]) max=str[i];
			sum+=str[i];
		}
		for(i=max;i<=62;i++)
		{
			if(sum%i==0)
			{
				ans=i+1;
				break;
			}
		}
		if(i == 63 || err == 1)
            puts("such number is impossible!");
        else
            printf("%d\n", ans);
	}
 } 
