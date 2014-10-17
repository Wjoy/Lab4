#include <stdio.h>

int F(int a,int b)
{
	int i;
	for(i=b;i>=1;i--)
	{
		if (a%i==0&&b%i==0)
		break;
	}
	return i;
}

int main()
{
	int m,n,t;
	scanf("%d,%d",&m,&n);
	if (m>n)
	{
		t=m;
		m=n;
		n=t;
	}
	t=F(n,m);
	printf("The result is %d!\n",t);
}