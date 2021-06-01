#include <iostream>
#include <stack>

using namespace std;

class Fila{
      public:
      int M;
      int inicio;
      int fim;
      int fila[50];

      void cria(){
          this->M = 0;
          this->inicio = 0;
          this->fim = 0;

          for(int i = 0; i<50; i++ ){
              fila[i] = 0;
          }
      }

      void enqueue(int x){
          this->fila[M] = x;
          this->fim++;
          this->M++;
      }

      int dequeue(){
          int e = this->fila[inicio];
          this->inicio++;
          this->M--;
          return e;

      } 

      
  };


  class Pilha{
    public:  
    int N;
    int pilhaP[50];
    
    void cria(){
        this->N=0;
        for(int i; i<50; i++){
            this->pilhaP[i] = 0;
            
        }
        
    }

    void empilha(int x){
        this->pilhaP[N] = x;
        
        
        this->N++;

    }
    
    int desempilha(){
        this->N--;

        return this->pilhaP[N];
        
    }
  };

 void mostrar(Fila x){

          for(int i=0; i<x.M; i++){
              cout << x.fila[i] << endl;
          }
} 

void pula(){
    cout << endl;
}




int main(){

    Fila f1;
    Pilha p;
    
    f1.cria();
    f1.enqueue(1);
    f1.enqueue(2);
    f1.enqueue(3);
    f1.enqueue(4);
    mostrar(f1);
    pula();
    p.empilha(f1.dequeue());
    p.empilha(f1.dequeue());
    p.empilha(f1.dequeue());
    p.empilha(f1.dequeue());

    f1.enqueue(p.desempilha());
    f1.enqueue(p.desempilha());
    f1.enqueue(p.desempilha());
    f1.enqueue(p.desempilha());

    mostrar(f1);

    return 0;
}