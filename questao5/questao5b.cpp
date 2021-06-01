#include <iostream>
#include <stack>


using namespace std;


class Fila{
    public:
    stack <int> p1,p2;

    int frente() {
        int x = p1.top();

        return x;
    }

    void enfileira(int x){
          while (!p1.empty()) {
            p2.push(p1.top());
            p1.pop();
        }
  

        p1.push(x);
  
        
        while (!p2.empty()) {
            p1.push(p2.top());
            p2.pop();
        }
      }

    int desenfileira(){
          if (p1.empty()) {
            cout << "Fila está vazia";
            exit(0);
        }
  

        int x = p1.top();
        p1.pop();
        return x;

      } 

};

void pula(){
    cout << endl;
}


int main(){

    Fila F;

    F.enfileira(1);
    F.enfileira(2);
    F.enfileira(3);

    cout << F.frente() << endl;

    cout << F.desenfileira() << endl;

    

    cout << F.desenfileira() << endl;
    cout << F.desenfileira() << endl;

    

    return 0;
}