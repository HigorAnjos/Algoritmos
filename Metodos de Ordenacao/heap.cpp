#include <iostream>
#include <algorithm>    // std::swap
using namespace std;

int vet[7]={2,7,5,1,4,3,9};

void Max(int* vet, int tamanho, int i=1)
{
    int L = 2*i;
    int R = 2*i+1;
    
	
	if(L <= 7)
	{   
		 cout<<"L-> "<<L<<" R-> "<<R<<" I-> "<<i<<endl;
	     puts(" ");
		Max(vet, tamanho, L);
		
		if ( vet[i-1]<vet[2*i-1])
		{        
			swap(vet[i-1],vet[2*i-1]);
		}
	}
	
	if (R <= 7)
	{
		 cout<<"2L-> "<<L<<" R-> "<<R<<" I-> "<<i<<endl;
			puts(" ");
		
		Max(vet, tamanho, R);
		
		if (vet[i-1]<vet[2*i])
		{
            swap(vet[i-1],vet[2*i]);
		}
	}

}

int main ()
{
    
    Max(vet,6);

    for (int i=0; i<7; i++)
    {
        cout<<vet[i]<<" ";
    }
    puts(" ");
}
