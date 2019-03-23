#include<iostream>
using namespace std;

class Data{
private:
    int d;
    int m;
    int r;
public:
    Data(){
        d=1;
        m=1;
        r=2000;
    }
    Data(int d, int m, int r){
        if(m>12 || m<1){
            d=1;
            m=1;
            r=2000;
        }
        else{
            this->d=d;
            this->m=m;
            this->r=r;
        }
    }
    int Rok(){
        return r;
    }
    void DodajRok(){
        r++;
    }
    bool CzyWczesniejOd(int , int , int );
    void wypisz(){
        if(m<10){
            cout<<d<<"."<<"0"<<m<<"."<<r;
        }
        else{
            cout<<d<<"."<<m<<"."<<r;

        }
    }
};

bool Data::CzyWczesniejOd(int d2, int m2, int r2){
    if(r<r2) return true;
    else if(r>r2) return false;
    else{
        if(m<m2) return true;
        else if(m>m2) return false;
        else{
            if(d<d2) return true;
            else if(d>d2) return false;
            else return false;
        }
    }
}

int main(){
    Data d1 {1,2,2003};
    d1.wypisz();
}
