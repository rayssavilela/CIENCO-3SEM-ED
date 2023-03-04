#include <iostream>

using namespace std;

int main()
{
    int idade = 0;
    char opiniao;
    float quantidadeop1 = 0, quantidadeop2 = 0, quantidadeop3 = 0, quantidadeop4 = 0;
    int pessoa = 0;
    float porcentagem1 = 0, porcentagem2 = 0, porcentagem3 = 0, porcentagem4 = 0;
    int mediaidade = 0;
    int soma = 0;

    do
    {
        cout << "Defina a sua idade: ";
        cin >> idade;

    if(idade <= 0)
    {
        break;
    }

    cout << "Defina sua opiniao sobre o filme sendo elas: " << endl;
    cout << "1 = Otima" << endl;
    cout << "2 = Bom" << endl;
    cout << "3 = Regular" << endl;
    cout << "4 = Ruim" << endl;
    cin >> opiniao;

        switch(opiniao)
        {
        case '1':
            pessoa++;
            quantidadeop1++;
            break;

        case '2':
            pessoa++;
            quantidadeop2++;
            break;

        case '3':
            pessoa++;
            quantidadeop3++;
            break;

        case '4':
            pessoa++;
            quantidadeop4++;
            break;

        default:
            break;
        }
        soma = soma + idade;

    }

    while(idade > 0);
    {
        porcentagem1 = ((quantidadeop1 / pessoa) * 100);
        porcentagem2 = ((quantidadeop2 / pessoa) * 100);
        porcentagem3 = ((quantidadeop3 / pessoa) * 100);
        porcentagem4 = ((quantidadeop4 / pessoa) * 100);

        mediaidade = soma / pessoa;
        cout << "A media de idade de quem participou da votacao e de: " << mediaidade << " Anos" << endl;

    cout << "O numero de pessoas que responderam a pesquisa e de: " << pessoa << endl;
    cout << "A porcentagem que corresponde a votos considerando o filme como Otimo e de: " << porcentagem1 << "%" << endl;
    cout << "A porcentagem que corresponde a votos considerando o filme como Bom e de: " << porcentagem2 << "%" << endl;
    cout << "A porcentagem que corresponde a votos considerando o filme como Regular e de: " << porcentagem3 << "%" << endl;
    cout << "A porcentagem que corresponde a votos considerando o filme como Ruim e de: " << porcentagem4 << "%" << endl;
    }
}



