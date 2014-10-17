#include<stdio.h>

main()
{
	int p,r,n,m,temp;
	scanf("%d%d",&n,&m);
	if(n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	p=n*m;
	while(m!=0)
	{
	r=n%m;
	n=m;
	m=r;
	}
	printf("%d\n",p/n);
}