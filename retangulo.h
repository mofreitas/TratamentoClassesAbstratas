#ifndef RETANGULO_H
#define RETANGULO_H
#include <figurageometrica.h>
#include <ponto.h>
#include <screen.h>

class Retangulo:public FiguraGeometrica
{
private:
    Ponto p0;
    int largura, altura;
public:
    Retangulo(int x, int y, int largura, int altura);
    void draw(Screen &t);
};

#endif // RETANGULO_H
