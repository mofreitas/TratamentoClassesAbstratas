#include "circulo.h"
#include <cmath>

Circulo::Circulo(int x, int y, int r, bool p)
{
    centro.setXY(x, y);
    raio = r;
    preenchido = p;
}

void Circulo::draw(Screen &t)
{
    int inicx = centro.getX()-raio;
    int fimx = centro.getX()+raio;
    int inicy = centro.getY()-raio;
    int fimy = centro.getY()+raio;
    int calc;

    for(int x = inicx;x<=fimx;x++)
    {
        calc=round(sqrt(pow(raio,2)-pow(x-centro.getX(), 2))+centro.getY());
        t.setPixel(x, calc);
        calc=round(centro.getY()-sqrt(pow(raio,2)-pow(x-centro.getX(), 2)));
        t.setPixel(x, calc);
    }

    if(preenchido)
    {
        for(int x = inicx;x<=fimx;x++)
        {
            for(int y = inicy;y<=fimy;y++)
            {
               calc=round(sqrt(pow(x-centro.getX(), 2)+pow(y-centro.getY(), 2)));
               if(calc<=raio)
               {
                    t.setPixel(x, y);
               }
            }
        }
    }
}

