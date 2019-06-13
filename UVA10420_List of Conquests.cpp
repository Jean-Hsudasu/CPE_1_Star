#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,temp;//n是我"總共"要輸入的字串數，i,j是跑回圈用，temp等等會解釋 
    char country[2001][30]={0};//這個是存所有的國家，後面的[30]是為了好控制每個[2001]  
	char name[70];//這個是存人名，雖然可以不用，但是等等會用到 
    scanf("%d",&n);//我一共要跑幾次迴圈 
    
        int count[2001]= {0};//先初始化，這裡代表每個"國家"的"各個"次數 
        for(i=0; i<n; i++)//這裡有趣的來了，諾輸入Spain Donna Elvira，因為scanf不能打空格，所以只會存到Spain，剩下的全部丟給name，也就是Donna Elvira 
        {
            scanf("%s",country[i]);
            gets(name);
        }
        for(i=0; i<n; i++)//這個迴圈，是在將每個國家"依序"判斷，如果有一樣的count[i]++ 
            for(j=i+1; j<n; j++)
                if(strcmp(country[i],country[j])==0)//這裡就是主要判斷是否有一樣 
                {
                    count[i]++;
                    country[j][0]='\0';//這個很重要喔!如果是已經有判斷過的國家，記得"初始化"，以免等等有判斷到 
                }
        for(i=0; i<n; i++)//因為題目要求，輸出要從a依序到z，所以來排列啦 
        {
            for(j=i+1; j<n; j++)
            {
                if(country[j][0]=='\0')continue;//如果已經"初始化的"記得跳過，繼續下一個迴圈 
                if(strcmp(country[i],country[j])==1)//這裡的邏輯是，諾前者大於後者，則輸出正值，反之，後者大於前者，輸出負值 
                {
                    strcpy(name,country[i]);//這裡就是在交換 
                    strcpy(country[i],country[j]);
                    strcpy(country[j],name);
                    temp=count[i];//記得這裡也要一起換過來，不然數字會跑掉 
                    count[i]=count[j];
                    count[j]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(country[i][0]!='\0')//如果國家數是0的話不用輸出 
                printf("%s %d\n",country[i],count[i]+1);
        }
    
    return 0;
}
