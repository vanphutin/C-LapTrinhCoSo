#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20
#define UP 72
#define LEFT 75
#define DOWN 80
#define RIGHT 77

// C?u tr�c c?a m?t node trong danh s�ch li�n k?t c?a con r?n
struct Node {
    int x, y;
    struct Node *next;
};

// Bi?n to�n c?c
int s = 0, score = 0;
char board[HEIGHT][WIDTH], direction = RIGHT;
struct Node *snake, *food;


// H�m kh?i t?o b?ng
void init_board() {
    int i, j;

    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1)
                board[i][j] = '*';
            else
                board[i][j] = ' ';
        }
    }
}

// H�m in b?ng ra m�n h?nh
void print_board() {
    int i, j;

    system("cls"); // X�a m�n h?nh
    printf("Score: %d\n", score);

    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

// H�m t?o con r?n ban �?u
void create_snake() {
    int i;

    snake = (struct Node*) malloc(sizeof(struct Node));
    snake->x = HEIGHT / 2;
    snake->y = WIDTH / 2;
    snake->next = NULL;

    for (i = 1; i < 3; i++) {
        struct Node *node = (struct Node*) malloc(sizeof(struct Node));
        node->x = snake->x;
        node->y = snake->y - i;
        node->next = snake->next;
        snake->next = node;
    }
}

// H�m t?o �? �n ban �?u
void create_food() {
    int x, y;

    srand(time(NULL)); // Kh?i t?o b? sinh s? ng?u nhi�n

    x = 1 + rand() % (HEIGHT - 2);
    y = 1 + rand() % (WIDTH - 2);

    food = (struct Node*) malloc(sizeof(struct Node));
    food->x = x;
    food->y = y;
    food->next = NULL;

    board[x][y] = '$';
}

// H�m di chuy?n con r?n
void move_snake() {
    struct Node *new_head, *tail;
    int i;

    // T?o �?u m?i cho con r?n
    new_head = (struct Node*) malloc(sizeof(struct Node));
    new_head->x = snake->x;
    new_head->y = snake->y;

    if (direction == UP) new_head->x--;
    if (direction == LEFT) new_head->y--;
    if (direction == DOWN) new_head->x++;
    if (direction == RIGHT) new_head->y++;

    // Ki?m tra xem da ch?m t�?ng hay ch?m th�n r?n ch�a
    if (board[new_head->x][new_head->y] == '*' || board[new_head->x][new_head->y] == '+' ) {
        printf("Game over\n");
        exit(0);
    }

    // N?u con r?n �n ��?c �? �n, t�ng �i?m v� t?o �? �n m?i
    if (new_head->x == food->x && new_head->y == food->y) {
        s++;
        score += s;
        free(food);
        create_food();
    }
    else {
        tail = snake;
        snake = snake->next;
        free(tail);
    }

    // Th�m �?u m?i v�o �?u danh s�ch li�n k?t c?a con r?n
    new_head->next = snake;
    snake = new_head;

    // C?p nh?t b?ng
    board[snake->x][snake->y] = '+';
    board[tail->x][tail->y] = ' ';
}

// H�m x? l? c�c ph�m �i?u khi?n
void handle_input() {
    int ch = getch();

    switch (ch) {
        case UP:
        case LEFT:
        case DOWN:
        case RIGHT:
            if (direction == UP && ch == DOWN || direction == DOWN && ch == UP || direction == LEFT && ch == RIGHT || direction == RIGHT && ch == LEFT) {
                break;
            }
            direction = ch;
            break;
        default:
            break;
    }
}

int main() {
    init_board();
    create_snake();
    create_food();
    print_board();

    while (1) {
        if (_kbhit()) handle_input();
        move_snake();
        print_board();
        Sleep(150); // Ch? 150ms
    }

    return 0;
}


