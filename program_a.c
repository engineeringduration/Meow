#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <pthread.h>
#include <stdbool.h>
#include "play_audio.h"
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

volatile sig_atomic_t keep_running = 1;

void handle_sigint(int sig) {
    play_audio("meow.mp3");
    printf("\n \n Don't Hurt ME !! \n \n");
    

    signal(SIGINT, handle_sigint);  // re-register handler for Windows/MSYS2
}

// Thread function to listen for 'q'
void* input_listener(void* arg) {
    char buf[10];
    while (keep_running) {
        if (fgets(buf, sizeof(buf), stdin)) {
            if (buf[0] == 'q' || buf[0] == 'Q') {
                keep_running = 0;
                break;
            }
        }
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    if (init_mixer() != 0) return 1;

    signal(SIGINT, handle_sigint);


    pthread_t tid;
    pthread_create(&tid, NULL, input_listener, NULL);

    const char* message = "Program is Running";
    printf("Process ID: %d\n", getpid());
    
    printf("Press 'q' + Enter to quit\n");
    printf("Press Ctrl+C to wake up the cat\n");

    while (keep_running) {
        printf("\r                 ");
        printf("\r%s", message);
        fflush(stdout);
        sleep(1);
        for (int i = 0; i < 3 && keep_running; i++) {
            printf(".");
            fflush(stdout);
            sleep(1);
        }
    }

    pthread_join(tid, NULL);
    clean_mixer();
    return 0;
}
