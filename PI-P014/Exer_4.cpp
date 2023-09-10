#include <iostream>

using namespace std;


float soma(float x, float y){
    float resultado_soma =  x + y; 
    
    return resultado_soma;
}

float Subtracao(float x, float y){
    float resultado_sub =  x - y; 
    
    return resultado_sub;
}

float Multiplicacao(float x, float y){
    float resultado_mult =  x * y; 
    
    return resultado_mult;
}

float divisao(float x, float y){
    float resultado_div =  x / y; 
    
    return resultado_div;
}


void menu()
{
    cout << "CALCULADORA MATEMÁTICA\n";
    cout << endl;
    cout << "Qual cálculo matemático deseja realizar:\n";
    cout << endl;
    cout << "1. Soma\n";
    cout << "2. Subtração\n";
    cout << "3. Multiplicação\n";
    cout << "4. Divisão\n";

}

void operacoes_matematicas()
{
    int op;
    float num1, num2;

    cin >> op;

    cout << "Informe o primeiro número:\n";
    cin  >> num1;

    cout << "Informe o segundo número:\n";
    cin  >> num2;
    
    int res_soma = soma(num1, num2);
    int res_sub = Subtracao(num1, num2);
    int res_mult = Multiplicacao(num1, num2);
    int res_div= divisao(num1, num2);


    if(op==1)
        cout << "O resultado da soma é: " << res_soma << endl;
    else if(op==2)
        cout << "O resultado da subtração é: " << res_sub << endl;
    else if(op==3)
        cout << "O resultado da multiplicação é: " << res_mult << endl;
    else if(op==4)
        cout << "O resultado da divisão é: " << res_div << endl;
    else
        cout<<"Entrada inválida\n";
}

int main()
{
    menu();
    operacoes_matematicas();
    cout<<"Encerrando...\n";

    return 0;
}