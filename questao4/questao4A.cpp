#include <iostream>


using namespace std;


class Pilha { 
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

 void mostrarpilha(Pilha x){

          for(int i=0; i<x.N; i++){
              cout << x.pilhaP[i] << endl;
          }
  }

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

      void push(int x){
          this->fila[M] = x;
          this->fim++;
          this->M++;
      }

      int pop(){
          int e = this->fila[inicio];
          this->inicio++;
          this->M--;
          return e;

      } 

   
  };

   void mostrarfila(Fila x){

          for(int i=0; i<x.M; i++){
              cout << x.fila[i] << endl;
          }
} 

  void pula(){
      cout << endl;
  };


  int main(){
      Pilha P;
      Fila f1;

      P.cria();
      f1.cria();

      P.empilha(2);
      P.empilha(3);
      P.empilha(4);
      P.empilha(5);
      pula();  
      mostrarpilha(P);
      pula();  

      f1.push(P.desempilha());
      f1.push(P.desempilha());
      f1.push(P.desempilha());
      f1.push(P.desempilha());
      pula();  
      mostrarfila(f1);
      pula();

      P.empilha(f1.pop());
      P.empilha(f1.pop());
      P.empilha(f1.pop());
      P.empilha(f1.pop());

      pula();
      mostrarpilha(P);





      return 0;
  }