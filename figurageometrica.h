#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <screen.h>

/** @brief A classe FiguraGeometrica é uma classe abstrata que serve para representar figuras geométricas
*
* Esta classe serve como base para outros objetos que se enquadram na categoria de figuras geométricas
*/
class FiguraGeometrica
{
public:
    /**
     * @brief Função virtual pura que serve para referenciar os métodos de "draw" das classes herdeiras
     * @param t referência à um objeto da classe screen que representa a tela virtual do desenho
     */
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
