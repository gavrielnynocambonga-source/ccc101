
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//SIZE MIGO
#define FACE_WIDTH 100
#define FACE_X 0
#define FACE_Y 5

// MOVE CURSOR
void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), pos
    );
}

// PARA MATUNGA SA ASCII FACE
int centerX(int textLength)
{
    return FACE_X + (FACE_WIDTH - textLength) / 2;
}

// MOVING LINES BELOW TITLE
void movingLines(int frame)
{
    gotoxy(FACE_X, 2);

    for (int i = 0; i < FACE_WIDTH; i++)
    {
        printf("%c", (i + frame) % 2 == 0 ? '=' : '-');
    }

    gotoxy(FACE_X, 3);

    for (int i = 0; i < FACE_WIDTH; i++)
    {
        printf("%c", (i + frame) % 2 == 0 ? '*' : '~');
    }
}

// RIDE SIDE DESIGN
void movingObjects(int frame)
{
    char objects[] = {'*', '+', 'o', '@'};

    for (int i = 0; i < 6; i++)
    {
        int y = 6 + (frame / 2 + i * 8) % 45;

        int rightX = FACE_X + FACE_WIDTH + 5
                     + (frame / 2 + i * 3) % 9;

        gotoxy(rightX, y);
        printf("%c", objects[(frame + i) % 4]);
    }
}

// BOTTOM MESSAGES
void bottomMessages(int frame)
{
    char message1[] = "HAPPY NEW YEAR EVERYONE";
    char message2[] = "WELCOME YEAR 2027";

    gotoxy(centerX(strlen(message1)), 55);
    printf("%s", message1);

    gotoxy(centerX(strlen(message2)), 57);
    printf("%s", message2);

    gotoxy(FACE_X, 59);

    for (int i = 0; i < FACE_WIDTH; i++)
    {
        printf("%c", (i + frame) % 2 == 0 ? '*' : '+');
    }
}

