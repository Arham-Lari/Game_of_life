#include "simulation.hpp"
#include <iostream>

void Simulation::draw()
{
    grid.drawGrid();
}

void Simulation::setValue(int row,int col,int value)
{
    grid.setValue(row, col, value);
}

void  Simulation::displayneibour(int row,int col)
{
    int li = grid.neighbour(row, col);
    std::cout<<li;
}

void Simulation::update()
{
    for(int row = 0 ; row < grid.Rows(); row++)
    {
        for(int col = 0 ; col < grid.Cols(); col++)
        {
            int lifesNear = grid.neighbour(row, col);
            int cellvalue =  grid.getValue(row, col);   

            if(cellvalue == 1)
            {
                if(lifesNear > 3 || lifesNear < 2)
                {
                    tem.setValue(row, col, 0);
                }
                else
            {
                    tem.setValue(row, col, 1);
                }
            }
            else 
        {
                if(lifesNear == 3)
                {
                    tem.setValue(row, col, 1);
                }
                else{
                    tem.setValue(row,col,0);
                }
            }
        }
    }
    
        grid = tem;
}

void Simulation::fillRandom()
{
    grid.RandomGenration();
}
