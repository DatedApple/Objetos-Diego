#include <bits/stdc++.h>
using namespace std;

class Cuentas{
    private:
        string own;
        float dinero;
    public:
        Cuentas(string owner, float cash){//string->persona
            own=owner;
            dinero=cash;
            cout<<"$"<<dinero;
        };
        void addDin(float cash){
            dinero+=cash;
            cout<<"Se agrego $"<<cash<<" a la cuenta de: "<<own<<" dando un total de $"<<dinero<<endl;
        };
        void subDin(float cash){
            dinero-=cash;
            cout<<"Se quito $"<<cash<<" a la cuenta de: "<<own<<" dando un total de $"<<dinero<<endl;
        };
        int getBalance(){
            cout<<"Dueno de la cuenta: "<<own<<endl<<"Saldo de cuenta: $"<<dinero<<endl;
            return dinero;
        }
}
