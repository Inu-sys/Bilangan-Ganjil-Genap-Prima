#include <iostream>
#include <math.h>
using namespace std;
bool isPrima(int num){
    if (num <=1) return false;
    for (int i = 2; i <= sqrt (num); i++){
            if (num % i == 0) return false;
    }
    return true;
}

int main (){
    int batas;

    cout << "Masukan batas: ";
    cin >> batas;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i++){
            if (i % 2 !=0){
                    cout << i << " ";
            }
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; i++){
            if (i % 2 == 0){
                cout << i << " ";
            }
    }
    cout << endl;

    cout << "Bilangan Prima: ";
    for (int i =1; i <= batas; i++){
            if (isPrima(i)) {
                    cout << i << " ";
            }
    }
    cout << endl;

    return 0;
}
