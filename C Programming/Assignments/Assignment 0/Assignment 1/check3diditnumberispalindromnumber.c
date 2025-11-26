#include<stdio.h>
int main()
{
	int no= 323;
	int r1,r2,r3;
	int x;
	r1=no%10;
	x=no/10;
	r2=x%10;
	r3=x/10;
	if(r1==r3)
	{
		printf(" %d number is palindrom",no);
    }
else
{
printf(" %d number is not palindrom",no);	
}

	
	
	
}