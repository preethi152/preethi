#include <stdio.h>

int main(void) {
	
	int n;
	scanf("%d",&n);
	if(n>0)
	{
	if(n%2==0)
	{
		printf("Even");
		
	}
	
	else if(n%2!=0)
	{
		printf("Odd");
	}
	else
	{
	printf("Zero");
	}
	}
  else
  {
  printf("invalid");
  }
	return 0;
}

