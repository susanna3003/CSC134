/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2023 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(SKYBLUE);

            DrawRectangleGradientV(0, 400, 800, 100, GREEN, LIME); // grass
            DrawRectangleGradientV(0, 500, 800, 100, LIME, DARKGREEN); // grass pt 2
            
            DrawRectangle(100, 100, 80, 400, DARKBROWN); // tree trunk
            DrawCircleGradient(50, 100, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(100, 100, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(150, 150, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(200, 175, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(250, 100, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(50, 80, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(80, 85, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(150, 150, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(120, 80, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(200, 90, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(80, 70, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(150, 75, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(200, 65, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(250, 50, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(80, 175, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(85, 150, 50.0, DARKGREEN, LIME);
            DrawCircleGradient(90, 100, 50.0, LIME, DARKGREEN);
            DrawCircleGradient(150, 40, 50.0, DARKGREEN, LIME);
 
            DrawCircleGradient(715, 90, 105.5, ORANGE, YELLOW); // sun
        EndDrawing();
        //----------------------------------------------------------------------------------
        
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}