#include <iostream>
using namespace std;

void menu(){
    cout << "==========================================" << endl
        << "        Plataforma de Videos Local" << endl
        << "==========================================" << endl
        << "1. Adicionar novo filme" << endl
        << "2. Atualizar informacoes de um filme" << endl
        << "3. Avaliar um filme" << endl
        << "4. Listar todos os filmes" << endl
        << "5. Filtrar filmes" << endl
        << "6. Reproduzir um filme" << endl
        << "7. Remover um filme" << endl
        << "8. Sair" << endl
        << "Escolha uma opcao:" << endl;
}

int main(){
    int escolha;
    bool sair = false;
    while(1){
        menu();
        cin >> escolha;
        switch(escolha){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                sair = true;
                break;
        }
        if(sair){break;}
    }
}