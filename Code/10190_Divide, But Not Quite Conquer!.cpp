#include <stdio.h>
#include <stdlib.h>
/*
�o�@�D�P�p�⦸�観���A���n�`�N����ϥ�"pow"���
�D�ػ���:
��Xm�O�_��n���Y����A�pn=9�Am=3�A3^2=9�A�G���ߡA�h��X9 3 1
					  �pn=16�Am=2�A2^4=16�A�G���ߡA�h��X16 8 4 2 1 
					  �դ����߿�X	Boring! 	 
*/ 
int main()
{
 int n, m;
 int a[2002];
 int i, j;
 while(scanf("%d %d", &n, &m)==2)
 {
  i=0;
  a[i] = n;//�]�wa[0]=n 
  int divisible = 1;//�P�_1�� 
  int key = (m==1 || m>n)? 0: 1;//�P�_2���A���żg�k�A�զ��߬�0�դ����߬�1 
  while(a[i] > 1&&key == 1 )
  {
   if(a[i]%m!=0)
   {
    divisible = 0;
    break;
   }
   a[i+1]= a[i]/m;//�s�J���᪺�� 
   i++;
  }
  if(divisible && key ==1)
  {
   for(j=0; j<i; j++)
   {
    printf ("%d", a[j]);
    printf((j+1 == i)? " 1\n" : " ");//�]���ڭ̤@�}�l�O�]�wa[0]=n�A�ҥH�ڭ̻ݭn�̫�A��X"1" 
   }
  }
  else 
  {
   printf("Boring!\n");
  }
 }
}
