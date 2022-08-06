#include <iostream>
using namespace std;
int main(){
    int T;
    cout<<"Masukkan nilai temperatur : ";cin>>T;
    if(T<0){
        cout<<"Wujud air BEKU dengan temperatur "<<T<<" "<<endl;
    }else if(T<=100){
        cout<<"Wujud air CAIR dengan temperatur "<<T<<" "<<endl;
    }if(T>100){
        cout<<"Wujud air GAS dengan temperatur "<<T<<" "<<endl;
    }
}