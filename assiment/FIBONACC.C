#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,t1=0,t2=1,nextTerm;
	printf("\n Enter the number of terms : ");
	scanf("%d",&n);
	printf("\n Fibonacci series : ");
	for (i=1;i<=n;i++)
	{
		printf("%d",t1);
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}
	return();
}
