#include <stdio.h>

/*The function to sort the array in ascending order*/
void sort(float array[],int n)
{
	int i,j,pos,min;
	for (i = 0; i < n; i++)
	{
		pos=i;
		min=array[i];

		for (j = i+1; j < n; j++)
		{
			
			if (array[j]<min)
			{
				min=array[j];
				pos=j;
			}

		}

		array[pos]=array[i];
		array[i]=min;
	}
}


/*Driver code*/
int main(void)
{
	/*Declaration of variables and array size*/
	float A[100],B[100];
	int n,m,i;
	int k;
	float num;

	printf("Enter the array size:\n");
	scanf("%d",&n);

	/*Entering array elements*/
	for (i = 0; i < n; i++)
	{
		printf("A[%d]\n",i);
		scanf("%f",&A[i]);
	}

	sort(A,n);    /*Calling sort function*/
	printf("The sorted list:\n");
	for (i = 0; i < n; i++)
		printf("A[%d]=%.2f\n",i,A[i]);   /*Printing sorted array*/
		
	
	printf("Enter the desired position(0 to %d):\n",n);
	scanf("%d",&k);

	printf("Enter the number:\n");
	scanf("%f",&num);

	/*Forming new array with required changes*/
	m=n+1;
	for (int j = 0; j < k; j++)
		B[j]=A[j];

	B[k]=num;

	for (int j = k; j < m; j++)
		B[j+1]=A[j];
	
	
	/*Printing the new array*/
	printf("The new array is:\n");
	for (i = 0; i < m; i++)
		printf("B[%d]=%.2f\n",i,B[i]);
		
	
}