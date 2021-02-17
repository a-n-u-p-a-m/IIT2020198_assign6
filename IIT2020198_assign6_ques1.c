#include <stdio.h>

int main(void)
{
	/*Declaration of variables and array size*/
	int number[100],n;
	int even[100];
    int odd[100];
    int i,e,o;

	printf("Enter array size:\n");
	scanf("%d",&n);

	/*Entering array elements*/
	for (i = 0; i < n; i++)
	{
		printf("number[%d]:",i);
		scanf("%d",&number[i]);
		printf("\n");
	}

	/*Splitting into two arrays*/
	e=o=0;
	for (i = 0; i < n; i++)
	{
		
		if (number[i]%2==1)    /*Condition for odd or even*/
		{
			odd[o]=number[i];
			o++;
		}
		else
		{
			even[e]=number[i];
			e++;
		}

	}

	/*Printing the separate arrays*/
	printf("Odd elements are:\n");
	for (int m = 0; m < o; m++)
		printf("%d\t",odd[m]);
	
	printf("\n");

	printf("Even elements are:\n");
	for (int r = 0; r < e; r++)
	 	printf("%d\t",even[r]);


}

