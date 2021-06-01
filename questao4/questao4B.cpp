#include <iostream>


using namespace std;


class Pilha { 
  public:  
  int N;
  int pilha[50];
  
  void cria(){
      this->N=0;
      for(int i; i<50; i++){
          this->pilha[i] = 0;
          
      }
      
  }

  void empilha(int x){
      this->pilha[N] = x;
     
     
      this->N++;

  }
  
  int desempilha(){
      this->N--;
      int ultimo = this->pilha[N]; 
      this->pilha[N] = 0 ;  
      return ultimo;
    
  }
  
  

  
};

void recria(Pilha *ptrn){
      ptrn->N--;
      for(int i = 1 ; i < ptrn->N; i++){
          ptrn->pilha[i] = ptrn->pilha[i];
      }

      ptrn->pilha[0] = ptrn->pilha[0];

  };

void mostrar(Pilha x){

    for(int i=0; i<x.N; i++){
              cout << x.pilha[i] << endl;
          }
  }

 void pula(){
      cout << endl;
  };


  int main(){
      Pilha P;
      Pilha p1;
      Pilha p2;
      Pilha *ptr1;
      Pilha *ptr2;

      ptr1 = &p1;
      ptr2 = &p2;

      P.cria();
      p1.cria();
      p2.cria();
      P.empilha(1);
      P.empilha(2);
      P.empilha(3);
      P.empilha(4);
      pula();
      mostrar(P);
      pula();
      p1.empilha(P.desempilha());
      p1.empilha(P.desempilha());
      p1.empilha(P.desempilha());
      p1.empilha(P.desempilha());
      recria(ptr2);  


      return 0;
  }