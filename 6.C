#include<stdio.h>
#include<string.h>
void DU(char n);
void QIAN(char n[]);

int main()
{
	char Num[10],T[4],P[4];
	int i,len,cha;
	gets(Num);
	len=strlen(Num);
	cha=8-len;
	for(i=7;i>=cha;i--)
	{
		Num[i]=Num[i-cha];
	}
	for(i=0;i<cha;i++)
	{
		Num[i]='0';
	}
	for(i=0;i<4;i++)
	{
		T[i]=Num[i];
	}
	for(i=4;i<8;i++)
	{
		P[i-4]=Num[i];
	}
	if(len<=4)
	{
		QIAN(P);
	}
	else
	{
		QIAN(T);
		printf("wan ");
		if(P[0]=='0')
		{
			printf("ling ");
		}
		QIAN(P);
	}
	return 0;
}
void DU(char n)
{
	char *pa;
	if(n=='0') printf("ling ");
	else if(n=='1') printf("yi ");
	else if(n=='2') printf("er ");
	else if(n=='3') printf("san ");
	else if(n=='4') printf("si ");
	else if(n=='5') printf("wu ");
	else if(n=='6') printf("liu ");
	else if(n=='7') printf("qi ");
	else if(n=='8') printf("ba ");
	else if(n=='9') printf("jiu ");
}
void QIAN(char n[])
{
	if(n[0]=='0'&&n[1]=='0'&&n[2]=='0')
	{
		DU(n[3]);
	}
	if(n[0]=='0'&&n[1]=='0'&&n[2]!='0')
	{
		if(n[2]!='1')
		{
			DU(n[2]);
		}
		printf("shi ");
		if(n[3]!='0')
		{
			DU(n[3]);
		}
	}
	if(n[0]=='0'&&n[1]!='0')
	{
		if(n[1]=='2')
			printf("liang ");
		else
			DU(n[1]);
		printf("bai ");
		if(n[2]=='0'&&n[3]!='0')
		{
			printf("ling ");
		DU(n[3]);
		}
		else if(n[2]!='0'&&n[3]=='0')
		{
			DU(n[2]);
			printf("shi ");
		}
		else if(n[2]!='0'&&n[3]!='0')
		{
			DU(n[2]);
			printf("shi ");
			DU(n[3]);
		}

	}
	if(n[0]!='0')
	{
		if(n[0]=='2')
		{
			printf("liang ");
		}
		else
		{
			DU(n[0]);
		}
		printf("qian ");

		if(n[1]!='0'&&n[2]!='0'&&n[3]!='0')
		{
			DU(n[1]);
			printf("bai ");
			DU(n[2]);
			printf("shi ");
			DU(n[3]);
		}
		else if(n[1]=='0'&&n[2]!='0'&&n[3]!='0')
		{
			printf("ling ");
			DU(n[2]);
			printf("shi ");
			DU(n[3]);
		}
		else if(n[1]=='0'&&n[2]=='0'&&n[3]!='0')
		{
			DU(n[3]);
		}
		else if(n[1]!='0'&&n[2]!='0'&&n[3]=='0')
		{
			DU(n[1]);
			printf("bai ");
			DU(n[2]);
			printf("shi ");
		}
		else if(n[1]!='0'&&n[2]=='0'&&n[3]!='0')
		{
			DU(n[1]);
			printf("bai ling ");
			DU(n[3]);
		}
		else if(n[1]=='0'&&n[2]!='0'&&n[3]=='0')
		{
			printf("ling ");
			DU(n[2]);
			printf("shi ");
		}
		else if(n[1]!='0'&&n[2]=='0'&&n[3]=='0')
		{
			DU(n[1]);
			printf("bai ");
		}
	}
}