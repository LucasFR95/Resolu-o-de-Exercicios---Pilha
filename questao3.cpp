#include <iostream>

using namespace std;

constexpr int MAX = 50;


class Fila {
    public:

    int N;
    int pilha1[MAX];
    int pilha2[MAX];


    int cria(){
        this->N = 0;
        for(int i; i<MAX ; i++){
            pilha1[i] = 0;
            pilha2[i] = 0; 
        }
    }


    int enfileira(int x){
        for(int i; i<MAX; i++){
            if (pilha[i] == 0 ){
                
            } 
        }
        
        this->N++;
    };
    
    void desinfeleira(){

        for(int i = this->N - 1; i > 0; i--){
              pilha2[i-1] = pilha1[i];
           
        };
        
        this->N--;

        for(int i = 0 ; i < MAX ; i++){
            pilha1[i] = 0;
        };

        for(int i = 0; i < this->N; i++){
            pilha1[i] = pilha2[i];
        };

    };

    bool vazio(int vetor[]){
      int soma = 0;
      for(int i = 0; i<MAX; i++){
          soma += vetor[i];
      }
      if(soma == 0){
          return true;
      } else {
          return false;
      } 
  };

   void mostrar(){

          for(int i=0; i<this->N; i++){
              cout << this->pilha1[i] << endl;
          }
  };



};

void pula(){
    cout << endl;
}


int main(){

    Fila q;
    q.cria();
    q.enfileira(1);
    q.enfileira(2);
    q.enfileira(3);
    q.mostrar();
    q.desinfeleira();
    pula();
    q.mostrar();

    return 0;
}