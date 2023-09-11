#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Sorveteria {
    string nome;
    string endereco;
    string sabor;
    double precoSorvete;
    int estoque;

    void exibirInformacoes() {
        cout << "Nome da Sorveteria: " << nome << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "Sabor do Sorvete: " << sabor << endl;
        cout << "Preço do Sorvete: R$" << precoSorvete << endl;
        cout << "Estoque de Sorvetes: " << estoque << " unidades" << endl;
    }

    double calcularPrecoTotal(int quantidade) {
        return quantidade * precoSorvete;
    }
};

int main() {
    Sorveteria sorveteria1;

    cout << "Bem-vindo à Sorveteria!" << endl;

    cout << "Digite o nome da sorveteria: ";
    getline(cin, sorveteria1.nome);

    cout << "Digite o endereço da sorveteria: ";
    getline(cin, sorveteria1.endereco);

    cout << "Digite o sabor do sorvete: ";
    getline(cin, sorveteria1.sabor);

    cout << "Digite o preço do sorvete: R$";
    cin >> sorveteria1.precoSorvete;

    cout << "Digite o estoque de sorvetes: ";
    cin >> sorveteria1.estoque;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    sorveteria1.exibirInformacoes();

    int quantidadeComprada;
    cout << "Quantos sorvetes você deseja comprar? ";
    cin >> quantidadeComprada;

    double precoTotal = sorveteria1.calcularPrecoTotal(quantidadeComprada);

    cout << "Preço Total para " << quantidadeComprada << " sorvetes: R$" << precoTotal << endl;

    return 0;
}
