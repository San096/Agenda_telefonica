#include <iostream>
#include <vector>
using namespace std;



vector<agenda>;

void adicionarNumero(){
     string nome, numero;

    cout << "Digite o nome: ";
    cin >> nome ;
    cout << "Digite o número de telefone: ";
    cin >> numero;
    agenda[nome] = numero;
    cout << "Número de telefone adicionado com sucesso!" ;
}
void excluirNumero() {
    string nome;
    cout << "Digite o nome para excluir o número de telefone: ";
    cin >> nome;
    if (agenda.find(nome) != agenda.end()) {
        agenda.erase(nome);
        cout << "Número de telefone excluído com sucesso!"  ;
    } else {
        cout << "O nome não foi encontrado na agenda." ;
    }
}
void listarNumeros() {
    cout << "Lista de números de telefone:" << endl;
    for (const auto& it : agenda) {
        cout << "Nome: " << it.first << ", Número: " << it.second << endl;
    }
}
void obterNumero() {
    string nome;
    cout << "Digite o nome para obter o número de telefone: ";
    cin >> nome;
    if (agenda.find(nome) != agenda.end()) {
        cout << "Número de telefone de " << nome << ": " << agenda[nome] << endl;
    } else {
        cout << "O nome não foi encontrado na agenda." << endl;
    }
}
int main() {
    int opcao;
    do {
        // Menu
        cout << "\nMenu:" << endl;
        cout << "1. Adicionar número de telefone" << endl;
        cout << "2. Excluir número de telefone" << endl;
        cout << "3. Listar números de telefone" << endl;
        cout << "4. Obter número de telefone" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarNumero();
                break;
            case 2:
                excluirNumero();
                break;
            case 3:
                listarNumeros();
                break;
            case 4:
                obterNumero();
                break;
            case 5:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 5);

    return 0;
}