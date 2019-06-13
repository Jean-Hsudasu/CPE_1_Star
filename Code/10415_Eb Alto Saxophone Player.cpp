#include<stdio.h>
#include<string.h>
/*
	很難得!這次的題目與音樂相關，主要是要判斷樂器的按鍵"被按下"幾次，音域只有兩個八度，
	樂器只有10個鍵，如果按鍵還是按著的話"不變"喔!! 
*/
char table[14][11] = {  
	//指法圖 
    "0111001111",
    "0111001110",
    "0111001100",
    "0111001000",
    "0111000000",
    "0110000000",
    "0100000000",
    "0010000000",
    "1111001110",
    "1111001100",
    "1111001000",
    "1111000000",
    "1110000000",
    "1100000000"
};
int main() 
{
    int t;//次數 
    char in[205];//按 
    int mapped[128];//與table有關 
    mapped['c'] = 0, mapped['d'] = 1;
    mapped['e'] = 2, mapped['f'] = 3;
    mapped['g'] = 4, mapped['a'] = 5;
    mapped['b'] = 6, mapped['C'] = 7;
    mapped['D'] = 8, mapped['E'] = 9;
    mapped['F'] = 10, mapped['G'] = 11;
    mapped['A'] = 12, mapped['B'] = 13;
    scanf("%d", &t);
    getchar();//要使用gets一定要先寫getchar() 
    while(t--) 
	{
        gets(in);//輸入可能是空的
		int len = strlen(in);  
        int i, j;
		int ans[10], press[10];
		for(i=0;i<10;i++)//初始化 
		{
			ans[i]=0;
			press[i]=0;
		}
        for(i = 0; i<len ; i++)
		{
            for(j = 0; j < 10; j++)
			{
                if(table[mapped[in[i]]][j] == '1')//一層一層分析(最難的地方)，判斷是否有按( ==1) 
				{ 
                    if(press[j] == 0)//因為是要計算按下去的次數，所以要再存一個press 
                    {
                    	ans[j] += 1;	
					} 
                    press[j] = 1;//有按下去了，press==1 
                } 
				else 
				{
                    press[j] = 0;//沒按到還是0 
                }
            }
        }
        for(i = 0; i < 10; i++) 
		{
			if(i!=9)//格式要求 
			{
				printf("%d ", ans[i]);	
			}
			else
			{
				printf("%d", ans[i]);
			}

        }
        printf("\n");
    }
    return 0;
}
