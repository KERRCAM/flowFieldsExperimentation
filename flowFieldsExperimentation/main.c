#include <stdio.h>
#include <SDL.h>



int wmain(int argc, char* args[]) {

	SDL_Init(SDL_INIT_EVERYTHING);

	int myNum = 0;
	printf("%s", "testing SDL");
	scanf("%d", &myNum);

	return 0;
}