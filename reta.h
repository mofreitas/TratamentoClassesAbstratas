#ifndef RETA_H
#define RETA_H
#include <figurageometrica.h>
#include <ponto.h>

/** @brief A classe Reta serve para fazer o tratamento de retas
*
* Esta classe é derivada da classe abstrata FiguraGeometrica e serve para armazenar retas e desenhá-las dentro da tela virtual
*/
class Reta:public FiguraGeometrica
{
private:
    Ponto p0, p1;
public:
    /**
     * @brief Construtor com argumentos da classe Reta
     * @param x0 valor que será atribuído à coordenada x do ponto inicial da reta
     * @param y0 valor que será atribuído à coordenada y do ponto inicial da reta
     * @param x1 valor que será atribuído à coordenada x do ponto final da reta
     * @param y1 valor que será atribuído à coordenada y do ponto final da reta
     */
    Reta(int x0, int y0, int x1, int y1);
    /**
     * @brief Desenha uma reta na tela virtual
     * @param t referência à um objeto da classe screen que representa a tela virtual do desenho
     */
    void draw(Screen &t);
};

#endif // RETA_H

