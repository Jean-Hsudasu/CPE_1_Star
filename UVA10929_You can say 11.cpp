#include<stdio.h>
#include<stdlib.h>
int main()
{
	char number[1002];//иㄏノ﹃ㄓ肈ヘ弧穦1000计 
	int minsum1,minsum2;//minsum1琌р"案计"硄硄癬ㄓminsum2琌р"计"硄硄癬ㄓ  
	int sum;//р场癬ㄓ 
	int i;
	while(true)
	{
		sum=0;
		scanf("%s",&number);
		if(number[0]=='0'&&number[1]=='\0') break;//number[1]=='\0'種琌狦琌"" 
		minsum1=0;
		minsum2=0;
		for(i=0;number[i]!='\0';i++)
		{
			if(i%2==0)
			{
				minsum1+=number[i]-'0';	//-'0'種琌盢﹃锣Θ计:'1'->1 
			}
			if(i%2==1)
			{
				minsum2+=number[i]-'0';	
			}	
		}
		sum=abs(minsum1-minsum2);//abs種琌"タ计" 
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
