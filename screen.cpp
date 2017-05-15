#include <iostream>
#include <iomanip>
#include "screen.h"

using namespace std;

Screen::Screen()
{

}

Screen::Screen(int nlin, int ncol)
{
    this->nlin=nlin;
    this->ncol=ncol;
    mat.resize(nlin);
    for(int i=0;i<nlin;i++)
    {
        mat[i].resize(ncol, ' ');
    }
}


void Screen::setPixel(int x, int y)
{
    //linha = eixo y, coluna = eixo x
    mat[y][x]=brush;
}

void Screen::clear()
{
    for(int i = 0; i<nlin;i++)
    {
        for(int j = 0; j<ncol;j++)
        {
            mat[i][j]=' ';
        }
    }
}

void Screen::setBrush(char brush)
{
    this->brush=brush;
}

void Screen::operator()(int nlin, int ncol)
{
    this->nlin=nlin;
    this->ncol=ncol;
    mat.resize(nlin);
    for(int i=0;i<nlin;i++)
    {
        mat[i].resize(ncol, ' ');
    }
}

ostream& operator<<(ostream &os, Screen &t)
{
    t.setPixel(3, 3);
    for(int i = t.nlin-1; i>=0;i--)
    {
        for(int j = 0; j<t.ncol;j++)
        {
            //os << setw(2);
            os << t.mat[i][j];
        }
        os << endl;
    }
    return os;

}

