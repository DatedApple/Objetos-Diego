#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

class Parques{
    private:
        int patos;
        int arboles;//srand(time(0))
        float cont;
        int desestres;
    public:
        Parques(){
            arboles=1+rand()%40;
            cont=100-(1+rand()%100);
            patos=(cont>25?(cont>50?(1+rand()%6)*5:(1+rand()%3)*5):0);
            desestres=arboles+patos;
        };
        int des(int estres){//void, int->persona
            estres-=desestres;
            return estres;
        };
        void getStatus(){
            cout<<"Deseas ingresar para perder "<<desestres<<" puntos de estres?";
        }
}