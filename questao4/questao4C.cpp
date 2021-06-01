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

      return this->pilha[N];
    
  }

  void mostrar(){

          for(int i=0; i<this->N; i++){
              cout << this->pilha[i] << endl;
          }
  }


};

 void pula(){
      cout << endl;
  };

int main(){
    Pilha P;
    Pilha p1;
    Pilha *ptrP;
    Pilha *ptrp1;

    ptrP = &P;
    ptrp1 = &p1;

    P.cria();
    p1.cria();
    P.empilha(1);
    P.empilha(2);
    P.empilha(3);
    P.empilha(4);
    pula();
    P.mostrar();
    pula();
    p1.empilha(P.desempilha());
    p1.empilha(P.desempilha());
    p1.empilha(P.desempilha());
    p1.empilha(P.desempilha());
    pula();
    p1.mostrar();
    pula();

    cout << ptrp1 <<endl;

    ptrP = ptrp1;

    cout << ptrP << endl;


}