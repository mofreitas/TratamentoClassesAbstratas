#include <iostream>
#include <screen.h>
#include <figurageometrica.h>
#include <reta.h>
#include <circulo.h>
#include "retangulo.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void ler()
{
    Screen *t;
    FiguraGeometrica *f;
    ifstream entrada;
    ofstream saida;
    string comando, arquivo_in="C:/Users/Suporte/Desktop/TratamentoClassesAbstratas-master/entrada.txt";
    string arquivo_out="C:/Users/Suporte/Desktop/TratamentoClassesAbstratas-master/saida.txt";
    entrada.open(arquivo_in);
    saida.open(arquivo_out);
    if(entrada.is_open())
    {
        string s;
        while(getline(entrada, s))
        {
            stringstream ss(s);
            ss >> comando;
            if(!ss.good())
            {
                //cout << "Linha sem comando" << endl;
            }
            else if(comando=="dim")
            {
                int largura = 0, altura = 0;
                ss >> largura;
                ss >> altura;
                t=new Screen(altura, largura);
            }
            else if(comando=="brush")
            {
                char brush;
                ss >> brush;
                if(!ss.good()){
                    brush = ' ';
                }
                t->setBrush(brush);
            }
            else if(comando=="line")
            {
                int x0, x1, y0, y1;
                ss>>x0;
                ss>>y0;
                ss>>x1;
                ss>>y1;
                f=new Reta(x0, y0, x1, y1);
                f->draw(*t);
                cout << *t;
                saida << *t;
                delete(f);
                t->clear(); //limpardesenho
            }
            else if(comando=="rectangle")
            {
                int x0, y0, largura, altura;
                ss>>x0;
                ss>>y0;
                ss>>largura;
                ss>>altura;
                f=new Retangulo(x0, y0, largura, altura);
                f->draw(*t);
                cout << *t;
                saida << *t;
                delete(f);
                t->clear(); //limpardesenho
            }
            else if(comando=="circle")
            {
                int x0, y0, raio;
                bool preenche;
                ss>>x0;
                ss>>y0;
                ss>>raio;
                ss>>preenche;
                f=new Circulo(x0,y0,raio,preenche);
                f->draw(*t);
                cout << *t;
                saida << *t;
                delete(f);
                t->clear(); //limpardesenho
            }
            else
            {
                cout << "Comando invalido" << endl;
            }
        }
        comando.clear();
    }
    entrada.close();
    saida.close();


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

    Circulo c(25, 25, 20, true);
    c.draw(n);
    cout << n;
    n.clear();*/
    ler();
    return 0;
}

