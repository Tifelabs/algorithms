#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <stdio.h>
#include <stdlib.h>

void cleanup(Mix_Music *music) {
    if (music != NULL) {
        Mix_FreeMusic(music);
    }
    Mix_CloseAudio();
    SDL_Quit();
}

int main(int argc, char *argv[]) {
    // Checking  if the user provided an MP3 file
    if (argc < 2) {
        printf("Usage: %s <mp3 file>\n", argv[0]);
        return 1;
    }

    // Initialize SDL
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Initialize SDL_mixer
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
        SDL_Quit();
        return 1;
    }

    // Load the MP3 file
    Mix_Music *music = Mix_LoadMUS(argv[1]);
    if (music == NULL) {
        printf("Failed to load music: %s\n", Mix_GetError());
        cleanup(NULL);
        return 1;
    }

    // Play the MP3 file
    if (Mix_PlayMusic(music, 1) == -1) {
        printf("Failed to play music: %s\n", Mix_GetError());
        cleanup(music);
        return 1;
    }

    printf("Playing: %s\n", argv[1]);
    printf("Press Enter to quit...\n");

    // Wait until the music finishes or user presses Enter
    while (Mix_PlayingMusic()) {
        SDL_Delay(100);  // Delay for a short time to allow the music to play
    }

    // Wait for user input to quit
    getchar();

    // Clean up
    cleanup(music);

    return 0;
}
