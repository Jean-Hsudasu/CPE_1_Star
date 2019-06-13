#include<stdio.h>
#include<stdlib.h>
/*
這題其實我也看得不是很懂，但可以說明一下演算法過程 
首先輸入一個字串 如aa12z，並判斷字串開頭是否有怪的地方，如:0000123，+-456，  123(空白、+、-、 )
判斷完後將字串轉換為數字，0-9為0-9，A-Z為10-36，a-z為37-62 
轉換完後，存入字元中最大值，並將每個字元都相加
最後將最大值為i的開始值，依序判斷sum是否會被接下來的i值所"整除"，符合後+1就是答案啦 
*/
int main() 
{
	char str[10002];
	int i,j;
	int max,sum;
	int ptr;
	int ans;//最後輸出的答案 
	int err;//判斷是否會超過63(最多只跑到62) 
	while(scanf("%s",str)==1)
	{
		ptr=-1;
		 for(i = 0; str[i] != '\0'; i++)
        {
            if((str[i] != '0') && (str[i] != '+') && (str[i] != '-')&&(str[i] != ' '))//因為開頭可以會有奇怪的符號 
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
				str[i]=str[i]-'0';//將字串轉int 
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
