// Defines a struct for the maze
typedef struct {
    int height;
    int width;
    int[][] startingPosition;
    int[][] endingPosition;
} Maze;

typedef struct {
    char left;
    char right;
    char up;
    char down;
} Input;

typedef struct {
    int[][] currentPosition;
    Input input;
} Player

Maze loadMaze(char[] filename) {
    // take maze filename as command line argument
}

bool checkValidMaze(Maze maze) {
    // check the maze is valid
    // . valid dimension sizes
    // . valid start and end positions
    // . no irregular dimensions
}

void movePlayer(char[] direction) {
    // check for WASD keypress and move player in according direction
}

bool checkValidMove(int[][] previousPosition) {
    // check if valid move, for example checks the player didn't move into a wall by comparing current position to previous position
}

bool checkEnd(int[][] position) {
    // check if the player has moved onto the 'E' space
}

void showMap() {
    // check for M kepress and display X using array coordinates of map
}

void clearScreen() {
    // clear the screen after each move and then show the screen
}

void showScreen() {

}

void showMessage(char[] message) {

}

int main() {

    bool isEnd = false;

    // initiate the maze and load player at the S space
    Maze maze = loadMaze("filename");
    checkValidMaze(maze);

    Player player = new Player();
    player.currentPosition = Maze.startingPosition;

    // allow the player to keep moving while they are not at the E space
    while (!isEnd) {

        movePlayer('w');
        checkValidMove([0][0]);
        clearScreen();
        showScreen();

        // end the game once the player moves into the E space
        if (player.currentPosition == maze.endingPosition) {
            isEnd = true;
            showMessage("You have beaten the maze. Congratulations!");
        }
    }
}