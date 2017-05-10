#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <vector>

using namespace std;

class Screen{
private:
    int nlin, ncol;
    char brush;
    vector<vector <char> > mat;
public:
    Screen();
    Screen(int nlin, int ncol);
    void setPixel(int x, int y);
    void clear();
    void setBrush(char brush);
    void operator()(int nlin, int ncol);
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
