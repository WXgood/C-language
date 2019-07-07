#include<stdio.h>
//*****************************一维数组练习
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
		printf("%X\n", a[b]=b); //b++的值赋值在数组a中并打印
	}

}*/

/*void main()
{
	int a[20];
	for (int b = 0; b <= 19; b++)
	{
		printf("%X  ",a[b]=b);
		if ((b + 1) % 3 == 0)//每行输出三个数，因为数组的下标b从0开始，所以先加个1再除3取余数
			printf("\n");
	}*/