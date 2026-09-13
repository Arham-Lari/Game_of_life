#pragma once

#include <vector>
class Grid {

    public:
    Grid(int width, int height, int cellsize)
    : rows(height/cellsize),cols(width/cellsize),cellsize(cellsize),cells(rows,std::vector<int>(cols,0)){};
    void drawGrid();
    void setValue(int row , int col ,int value);
    int neighbour (int row , int col);
    int Rows(){return rows;}
    int Cols(){return cols;}
    int getValue(int row, int col);
    void RandomGenration();

    private:
    int rows;
    int cols;
    int cellsize;
    bool Isinbound(int row, int col);
    std::vector<std::vector<int>> cells;
};
