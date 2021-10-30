#include <iostream>
#include <algorithm>
using namespace std;

int maximo (int temp1, int temp2, int n)
{
    if(temp1 > temp2)
    {
        return temp1;
    }
     return temp2;
}

int ks (int* w, int* v, int n, int c)
{
    int temp1=0, temp2=0, result=0;

    if(n==0 || c==0)
    {
        result = 0;
    }
    else if(w[n] > c)
    {
        result = ks(w,v,n-1,c);
    }
    else
    {
      temp1 = ks(w,v, n-1, c);
      temp2 = v[n] + ks(w,v,n-1,c-w[n]);
      result = maximo(temp1, temp2,n);
    }
     return result;
}

int main(void)
{

    int n = 4;
    int w[n] = {0, 3,  5,  4};
    int v[n] = {0,40, 10, 10};
    int capacidade = 10;

    std::cout<<"MAX = " <<ks(w,v,n,capacidade) <<endl;

}

