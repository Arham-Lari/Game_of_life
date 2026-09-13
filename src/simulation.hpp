#pragma  once

#include "grid.hpp"
class Simulation
{
public:
    Simulation (int width , int height, int cellsize)
        : grid(width,height,cellsize),
        tem(width, height, cellsize){};
    void fillRandom();
    void clearScreen();
    void draw();
    void setValue(int row,int col,int value);
    void displayneibour(int row , int col);
    void update();

private:
    Grid grid;
    Grid tem;
};
