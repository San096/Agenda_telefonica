#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct contato{
    string nome;
    string numero;
};

//Função add um numero :
   void adicionarNumero(vector <contato> &contatos){
    contato newContato;
    cout << "Digite o nome do contato";
    cin >> newContato.nome;
    cout<<"digite o numero do contato";
    cin>> newContato.numero;

    contatos.push_back(newContato);
    cout<<"contato add com sucesso "

}
//Função excluir um numero:
void excluirNumero(vector <contato> &contatos){

    string nome;
    cout <<"digite o contato que deseje excluir";
    cin >> nome;

    for(auto i = contatos.begin(); i != contatos.end(); ++i){
        if( nome == nome){
            contatos.erase(i);
            cout<<"contato excluido com sucesso"<< endl;
            
    }

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
