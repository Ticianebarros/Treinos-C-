#include <iostream>
#include <stdio.h>
#include <conio.h>
// código do voto de eleitor
using namespace std;
int main()
{ 
    string nome;
    int dia, mes, ano;
    int ano_eleicao, idade;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite o dia do seu nascimento (dia, mes, ano): ";
    cin >> dia >> mes >> ano;

    cout << "Digite o ano da eleição: ";
    cin >> ano_eleicao;

    idade = ano_eleicao - ano;

    cout << "Eleitor: " << nome << endl;
    cout << "Nascimento: " << dia,mes,ano << endl;
    printf("Idade: %d anos \n", idade);

    if (idade < 16)
        printf("Não pode votar \n");
    else if (idade < 18 || idade > 59)
        printf("Voto facultativo \n");
    else
        cout << "Voto obrigatório" << endl;

    return 0;
}