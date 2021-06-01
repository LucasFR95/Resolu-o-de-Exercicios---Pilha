#include <iostream>
#include <stack>

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

  int topo(){
      return this->pilha[N-1];
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


void mostrar(Pilha x){

    for(int i=0; i<x.N; i++){
              cout << x.pilha[i] << endl;
          }
  };

 void pula(){
      cout << endl;
  };



int main(){

    Pilha P;
    stack <int> p1,p2;
    P.cria();
    
    P.empilha(1);
    P.empilha(2);
    P.empilha(3);
    P.empilha(4);

    mostrar(P);

    pula();

    while(P.N != 0){
        p1.push(P.topo());
        P.desempilha();

    }
    
    while(!p1.empty()){
        p2.push(p1.top());
        p1.pop();
    }

    while(!p2.empty()){
        P.empilha(p2.top());
        p2.pop();
    }

    mostrar(P);



    return 0;
}