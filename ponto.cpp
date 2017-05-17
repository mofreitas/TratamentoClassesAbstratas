#include "ponto.h"
#include <iostream>
#include <cmath>

using namespace std;

Ponto::Ponto()
{

}

int Ponto::getX(void)
{
    return x;
}

int Ponto::getY(void)
{
    return y;
}

void Ponto::setXY(int x1, int y1)
{
    x=x1;
    y=y1;
}


