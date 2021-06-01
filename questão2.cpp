#include <iostream>


using namespace std;

constexpr int MAX = 50;
class Stack { 
  public:  
  int N;
  int *ptr;
  int fila1[MAX];
  int fila2[MAX];
  
  void cria(){
      this->N=0;
      for(int i; i<MAX; i++){
          this->fila1[i] = 0;
          this->fila2[i] = 0;
      }
      
  }

  void push(int x){
      this->fila1[N] = x;
     
     
      this->N++;

  }
  
  int pop(){
      for(int i; i< this->N-1;i++){
          this->fila2[i] = this->fila1[i];
      }

      for(int i; i< this->N;i++){
          this->fila1[i] = 0;
      }

      this->N--;

       for(int i; i< this->N; i++){
          this->fila1[i] = this->fila2[i];
      }
      
    
  }

  void mostrar(){

          for(int i=0; i<this->N; i++){
              cout << this->fila1[i] << endl;
          }
  }

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

};

void pula(){
    cout<<endl;
}

int main(){

    Stack s;
    s.cria();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.mostrar();
    pula();
    s.pop();
    pula();
    s.mostrar();
    s.pop();
    pula();
    s.mostrar();




    return 0;
}