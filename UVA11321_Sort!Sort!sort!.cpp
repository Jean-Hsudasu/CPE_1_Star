#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b[3000];
	int n,mod;//n琌"Τ碭计"璶逼mod琌"秈︽逼"┮惠璶"緇计" 
	int i,j,temp=0;//逼┮惠璶把计 
	while(true)//箇砞礚癹伴 
	{
		scanf("%d%d",&n,&mod);
		//printf("%d %d\n",n,mod);
		if(n==0&&mod==0) //狦n籔mod常琌0杠玥铬癹伴 
		{
			printf("0 0\n");
			break;
		}
		
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[i]);//稱璶逼计 
		}
		for(i=0;i<n-1;i++)//絋玂–计常穦砆ゑ耕ㄏノㄢ糷for癹伴 
		{
			for(j=i;j<n-1;j++)//絋玂–计常穦砆ゑ耕ㄏノㄢ糷for癹伴  
			{
				//秨﹍逼 
				if(b[i]%mod > b[j+1]%mod)//材˙:狦玡"緇计"ゑ耕"璶ユ传" 
				{
					temp = b[i];
					b[i] = b[j+1];
					b[j+1] = temp;
				}
						if(b[i]%mod == b[j+1]%mod)//瞷竒逼緇计"ぃ"非称逼緇计"" 
						{
							if ( b[i]%2==0 && b[j+1]%2==1 || b[j+1]%2==-1 )//材˙:"緇计"空"案计""计"玡"璶ユ传" 
							{
					            temp = b[i];
								b[i] = b[j+1];
								b[j+1] = temp;
					        }  
							if((b[i]%2==1||b[i]%2==-1) && (b[j+1]%2==1||b[j+1]%2==-1) && b[i]<b[j+1])//材˙:"緇计"常琌"计"空""""玡"璶ユ传" 
							{
								temp = b[i];
								b[i] = b[j+1];
								b[j+1] = temp;	
							}
							if(b[i]%2==0 && b[j+1]%2==0 && b[i]>b[j+1])//材˙:"緇计"常琌"案计"空""""玡"璶ユ传" 
							{
								temp = b[i];
								b[i] = b[j+1];
								b[j+1] = temp;	
							}	
						}	
				}
				//逼挡		
			}
			printf("%d %d\n",n,mod);
			for(i=0;i<n;i++)
			{
				printf("%d ,%d\n",b[i],b[i]%mod);//逼计b[i]%moddebugノ 
			}
		}	
	
	
}


