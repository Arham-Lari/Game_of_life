#pragma once

#include <vector>
class Grid {

    public:
    Grid(int width, int height, int cellsize)
    : rows(height/cellsize),cols(width/cellsize),cellsize(cellsize),cells(rows,std::vector<int>(cols,0)){};
    void drawGrid();
    void setValue(int row , int col ,int value);

    private:
    int rows;
    int cols;
    int cellsize;
    std::vector<std::vector<int>> cells;
};
