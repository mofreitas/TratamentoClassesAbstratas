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

    for(int x=inicx; x<=fimx; x++)
    {
        for(int y=inicy;y<=fimy;y++)
        {
            calc=round(sqrt(pow(y-centro.getY(),2)+pow(x-centro.getX(), 2)));
            if(preenchido)
            {
                if(calc<=raio)
                {
                     t.setPixel(x, y);
                }
            }
            else
            {
                if(calc==raio)
                {
                    t.setPixel(x, y);
                }
            }
        }
    }
}


