#include <stdio.h>
#include <stdlib.h>
/*
這一題與計算次方有關，但要注意不能使用"pow"函數
題目說明:
算出m是否為n的某次方，如n=9，m=3，3^2=9，故成立，則輸出9 3 1
					  如n=16，m=2，2^4=16，故成立，則輸出16 8 4 2 1 
					  諾不成立輸出	Boring! 	 
*/ 
int main()
{
 int n, m;
 int a[2002];
 int i, j;
 while(scanf("%d %d", &n, &m)==2)
 {
  i=0;
  a[i] = n;//設定a[0]=n 
  int divisible = 1;//判斷1號 
  int key = (m==1 || m>n)? 0: 1;//判斷2號，高級寫法，諾成立為0諾不成立為1 
  while(a[i] > 1&&key == 1 )
  {
   if(a[i]%m!=0)
   {
    divisible = 0;
    break;
   }
   a[i+1]= a[i]/m;//存入除後的值 
   i++;
  }
  if(divisible && key ==1)
  {
   for(j=0; j<i; j++)
   {
    printf ("%d", a[j]);
    printf((j+1 == i)? " 1\n" : " ");//因為我們一開始是設定a[0]=n，所以我們需要最後再輸出"1" 
   }
  }
  else 
  {
   printf("Boring!\n");
  }
 }
}
