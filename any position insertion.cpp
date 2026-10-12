#include <stdio.h>
int main()
{
	int arr[100],n,pos,val,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter position(1 to %d) and value to insert",n+1);
	scanf("%d %d",&pos,&val);
	if(pos<1 || pos>n+1)
	{
		printf("invalid position\n");
		return 0;
	}
	for(i=n-1;i>=pos;i--)
	arr[i+1]=arr[i];
	arr[pos-1]=val;
	n++;
	printf("array after insertion\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("\n");
	return 0;
}
