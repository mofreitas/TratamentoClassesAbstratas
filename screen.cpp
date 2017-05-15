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
    //mat[linha da matriz = eixo y][coluna da matriz = eixo x]
    //testar condição para largura e altura diferentes
    if(x<ncol&&y<nlin)
    {
        mat[x][y]=brush;
    }
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

ostream& operator<<(ostream &os, Screen &t)
{
    //mat[linha da matriz = eixo y][coluna da matriz = eixo x]
    for(int y = t.nlin; y>=0;y--)
    {
        for(int x = 0; x<t.ncol;x++)
        {
            //ativar para exibição no terminal linux
            //os << setw(2);
            //no windows, configurar janela para 8x8
            os << t.mat[x][y];
        }
        os << endl;
    }
    return os;

}

