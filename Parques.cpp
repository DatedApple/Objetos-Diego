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
            cout<<desestres<<endl;
        };
        void des(int estres){
            estres-=desestres;
            cout<<desestres<<endl;
        };
};
int main(){
    srand(time(0));
    int x;
    cin>>x;
    Parques Parque1();
    Parque1.des(0);
    return 0;
}