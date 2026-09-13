#include "raylib.h"

const Vector2 windowdim {750,750};
const Color windowColor {29,29,29,255};

int main(int argc, char* argv[])
{
    InitWindow(windowdim.x, windowdim.y, "Game_OF_Life");

    while (!WindowShouldClose()) {
        
        BeginDrawing();

        ClearBackground(windowColor);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
