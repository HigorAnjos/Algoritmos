#include <iostream>
void INSERTIONSORT (int* vet, int T)
{
	//int N = sizeof(vet)/ sizeof(int); // tamanho do vetor (Nao esta funcionando na funcao)
	//std::cout<<"T= "<<N<<"\n";
	
	int aux, aux2;
	int j=0;
	for (int i = 1; i<T; i++)
	{
		aux = vet[i];
		for (j=i; j>0 && vet[j]<vet[j-1]; j--)
		{
			aux2 = vet[j];
			vet[j] = vet[j-1];
			vet[j-1] = aux2;
		}
		vet[j] = aux;
	}
	
}

int main ()
{
	int T = 6;
	int vet[T]={25,1,7,5,3,9};
	
	INSERTIONSORT (vet , T);
	
	for (int i = 0;  i<T;  i++)
	{
		std::cout<<vet[i]<<" ";
	}
	
	/*int N = sizeof(vet)/ sizeof(int);
	std::cout<<"T= "<<N<<"\n";*/
	
	
}
