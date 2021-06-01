#include <iostream>

using namespace std;


class PilhaMin{
    public:
    int pilha[50];
    int N;

    void cria(){
        this->N = 0;
        for(int i; i < 50; i++){
            this->pilha[i] = 0;
        }
    }

    int topo(){
        return this->pilha[N-1];
    }

    void empilha(int x){
        this->pilha[N] = x;
        this->N++;
    }

    int desempilha(){
        int ultimo = this->pilha[N];
        this->N--;
        return ultimo;
    }

    int obterMinimo(){
        int min = pilha[0];
        for(int i = 1; i<this->N;i++){
            if (min > pilha[i] ){
                min = pilha[i];
            }
        }
        return min; 

    }

};

void mostrar(PilhaMin x){

      for(int i=0; i<x.N; i++){
         cout << x.pilha[i] << endl;          
        }
} 

void pula(){
    cout << endl;
}



int main(){
    PilhaMin p;

    p.cria();

    p.empilha(3);
    p.empilha(2);
    p.empilha(1);
    p.empilha(4);
    
    mostrar(p);
    pula();

    cout << p.obterMinimo();

    return 0;
}