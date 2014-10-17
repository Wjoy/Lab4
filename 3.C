#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>

float Fun(int a,int b,int c)
{
	float r;
	switch(c)
	{
		case 1: r=(float) (a+b); break;
		case 2: r=(float) (a-b); break;
		case 3: r=(float) (a*b); break;
		case 4: r=(float)a/(float)b; break;
	}

	return r;
}

int main()
{
	int x,y,i,c;
	float n;
	int p=0;
	for (i=1;i<11;i++)
	{
		k: srand (time(NULL)) ;
		x=rand()%99+0;
		y=rand()%99+0;
		c=rand()%4+1;
		switch(c)
		{
			case 1:printf("%d+%d=\n",x,y);break;
			case 2:printf("%d-%d=\n",x,y);break;
			case 3:printf("%d*%d=\n",x,y);break;
			case 4:printf("%d/%d=\n",x,y);break;
		}
		if (y==0&&c==4)
			goto  k;
		else
			{
			scanf("%f",&n);
			if (fabs(n-Fun(x,y,c))<0.1)
			{
				p=p+10;
				printf("Right!\n");
			}
			else
				printf("Not correct.\n");
			}

		}
	printf("Score:%d\n",p);
}
