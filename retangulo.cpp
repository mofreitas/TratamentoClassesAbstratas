#include "retangulo.h"

Retangulo::Retangulo(int x, int y, int largura, int altura)
{
    p0.setXY(x, y);
    this->largura=largura;
    this->altura=altura;
}

void Retangulo::draw(Screen &t)
{
    for(int x=p0.getX();x<p0.getX()+largura;x++)
    {
        t.setPixel(x, p0.getY());
        t.setPixel(x, p0.getY()-altura);

    }

    for(int y=p0.getY();y>p0.getY()-altura-1;y--)
    {
        t.setPixel(p0.getX(), y);
        t.setPixel(p0.getX()+largura-1, y);
    }
}


