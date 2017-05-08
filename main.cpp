#include <iostream>
#include <screen.h>
#include <figurageometrica.h>
#include <reta.h>
#include <circulo.h>
#include "retangulo.h"

using namespace std;

int main()
{
    Screen n(50, 50);
    n.setBrush('a');

    Retangulo r(25, 25, 10, 20);
    r.draw(n);
    cout << n;
    n.clear();

    Reta ret(25, 40, 25, 45);
    ret.draw(n);
    cout << n;
    n.clear();

    Circulo c(25, 25, 10, true);
    c.draw(n);
    cout << n;
    n.clear();

    return 0;
}

