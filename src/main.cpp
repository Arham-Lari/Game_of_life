#include "raylib.h"
#include "simulation.hpp"

const Vector2 windowdim {750,750};
const Color windowColor {29,29,29,255};
const int FPS = 12;
const int CELL_SIZE = 25;

int main(int argc, char* argv[])
{
    InitWindow(windowdim.x, windowdim.y, "Game_OF_Life");
    SetTargetFPS(FPS);

    Simulation sim = Simulation(windowdim.x,windowdim.y,CELL_SIZE);
    sim.fillRandom();
    
    while (!WindowShouldClose()) {
        
        BeginDrawing();

        ClearBackground(windowColor);
        sim.update();
        sim.draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
