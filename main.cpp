#include <iostream>
#include <screen.h>
#include <figurageometrica.h>
#include <reta.h>
#include <circulo.h>
#include "retangulo.h"
#include <fstream>
#include <string>

using namespace std;

void ler()
{
    Screen *t;
    ifstream entrada;
    string comando, arquivo="C:/Users/Suporte/Desktop/texte.txt";
    cout << "Digite o caminho do arquivo a ser lido: " << endl;
    //cin >> arquivo;
    entrada.open(arquivo);
    if(entrada.is_open())
    {
        string s;
        getline(entrada,s);
        stringstream ss(s);
        ss >> comando;
//        entrada >> comando;
        if(comando=="dim")
        {
            int largura = 0, altura = 0;
            ss >> largura;
            ss >> altura;
            entrada >> largura;
            entrada >> altura;
            t = new Screen(altura, largura);
        }
        else if(comando=="brush")
        {
            char brush;
            ss >> brush;
            if(!ss.good()){
                brush = ' ';
            }
            t.setBrush(brush);
        }
    }


}

int main()
{
    /*Screen n(50, 50);
    n.setBrush('a');

    Retangulo r(25, 25, 10, 20);
    r.draw(n);
    cout << n;
    n.clear();

    Reta ret(25, 40, 25, 45);
    ret.draw(n);
    cout << n;
    n.clear();

    Circulo c(25, 25, 10, true);
    c.draw(n);
    cout << n;
    n.clear();
*/
    ler();
    return 0;
}

