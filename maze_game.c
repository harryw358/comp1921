#include <stdio.h>
#include <stdlib.h>

// Defines max dimensions for a maze
#define MAX_DIM 100
#define MIN_DIM 5

// Defines the autograde exit codes
#define EXIT_SUCCESS 0
#define EXIT_ARG_ERROR 1
#define EXIT_FILE_ERROR 2
#define EXIT_MAZE_ERROR 3

typedef struct __Coordinate {
    int x;
    int y;
} Coordinate;


typedef struct __Maze {
    char **map;
    int height;
    int width;
    Coordinate start;
    Coordinate end;
} Maze;


typedef struct {
    int **currentPosition;
    Input input;
} Player;

int createMaze(Maze *this, int height, int width) {

}

void freeMaze(Maze *this) {

}

int getWidth(FILE *file) {
    
}

int getHeight(FILE *file) {

}

int readMaze(Maze *this, FILE *file) {
    
}

void print_maze(Maze *this, Coordinate *player) {
    // make sure we have a leading newline..
    printf("\n");
    for (int i = 0; i < this->height; i++)
    {
        for (int j = 0; j < this->width; j++)
        {
            // decide whether player is on this spot or not
            if (player->x == j && player->y == i)
            {
                printf("X");
            }
            else
            {
                printf("%c", this->map[i][j]);
            }
        }
        // end each row with a newline.
        printf("\n");
    }
}

void move(Maze *this, Coordinate *player, char direction) {

}

int hasWon(Maze *this, Coordinate *player) {

}

void initialisePlayer(Player *player, int rows, int cols) {
    // Allocates memory for the rows
    player->currentPosition = malloc(rows * sizeof(int *));

    // Allocates memory for each column of each row
    for (int i = 0; i < rows; i++) {
        player->currentPosition[i] = malloc(cols * sizeof(int));
    }
}

void freePlayer(Player *player, int rows) {
    for (int i = 0; i < rows; i++) {
        free(player->currentPosition[i]);
    }
    free(player->currentPosition);
}

int checkValidMaze(Maze maze) {
    // check the maze is valid
    // . return 1 for valid maze and 0 for invalid maze
    // . valid dimension sizes
    // . valid start and end positions
    // . no irregular dimensions
}

int checkValidMove(int previousRow, int previousCol) {
    // check if valid move, for example checks the player didn't move into a wall by comparing current position to previous position
    // . return 1 for valid move and 0 invalid move
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];

    Coordinate *player;
    Maze *this_maze = malloc(sizeof(maze));
    FILE *f;

    // initiate the maze and load player at the S space
    Maze maze = loadMaze(filename);
    int validMaze = checkValidMaze(maze);

    if (validMaze == 1) {
        // Initialise player
        Player player;
        initialisePlayer(&player, maze.height, maze.width);

        // allow the player to keep moving while they are not at the E space
        while (isEnd == 0) {

            // end the game once the player moves into the E space
        }
    }
}