#include "reta.h"
#include <cmath>

Reta::Reta(int x0, int y0, int x1, int y1)
{
    p0.setXY(x0, y0);
    p1.setXY(x1, y1);
}

void Reta::draw(Screen &t)
{
    float a = (p1.getY()-p0.getY())/(p1.getX()-p0.getX());
    float b = p1.getY()-a*p1.getX();

    for(int x=p0.getX();x<=p1.getX();x++)
    {
        t.setPixel(x, round(a*x+b));
    }
}


