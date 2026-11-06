
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    int x, y;

    while (1) {

        // TOP - LEFT TO RIGHT
        for (x = 2; x <= 65; x++) {
            system("cls");

            gotoxy(x, 2);
            printf("+----------+");
            gotoxy(x, 3);
            printf("| GAVRIEL  |");
            gotoxy(x, 4);
            printf("+----------+");

            Sleep(1);
        }

        // RIGHT - TOP TO BOTTOM
        for (y = 2; y <= 20; y++) {
            system("cls");

            gotoxy(65, y);
            printf("+----------+");
            gotoxy(65, y + 1);
            printf("| GAVRIEL  |");
            gotoxy(65, y + 2);
            printf("+----------+");

            Sleep(1);
        }

        // BOTTOM - RIGHT TO LEFT
        for (x = 65; x >= 2; x--) {
            system("cls");

            gotoxy(x, 20);
            printf("+----------+");
            gotoxy(x, 21);
            printf("| GAVRIEL  |");
            gotoxy(x, 22);
            printf("+----------+");

            Sleep(1);
        }

        // LEFT - BOTTOM TO TOP
        for (y = 20; y >= 2; y--) {
            system("cls");

            gotoxy(2, y);
            printf("+----------+");
            gotoxy(2, y + 1);
            printf("| GAVRIEL  |");
            gotoxy(2, y + 2);
            printf("+----------+");

            Sleep(1);
        }
    }

    return 0;
}
