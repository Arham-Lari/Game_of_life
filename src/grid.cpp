#include "grid.hpp"
#include <raylib.h>

void Grid::drawGrid()
{
    for(int i =0 ; i< rows ; i++)
    {
        for(int j = 0; j< cols ; j++)
        {
            Color color = cells[i][j] ? Color{0,255,0,255} : Color {55,55,55,255};
            DrawRectangle(i*cellsize +1, j * cellsize +1, cellsize -1, cellsize - 1, color);
        }
    }
}

void Grid::setValue(int row,int col, int value)
{
    if(row >=0 && row <= rows && col >= 0 && col <= cols)
    {
        cells[row][col] = value;
    }
}
