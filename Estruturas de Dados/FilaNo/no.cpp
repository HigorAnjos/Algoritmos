#include "no.h"


no::no():informacao(0),next(0){}

no::no(int n)
{
    no::informacao = n;
    no::next=0;
}
