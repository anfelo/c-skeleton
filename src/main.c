#include "game.h"
#include "raylib.h"
#include "screen.h"
#include "stdlib.h"
#include "time.h"

int main(void) {
    srand(time(NULL));

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Dungeon Crawler");

    SetTargetFPS(60);

    game_state_t state = {0};
    game_init(&state);

    while (!WindowShouldClose()) {
        game_update(&state);

        BeginDrawing();
            ClearBackground(BLACK);

            BeginMode2D(state.camera);
                game_draw(&state);
            EndMode2D();
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
