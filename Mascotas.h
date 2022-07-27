#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

class Mascotas{
    private:
        string nombre;
        int comida;//comida
        int max;
        int dism;
        int vida;
        int desestres;
        string tipo;
        bool perro;
        int auge;
    public:
        Mascotas(string type,string name){
            nombre=name;
            tipo=type;
            switch (type)
            {
            case "perro":
                perro=true;
                break;
            case "gato":
                perro=false;
                break;
            default:
                perro=(rand()%2=0?true:false);
                break;
            }
            if(perro==true){
                vida=(rand()%7)+10;
                dism=5+rand()%6;
                comida=100-(2*vida);
                max=comida+(2*dism);
                desestres=vida*dism;
            }
            else{
                vida=7+rand()%3;
                dism=3+rand()%3;
                comida=62-(2*vida);
                max=comida+(2*dism);
                desestres=vida*dism;
            }
            auge=vida;
        };
        int dismCom(){
            comida-=dism;
            return comida;
        };
        int sumCom(int alimento){
            comida+=alimento;
            return comida;
        };
        int lessEst(int estres){
            estres-=desestres*vida/auge;
            return estres;
        };
        void getStatus(){
            cout<<nombre<<" tiene "<<vida<<" anios y tiene "<<comida<<" puntos de comida de "<<max<<" posibles"<<endl;
        };
        int lessLife(){
            vida--;
            return vida;
        };
}