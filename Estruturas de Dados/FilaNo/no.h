#ifndef NO_H
#define NO_H


class no
{
private:
    int informacao;
    no*next;
public:
        no();
        no(int n);
        int  getInformacao()const{return informacao;}
        no*  getNext()const{ return next; }
        void setInformacao(int i){no::informacao = i;}
        void setNo (no*n){ next=n; }

};

#endif // NO_H
