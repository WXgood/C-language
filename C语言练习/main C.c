#include<stdio.h>
//*****************************һά������ϰ
void main()
{
	int a[20];
	for (int b = 0; b <= 19; b++)
	{
		printf("%X  ",a[b]=b);
		if ((b + 1) % 4 == 0)
			printf("\n");
	}

}
/*void main()
{
	int a[20] ;
	int b;
	for (b = 0; b <= 19; b++)
	{
		printf("%X\n", a[b]=b); //b++��ֵ��ֵ������a�в���ӡ
	}

}*/

/*void main()
{
	int a[20];
	for (int b = 0; b <= 19; b++)
	{
		printf("%X  ",a[b]=b);
		if ((b + 1) % 3 == 0)//ÿ���������������Ϊ������±�b��0��ʼ�������ȼӸ�1�ٳ�3ȡ����
			printf("\n");
	}*/