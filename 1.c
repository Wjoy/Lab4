#include<stdio.h>
#include<math.h>

int main()
{
	int N,a,b,c;
	for(N=100;N<1000;N++)
	{
		a=N/100;
		b=(N-100*a)/10;
		c=N-100*a-10*b;
		if(N==pow(a,3)+pow(b,3)+pow(c,3))
		{
			printf("%d\n",N);
		}
	}
}