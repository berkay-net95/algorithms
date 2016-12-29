#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{

	int dizi[SIZE] = {4,7,5,2,10,12,7,9,8,3};

	for(int j=1 ; j<SIZE; j++)
	{

		int key= dizi[j];
		int i=j-1;


		while(i>=0 && dizi[i]>key)
		{
			dizi[i+1]=dizi[i];
			i=i-1;
		}

		dizi[i+1]=key;
	}
	 
	for(int a=0; a<10; a++)
		printf("%d,", dizi[a]);

		printf("\n");
				return 0;

}