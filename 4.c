#include <stdio.h>
int month(char mon[]);
int main()
{
	char mon[3];
	gets(mon);
	printf("The number of days is %d",month(mon));

}

int month(char m[])
{
	int ret=0;
	if (m[2]=='n')
	{
		if(m[1]='a') ret=31;
		else ret=30;
	}
	else if (m[2]=='b') ret=28;
	else if (m[2]=='r')
	{
		if(m[0]=='M') ret=31;
		else ret=30;
	}
	else if(m[2]=='y'||m[2]=='l'||m[2]=='g'||m[2]=='t'||m[2]=='c') ret=31;
	else ret=30;
	return ret;
}