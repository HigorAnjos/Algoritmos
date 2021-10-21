
#include <iostream>

void MERGE(int* vet, int inicio, int M, int fim )
{

	int i, j, k;

	int n1 = M - inicio +1;

	int n2 = fim - M ;


//criando vetores

	int L[n1];

	int R[n2];

//copiando para auxliares

	for (i=0; i<n1; i++)
	{
		L[i] = vet[inicio + i];
	}

	for (j=0; j<n2; j++)
	{
		R[j] = vet[M + j +1];
	}

//////intercalar

i=j=0;
k = inicio;

while (i < n1 && j < n2) 
{ 
       if (L[i] <= R[j]) 
       { 

           vet[k] = L[i]; 

           i++; 

       } 
       else
	   { 
           vet[k] = R[j]; 

           j++; 

       } 

       k++; 

} 

   while (i < n1) 
   { 
       vet[k] = L[i]; 
       i++; 
       k++; 
   } 



   while (j < n2) 
   { 
       vet[k] = R[j]; 
       j++; 
       k++; 
   } 

}


void MERGESORT(int* vetA, int inicio, int fim )
{

	if (inicio<fim)
	{

		int M = (inicio+fim)/2;

		MERGESORT(vetA,inicio,M);

		MERGESORT(vetA,M+1,fim);

		MERGE(vetA,inicio,M,fim);
	}
}


int main ()
{

	int vet[6] ={7,5,3,6,9,8};

	MERGESORT(vet,0,5); // indices

	for (int i=0; i<6; i++)
	{
		std::cout<<vet[i] <<" ";
	}
}
