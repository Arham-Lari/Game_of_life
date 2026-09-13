#include "raylib.h"
#include "grid.hpp"

const Vector2 windowdim {750,750};
const Color windowColor {29,29,29,255};
const int FPS = 12;

int main(int argc, char* argv[])
{
    InitWindow(windowdim.x, windowdim.y, "Game_OF_Life");
    SetTargetFPS(FPS);

    Grid grid = Grid(windowdim.x,windowdim.y,25);
    grid.setValue(0, 0, 1);

    while (!WindowShouldClose()) {
        
        BeginDrawing();

        ClearBackground(windowColor);
        grid.drawGrid();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
