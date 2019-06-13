#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int n;//這個是只要跑幾次迴圈 
	char password[2000]={0};//單次迴圈中的輸入，如This is a test. 
	char SeparatePassword[2000]={0};//把單次迴圈中的This is a test.變成Thisisatest 
	int count[2000]= {0};//計算字母用 
	int i,j,k,max=0;//迴圈會使用到，這裡的max是要做比大小用的，題目有說"數量多的要放前面" 
	int l=0;//這個是要計算password的長度 
	scanf("%d",&n);
	for(i=0;i<n+1;i++)//開始進入大迴圈 ，為甚麼要n+1等等會說明 
	{	
		gets(password);//這裡使用gets的原因是因為，scanf不能讀空格 
		if(i==0) continue;//因為gets的特性會先去抓值，就算你沒有輸入也是，所以為了避免bug我們將i=0跳過，也因如此所以上面要寫i=0;i<"n+1";i++ 
		l = strlen(password);
		k=0;
		for(j=0;j<2000;j++)//這個很重要!將字串初始化 
		{
			SeparatePassword[j]=' ';	
		}	
		for(j=0;j<l;j++)//這裡是將空格移除的步驟 
		{	
			if(password[j]!=' ')
			{
				SeparatePassword[k] = password[j];
				k++;	
			}		
		}
		for(j='A'; j<='Z'; j++)//這裡是將每個"字元"一一做比對，如Thisisatest會先全部跑過一次看是否有a，有的話count[j]++，在繼續下一個迴圈，判斷是否有b 
        {
            for(k=0; SeparatePassword[k]!='\0'; k++)
            {
                if(toupper(SeparatePassword[k])==j)//這裡的toupprr是將全部字串"都"變成大寫，好做判斷 
                {
                    count[j]++;
				}	
            }
            if(count[j]>max)//這裡是來找出"最大值"啦，等等好輸出 
                max = count[j];
        }
        password[2000]={0};
	}
	for(i=max;i>0;i--)//這裡的邏輯是，找到所有次數的"最大值"，在從"最大值"慢慢減一，從A到Z判斷是否有count[j]是符合的 
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
