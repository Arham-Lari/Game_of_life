#include "raylib.h"
#include "simulation.hpp"

const int WIN_HEIGHT = 750;
const int WIN_WINDTH= 750;
const Color windowColor {29,29,29,255};
int FPS = 12;
const int CELL_SIZE = 25;

int main(int argc, char* argv[])
{
    bool isRunning = false;

    InitWindow(WIN_WINDTH, WIN_HEIGHT, "Game_OF_Life");
    SetTargetFPS(FPS);

    Simulation sim = Simulation(WIN_WINDTH,WIN_HEIGHT,CELL_SIZE);
    
    while (!WindowShouldClose()) {
        
        BeginDrawing();

        switch(GetKeyPressed())  {
          case KEY_SPACE:
                {
                    isRunning = false;
                    SetWindowTitle("Game_OF_Life is paused");
                    break;
                }
            case KEY_ENTER:
                {
                    isRunning = true;
                    SetWindowTitle("Game_OF_Life is active");
                    break;
                }
            case KEY_C:
                {
                    sim.clearScreen();
                    break;
                }
            case KEY_A:
                {
                    sim.fillRandom();
                    break;
                }
        }

        ClearBackground(windowColor);
        if(isRunning){
            sim.update();
        }
        sim.draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
