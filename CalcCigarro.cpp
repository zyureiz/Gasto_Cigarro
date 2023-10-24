#include <iostream>
using namespace std;

int main() {
    int anos_fumando;
    int cigarros_por_dia;
    double preco_carteira;

    cout << "\nInforme o numero de anos que voce fuma: ";
    cin >> anos_fumando;

    cout << "\nInforme o numero de carteiras fumadas por dia: ";
    cin >> cigarros_por_dia;

    cout << "\nInforme o preco de uma carteira de cigarros: R$";
    cin >> preco_carteira;

    int dias_por_ano = 365;
    double gasto_total = anos_fumando * dias_por_ano * cigarros_por_dia * preco_carteira / 20;

    cout << "\nVoce gastou aproximadamente: R$" << gasto_total << " em cigarros durante " << anos_fumando << " anos." << endl;
    cout << endl;

    return 0;
}