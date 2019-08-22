#include <iostream>

using namespace std;

int algoritm(int numero,int cycles){
    if(numero==1){
        return cycles+1;
    } else if(numero%2==1){
        algoritm((numero*3)+1,cycles+1);
    } else{
        algoritm(numero/2,cycles+1);
    }
}


int main(int argc, char *argv[]) {
    int inicio,final,mayor=0;
    while(cin >> inicio >> final) {
        for (int i = inicio; i < final; i++) {
            if (algoritm(i, 0) > mayor)
                mayor = algoritm(i, 0);
        }
        cout << inicio << " " << final << " " << mayor<<"\n";
    }
}