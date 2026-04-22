#include <iostream>

using namespace std;

class QuanCo{
private:
    int x;
    int y;
public:
    virtual void move(int x, int y){};
    virtual void printPos(){};
};

class ConHau : public QuanCo{
public:
    ConHau(int x, int y){
        this->x = x;
        this->y = y;
    }
    ConHau(QuanCo* a){
        this->x = a->x;
        this->y = a->y;
    }

    void printPos(){
        cout<<"( "<<x<<" , "<<y<<" )"<<endl;
    }
    
};

class Banco{
private:
    int** o;
    int count;
    QuanCo** p = new QuanCo*[8];
public:
    Banco(QuanCo* a){
        p[0] = &a;
        count = 1;

        o = new int*[8];
        for(int i = 0; i < 8; i++){
            o[i] = new int[8];
        }

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                o[i][j] = 0;
            }
        }
    }

    Banco(Banco* a){
        this->o = a->o;
        this->p = a->p;
    }
};

int main(){
    QuanCo* conhau = nullptr;
    int x,y = 0;
    while(True){
        cout<<"Nhap vi tri cua con hau";
        cin<<x<<y;
        if(x < 0 || x >= 8 && y < 0 || y >= 8){
            cout<<"Vi tri khong phu hop";
            continue;
        }

        conhau = ConHau(x ,y);
    }
}