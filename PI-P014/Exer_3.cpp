#include <iostream>
#include <cmath>

using namespace std;

struct Ponto {
    int xA; 
    int xB; 
    int yA; 
    int yB;
} dois_pontos_ref;

int distancia(int xA, int xB, int yA, int yB){
    int distancia_pontos = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));  

    return distancia_pontos;
}

void entrada_dados() {
    int aX, bX, aY, bY;

    cout << "Informe o valor do ponto Xa: ";
    cin >> aX;
    cout << "Informe o valor do ponto Ya: ";
    cin >> aY;
    cout << "Informe o valor do ponto Xb: ";
    cin >> bX;
    cout << "Informe o valor do ponto Yb: ";
    cin >> bY;

    int d = distancia(aX, bX, aY, bY);

    cout << endl;
    cout << "A distância entre A e B é: " << d << endl; 
}

int main(){

    entrada_dados();

    return 0;
}
