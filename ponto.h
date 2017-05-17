#ifndef PONTO_H
#define PONTO_H
#include <iostream>

using namespace std;

/** @brief A classe Ponto serve para a declaração de pontos no plano cartesiano
*
* A classe Ponto providencia a declaração e obtenção das coordenadas x e y de cada ponto.
*/
class Ponto
{
private:
    int x;
    int y;
public:
    /** @brief Construtor padrão da classe Ponto
    */
    Ponto();
    /** @brief Atribui valores à coordenada x do ponto
    *   @param x1 valor que será atribuído à coordenada x do ponto
    */
    void setXY(int x1, int y1);
    /** @brief Recupera o valor da coordenada x do ponto
    *   @return Coordenada x do ponto
    */
    int getX(void);
    /** @brief Recupera o valor da coordenada y do ponto
    *   @return Coordenada y do ponto
    */
    int getY(void);    
};

#endif // PONTO_H

