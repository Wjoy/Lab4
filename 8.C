#include <stdio.h>

int F(int a,int b)
{
	int t;
	if (a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	a=a-b;
	if (a==b)
		return a;
	else
		a=F(a,b);
}

int main()
{
	int m,n,r;
	scanf("%d,%d",&m,&n);
	r=F(m,n);
	printf("The result is %d!\n",r);
}