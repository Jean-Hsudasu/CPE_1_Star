#include<stdio.h>
#include<string.h>
/*
	�����o!�o�����D�ػP���֬����A�D�n�O�n�P�_�־�������"�Q���U"�X���A����u����ӤK�סA
	�־��u��10����A�p�G�����٬O���۪���"����"��!! 
*/
char table[14][11] = {  
	//���k�� 
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
    int t;//���� 
    char in[205];//�� 
    int mapped[128];//�Ptable���� 
    mapped['c'] = 0, mapped['d'] = 1;
    mapped['e'] = 2, mapped['f'] = 3;
    mapped['g'] = 4, mapped['a'] = 5;
    mapped['b'] = 6, mapped['C'] = 7;
    mapped['D'] = 8, mapped['E'] = 9;
    mapped['F'] = 10, mapped['G'] = 11;
    mapped['A'] = 12, mapped['B'] = 13;
    scanf("%d", &t);
    getchar();//�n�ϥ�gets�@�w�n���ggetchar() 
    while(t--) 
	{
        gets(in);//��J�i��O�Ū�
		int len = strlen(in);  
        int i, j;
		int ans[10], press[10];
		for(i=0;i<10;i++)//��l�� 
		{
			ans[i]=0;
			press[i]=0;
		}
        for(i = 0; i<len ; i++)
		{
            for(j = 0; j < 10; j++)
			{
                if(table[mapped[in[i]]][j] == '1')//�@�h�@�h���R(�������a��)�A�P�_�O�_����( ==1) 
				{ 
                    if(press[j] == 0)//�]���O�n�p����U�h�����ơA�ҥH�n�A�s�@��press 
                    {
                    	ans[j] += 1;	
					} 
                    press[j] = 1;//�����U�h�F�Apress==1 
                } 
				else 
				{
                    press[j] = 0;//�S�����٬O0 
                }
            }
        }
        for(i = 0; i < 10; i++) 
		{
			if(i!=9)//�榡�n�D 
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
