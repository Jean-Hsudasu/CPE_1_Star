#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number[3002];//這裡是存"一開始"的陣列，如:2,4,1 
	int absnumber[3002];//這裡是存經過"計算過後"的陣列 ，如:|1-4|,|4-2| 
	int bug[3002];//這裡是存已經判斷過的數字，以免再重複 
	int i,j,n;//這裡的n是我這次迴圈要輸入幾個數字 
	int flag;//這個是最後做判斷會用到的 
	int k;//這個是bug會用到的 
	while(scanf("%d",&n)==1)
	{		
		for(i=0;i<n-1;i++)
		{
			bug[i]=0;//將值歸零，以免下一個迴圈有重覆到 
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&number[i]);
		}
		for(i=n-1;i>0;i--)
		{
			absnumber[i-1]=abs(number[i]-number[i-1]);//這裡是一個一個往下相減，並且要是"正"的所以使用abs 
		}
		flag=0;
		k=0;
		for(i=0;i<n-1;i++)
		{
		 	for(j=1;j<n;j++)
			{
			 	if(absnumber[i]==j&&absnumber[i]!=bug[j-1])//這裡進行比對，但要注意"不能重複"，所以多存一個bug 
				 {
				 	flag++;
			 		bug[k]=j;
			 		k++;
			 		continue;	
				 } 
			 	
			}	
		}
		if(flag==n-1)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}
 	} 
 
 
 }
