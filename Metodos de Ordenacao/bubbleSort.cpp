#include <iostream>

void BUBBLESORT (int* vet, int T)
{			
	int j=0, i=0;
	int aux=0;
	for (i = 0 ; i < T-1 ; i++)
	{
		for (j =0; j<T-i-1; j++)
		{
			if (vet[j]>vet[j+1])
			{
				aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
}
int main ()
{
	int T = 6;
	int vet[T]={25,1,7,5,3,9};
	
	BUBBLESORT(vet , T);
	
	for (int i = 0;  i<T;  i++)
	{
		std::cout<<vet[i]<<" ";
	}	
	
}
