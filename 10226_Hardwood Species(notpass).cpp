#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char oldtree[10002]={0};
	char tree[10002][32]={0};
	char temptree[32];
	int tempcount;
	float count[10002];
	int i,j,k;
	int time;
	int n;
	float ans;
	int cas=0;
	scanf("%d",&time);
	while(time--)
	{
		i=0,n=0;
		
		getchar();
		getchar();
		oldtree[10002]={0};
		tree[10002][32]={0};
		while(gets(oldtree))//輸入要判斷的樹種 
		{
			if(oldtree[0]=='\0') break;
		
			for(j=0;oldtree[j]!='\0';j++)
			{
				tree[i][j]=oldtree[j];//改寫成"二維陣列"比較好判斷	
			}
			i++;
			n++;			
		}
		if(cas!=0) n++; 
		//printf("%d",n);
		for(i=0;i<n;i++)
		{
			count[i]=0;
			for(j=i+1;j<n;j++)
			{
				if(strcmp(tree[i],tree[j])==0)
				{
					count[i]++;
                    tree[j][0]='\0';
				}
			}
		}
		for(i=0; i<n; i++) 
        {
            for(j=i+1; j<n; j++)
            {
                if(tree[j][0]=='\0')continue;
                if(strcmp(tree[i],tree[j])==1) 
                {
                	tempcount=count[i];
                    count[i]=count[j];
                    count[j]=tempcount;
                    strcpy(temptree,tree[i]);
                    strcpy(tree[i],tree[j]);
                    strcpy(tree[j],temptree);
                }
            }
        }
        //printf("%d",n); 
		for(i=0; i<n; i++)
        {
            if(tree[i][0]!='\0')//如果國家數是0的話不用輸出 
            {
            	ans=100*(count[i]+1)/(n);
            	printf("%s %.4f\n",tree[i],ans);
            	for(k=0;tree[i][k]!='\0';k++)
            	{
            		tree[i][k]='\0';
            	}
            	
			}      
        }
        if(time!=0) printf("\n");
        cas++;
	} 
}
