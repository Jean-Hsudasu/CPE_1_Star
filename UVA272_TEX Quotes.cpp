#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[2002];
	int l,i,j;
	while(gets(input))//這裡不用在進行j=0了，因為題目要累加 
	{
		l=strlen(input);
		for(i=0;i<l;i++)
		{
			if(input[i]=='"')
			{
				if(j%2==0) printf("``");//使用j去判斷現在是第一個還是第二個 
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
