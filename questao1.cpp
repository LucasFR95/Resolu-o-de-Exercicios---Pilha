#include <iostream>

using namespace std;

constexpr int MAX = 50;
class DeckSequencial
{
   public: 
    int deck[MAX];
    int N;
  
    void cria(){
        this->N = 0;
    }

    void insereInicio(int deck , int elem){
        if(this->N > 0){

        for(int i = N - 1; i>=0; i--){
            this->deck[i+1] = this-> deck[i];
        }

        }
        this -> deck[0] = elem;
        this->N++;
    };

    void insereFim(int deck[MAX] , int elem){
        this -> deck[N] = elem;
        this->N++;
    };

    int removeInicio(int deck[MAX]){
        int primeiro = this -> deck[0];
        for(int i = 0; i<N-1; i++){
            this->deck[i] = this-> deck[i+1];
        }
        return primeiro ;
    };
    int removeFim(int deck[MAX]){
        this->N--;
        return deck[N];
    };
    int buscaInicio(int deck[MAX]){
        return this->deck[0] ;
    };

    int buscaFim(int deck[MAX]){
        return this->deck[N-1] ;
    };


};


int main(){
     DeckSequencial baralho;
     baralho.cria();
     baralho.insereInicio(baralho.deck[MAX], 2);
     baralho.insereInicio(baralho.deck[MAX], 3);
     baralho.insereInicio(baralho.deck[MAX], 4);

     for(int i = 0 ; i<baralho.N ; i++){
         cout << baralho.deck[i] << endl;
     }  




     return 0;
}