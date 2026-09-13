#include "grid.hpp"
#include <raylib.h>
#include <utility>
#include <vector>

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
    if(Isinbound(row, col))
    {
        cells[row][col] = value;
    }
}

bool Grid::Isinbound(int row,int col)
{
    if(row >= 0 && row <= rows && col >= 0 && col <= cols)
    {
        return true;
    }
    return false;
}

int Grid:: neighbour(int row ,int col)
{
    int liveneighbour =0 ;
    const std::vector<std::pair<int, int>> offset {
        {-1,0},
        {1,0},
        {0,-1},
        {0,1},
        {-1,-1},
        {-1,1},
        {1,-1},
        {1,1}
    };

    for(const auto& off : offset)
    {
            int neighbourRow = (row + off.first + rows)%rows;
            int neighbourCol = (col + off.second + cols)%cols;
            liveneighbour += cells[neighbourRow][neighbourCol];
    }
    return liveneighbour;
}

int Grid::getValue(int row,int col )
{
    if(Isinbound(row,col)){
        return cells[row][col];
    }
    return 0;
}

void Grid::RandomGenration()
{
    for(int row = 0; row < rows; row++)
    {
        for(int col = 0;col < cols ; col++)
        {
            int randCell = GetRandomValue(0, 4) == 4 ?1 : 0;
            cells[row][col] = randCell; 
        }
    }
}