// MAIN PROGRAM
int main()
{
    int frame = 0;

    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cursor;
    cursor.dwSize = 1;
    cursor.bVisible = FALSE;

    SetConsoleCursorInfo(console, &cursor);

    char title[] = "*** HAPPY NEW YEAR 2027 ***";

    // CONTINUOUS ANIMATION
    while (1)
    {
        system("cls");

        // TOP TITLE - CENTERED WITH ASCII FACE
        gotoxy(centerX(strlen(title)), 0);
        printf("%s", title);

        // MOVING DECORATIVE LINES
        movingLines(frame);

        // KAPASPASON 
        if (frame % 100 < 97)
        {
            gotoxy(FACE_X, FACE_Y);

            printf(":::::::::::::::::::::::::::::::::::::^^::::::^^^^:^^^^^^^^^:^:::::::::::::::::::::::::::::::::::::::\n");
            printf("::::::::::::::::::::::::::::::::^^^^~~!!~^^:^^^^^~!!!!77!!~^^^^^^:::::::::::::::::::::::::::::::::::\n");
            printf(":::::::::::::::::::::::::::::^^^~!?JYYYJ???!~!!7JY55PPP555YJ7!~^^::^^:::::::::::::::::::::::::::::::\n");
            printf("::::::::::::::::::::::::::::^~!?Y5PPPGGGG55YYY5PGGGGGPGGGGGGPY?!^^:::^^:::::::::::::::::::::::::::::\n");
            printf("::::::::::::::::::::::::::^~?5PGGGGGGBBBBBBGBBBBBBBGGGBBBBBBBGP5Y7~^::^^::::::::::::::::::::::::::::\n");
            printf("::::::::::::::::::::::::^!J5PGGGGBBBBBBBBB#######BBBBBBBBBGGBGGGGPJ!^^^^^:::::::::::::::::::::::::::\n");
            printf(":::::::::::::::::::::^^!YPGGBBBB#########BB###########BBBBBBBBBBBBGP5?~^^^::::::::::::::::::::::::::\n");
            printf("::::::::::::::::::::^7YPGGB#####&&#&&&&&#####&&&&&&&############BBBGGG5J!^^:::::::::::::::::::::::::\n");
            printf(":::::::::::::::::::~JGGGBB###&&&&&&&&&&&&&&&#&&&&&&&&&&&&&&#&&#####BBBGPY7~^::::::::::::::::::::::::\n");
            printf("::::::::::::::::::^?PGGBB###&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&###BGPY7~^:::::::::::::::::::::::\n");
            printf(":::::::::::::::::^7PGGBB###&&&&&&&&&&&&&&&&&&&&&&&&&#&&&&&&&&&&&&&&&&&#BPY7^^^^^^:::::::::::::::::::\n");
            printf("::::::::::::::::^!YGBB#####&&&&&&&&&#########&&&#######&&&&&&&&&&#&&&&##BP?~^^^^^^^:::::::::::::::::\n");
            printf("::::::::::::::::!JPGBBB####&&&&&&&#BGGPPPPPGGGGGGGGGBB##########&&######BB57^^^^^^^^^^^^::::::::::::\n");
            printf(":::::::::::::::^~JPGBBB###&&&&&#BG5YJJJJJJJYJJYYY555PGGGBBBBB##&&&########G?^^^^^^^^^^^^^:::::::::::\n");
            printf("::::::::::::::^:~JGBBB######&#GPYJ???????????????JJY55555PPPPBB#&#####B###BY~^^^^^^^^^^^^^^^:^::::::\n");
            printf(":::::::::::::^^:^YGBBB####&&BPYJ??777777??7777??????JJJJJYYY5PPB##&########P~^^^^^^^^^^^^^^^^^::::::\n");
            printf("::::::::::::^^^^^YBB#####&##PYJ????77777??7777?????????JJJJYYYYPB#&#&######Y^^^^^^^^^^^^^^^^^^^^::::\n");
            printf(":::::::::::^^^^^^JB########GY??????77777777777??????????JJJJJJYYP###&&&&#&B7^^^^^^^^^^^^^^^^^^^^^^::\n");
            printf(":::::::^:^^^^^^^^!P#######G5J???7?7777777777777?7??????????JJJJYYPB#&#&&&&P~^^^^^^^^^^^^^^^^^^^^^^^:\n");
            printf("::::::::^^^^^^^^^^JB#####B5J??7777777777777777777777777???????JJJYY5G#####?^^^^^^^^^^^^^^^^^^^^^^^^:\n");
            printf("::::::::^^^^^^^^^^~G#BBBPY?7777????????????77777????JJYY555555YJJJJ?J5B##P~^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("::::::^^^^^^^^^^^^^7BBGY?77?JY55PGGBBGGP5YYJ?77??JYY5PGBBBGGPP555YJ??JG#B7^~^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("::::^^^^^^^^^^^^^^^^YBP?777?JYYYJJYY5555YYYJ?????JYY555555YYYJJJJJ????P#5~~~^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("::^^^^^^^^^^^^^^^^^^~GG?!777???J55GGBBGPPYYJ??7??JY55GGB###BBGP5YJ???7PG!^~^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("::^^^^^^^^^^^^^^^^^^^?G?!!77?J5PPPPPGGPGG5YY?77??J5YPGPPPPP55P55YJ???75Y77??!^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf(":^^^^^^^^^^^^^^^^^!!!!5?!!777????JJJYY55YYJJ?77??JYYYY5YYYJJJJ???????7JYJJJYJ~^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^!J??7??!777!!!!77???JJJ??777777????JJJJJ???7777777????JJ?JY?~^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^7J?77?777!77!!!!!7777777777!!!77???????777777777777??JYJ?JJ7^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^!J?7?J?!7!77!!!!!!!!777777!!!!!77??J??77777777777????J55J?!~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^!??YY?77!7!!!!!!!!!77?7!777777???77?J?777777?J?7????JYY?!^~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^~7?JJ?777!!7!!!77777???5G5JJJYPGPJJJ?77777??????????7J7~~~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^!77!77777!!!7!!77777?JJJJJJJJYYYYJ?777777777?????J?7!~~~~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^~!!77777!!!77777777777???JJJJJJ????77??7????????7!!~~~~~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^~!!!77777777777777???JJJJJJJJJJJ??????????????7~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^!77777777???JYYY555555555PP555YJ??????????!~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^~!7777777??JY55YYYYYYYYYYY5555YJJ???J????7~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^~!77777???????????JJJJJJJJJJJJJJJJJJJJ?7~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~!777?????77?????JJJJJJJJ????JJJJJJJJ?~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~7?????777777777????????????JJJJJJJJ7~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~!???JJ??77777????????????JJJJYYYJJJ7~~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~!????JJJJJ????JJJJJJJJJJYYYYYYYJJJJ7!!!~~~~~~~~~~~~~~~~^^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~7?????JJJJJJYYYYYYYYYYYYYYYYJJJJJJ7!!!!!~~~~~~~~~~~~~~~~^^^^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^^~~~~~~~~~~~7???????????JJJJJJJJYJJYJJJJJJJJJJ7~~~~~~~~!!~~~~~~~~~~~~~~~~^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^^^^^~~~~~~~~~?YPBY7??????????????JJJJJJJJJJJJJ????J5P5J7!~!!~~~~~~~~~~~~~~~~^^^^^^^^^^^\n");
            printf("^^^^^^^^^^^^^~~~~~~~~~~!P#&@&Y77777777???????JJJJJJJJJJ???????J5&@&#GY!!!!~~~~~~~~~~~~~~~~^^^^^^^^^^\n");
            printf("^^^^^^^^^^~~~~~~~~~~~~~Y###&PJ?77777777?????????????J?????????JY5B&&##5!!!!!!~~~~~~~~~~~~~~~~^^^^^^^\n");
            printf("^^^^^^^^~~~~~~~~~~~~!J5GB###G5J??7777777?????????????????????JJYYPB###B57!!!!!!~~~~~~~~~~~~~~~~^^^^^\n");
            printf("^^^^^~~~~~~~~~~~~!?J5PBGBB####GYJ?????7???????????J???????????JY55G#####BGGY?7!!!!!~~~~~~~~~~~~~^^^^\n");
        }

        // RIDE SIDE DESIGN
        movingObjects(frame);

        // BOTTOM GREETINGS
        bottomMessages(frame);

        Sleep(500);

        frame++;
    }

    return 0;
}
