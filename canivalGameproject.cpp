#include <iostream>
#include <windows.h>
using namespace std;
// Prototype start.
void header();
void loading();
void printMaze();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printplayer();
void start();
void printEnemy1();
void printEnemy2();
void printEnemy3();
void moveEnemy1();
void moveEnemy3();
void moveplayerLeft();
void moveplayerRight();
void moveplayerUp();
void moveplayerDown();
// Prototype end.
// String start.
// Player character.
char box = 219;
// char player1A[3] = {' ', '^', ' '};
// char player2A[3] = {' ', '|', ' '};
// char player3A[3] = {box, box, box};
// Enemy character.
// Enemy 1;
char square = 220;
char en1A[3] = {square, square, square};
char En2A[3] = {'-', '-', '-'};
char EN3A[3] = {' ', '!', ' '};
// Enemy 2;
char rectangle = 209;
char ene1A[3] = {'(', rectangle, ')'};
char Ene2A[3] = {'-', ' ', '-'};
char ENe3A[3] = {' ', '*', ' '};
// Enemy 3;
char errow = 17;
char Enemy2A[3] = {errow, '=', ')'};
// String end.
// variables start.
int option;
int playerX = 5;
int playerY = 22;
int enemy1X = 2;
int enemy1Y = 1;
int enemy2X = 40;
int enemy2Y = 6;
int enemy3X = 105;
int enemy3Y = 1;
int count = 0;
int idx = 2;
string enemy3Direction = "Down";
string enemy1Direction = "Left";
// variables end.
main()
{
    system("cls");
    header();
    start();
    loading();
    Sleep(2000);
    system("cls");
    printMaze();
    printplayer();
    printEnemy1();
    printEnemy2();
    printEnemy3();
    while (true)
    {
        moveEnemy1();
        moveEnemy3();
        Sleep(50);
        if(GetAsyncKeyState(VK_LEFT) && playerX>2)
        {
            
            moveplayerLeft();
        }
        if(GetAsyncKeyState(VK_RIGHT) && playerX<106)
        {
            moveplayerRight();
        }
        if(GetAsyncKeyState(VK_UP) && playerY>1)
        {
            moveplayerUp();
        }
        if(GetAsyncKeyState(VK_DOWN) && playerY<22)
        {
            moveplayerDown();
        }
    }
}

void header()
{
    cout << "   ******      **     *******   ****     ** ** **      **     **     **         " << endl;
    cout << "  **////**    ****   /**////** /**/**   /**/**/**     /**    ****   /**         " << endl;
    cout << " **    //    **//**  /**   /** /**//**  /**/**/**     /**   **//**  /**         " << endl;
    cout << "/**         **  //** /*******  /** //** /**/**//**    **   **  //** /**         " << endl;
    cout << "/**        **********/**///**  /**  //**/**/** //**  **   **********/**         " << endl;
    cout << "//**    **/**//////**/**  //** /**   //****/**  //****   /**//////**/**         " << endl;
    cout << " //****** /**     /**/**   //**/**    //***/**   //**    /**     /**/********   " << endl;
    cout << "  //////  //      // //     // //      /// //     //     //      // ////////    " << endl;
}

void loading()
{
    cout << "                      LOADING........." << endl;
}

void printMaze()
{
    cout << "###############################################################################################################" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "##                                                                                                           ##" << endl;
    cout << "###############################################################################################################" << endl;
}

void start()
{
    cout << "Press 1 for Start: " << endl;
    cout << "Press 2 for Exit: " << endl;
    cin >> option;
}
void printplayer()
{
    // for (int a = 0; a < 3; a++)
    // {
    //     cout << player1A[a];
    // }
    // for (int a = 0; a < 3; a++)
    // {
    //     cout << player2A[a];
    // }
    // for (int a = 0; a < 3; a++)
    // {
    //     cout << player3A[a];
    // }
    gotoxy(playerX, playerY);
    cout <<" ^ ";
    gotoxy(playerX, playerY + 1);
    cout <<" | ";
    gotoxy(playerX, playerY + 2);
    cout <<box<<box<<box;
}
void printEnemy1()
{
    gotoxy(enemy1X, enemy1Y);
    for (int a = 0; a < 3; a++)
    {
        cout << en1A[a];
    }
    gotoxy(enemy1X, enemy1Y + 1);
    for (int a = 0; a < 3; a++)
    {
        cout << En2A[a];
    }
    gotoxy(enemy1X, enemy1Y + 2);
    for (int a = 0; a < 3; a++)
    {
        cout << EN3A[a];
    }
}
void printEnemy2()
{
    gotoxy(enemy2X, enemy2Y);
    for (int a = 0; a < 3; a++)
    {
        cout << ene1A[a];
    }
    gotoxy(enemy2X, enemy2Y + 1);
    for (int a = 0; a < 3; a++)
    {
        cout << Ene2A[a];
    }
    gotoxy(enemy2X, enemy2Y + 2);
    for (int a = 0; a < 3; a++)
    {
        cout << ENe3A[a];
    }
}
void printEnemy3()
{
    gotoxy(enemy3X, enemy3Y);
    for (int a = 0; a < 3; a++)
    {
        cout << Enemy2A[a];
    }
}
void moveEnemy3()
{
    if (count == 0)
    {
        enemy3Direction = "Down";
    }
    else if (count == 23)
    {
        enemy3Direction = "up";
    }
    if (enemy3Direction == "Down")
    {
        char next = getCharAtxy(enemy3X, enemy3Y + 1);
        if (next == ' ')
        {
            gotoxy(enemy3X, enemy3Y);
            cout << "   ";
            enemy3Y = enemy3Y + 1;
            gotoxy(enemy3X, enemy3Y);
            printEnemy3();
            count++;
        }
    }
    else if (enemy3Direction == "up")
    {
        char next = getCharAtxy(enemy3X, enemy3Y - 1);
        if (next == ' ')
        {
            gotoxy(enemy3X, enemy3Y);
            cout << "   ";
            enemy3Y = enemy3Y - 1;
            gotoxy(enemy3X, enemy3Y);
            printEnemy3();
        }
        count--;
    }
    Sleep(50);
}
void eraseplayer()
{
    gotoxy(playerX, playerY);
    for (int a = 0; a < 3; a++)
    {
        cout << " ";
    }
    gotoxy(playerX, playerY + 1);
    for (int a = 0; a < 3; a++)
    {
        cout << " ";
    }
    gotoxy(playerX, playerY + 2);
    for (int a = 0; a < 3; a++)
    {
        cout << " ";
    }
}
void moveplayerLeft()
{
    char next = getCharAtxy(playerX - 6, playerY);
    if (next == ' ')
    {
        gotoxy(playerX+2,playerY);
        cout<<" ";
        gotoxy(playerX+2,playerY+1);
        cout<<" ";
        gotoxy(playerX+2,playerY+2);
        cout<<" ";
        playerX = playerX - 1;
        printplayer();
    }
}

void moveplayerRight()
{
    char next = getCharAtxy(playerX + 3, playerY);
    if (next == ' ')
    {
        eraseplayer();
        playerX = playerX + 1;
        printplayer();
    }
}

void moveplayerUp()
{
    char next = getCharAtxy(playerX, playerY - 1);
    if (next == ' ')
    {
        eraseplayer();
        playerY = playerY - 1;
        printplayer();
    }
}

void moveplayerDown()
{
    char next = getCharAtxy(playerX, playerY + 3);
    if (next == ' ')
    {
        eraseplayer();
        playerY = playerY + 1;
        printplayer();
    }  
}
void moveEnemy1()
{
    if (idx == 2)
    {
        enemy1Direction = "Right";
    }
    else if (idx == 106)
    {
        enemy1Direction = "Left";
    }
    if (enemy1Direction == "Right")
    {
        idx++;
        //char next = getCharAtxy(enemy3X+2, enemy3Y);

        // if (next == ' ')
        // {
        //     gotoxy(enemy3X, enemy3Y);
        //     cout << "   ";
        //     enemy3Y = enemy3Y + 1;
        //     gotoxy(enemy3X, enemy3Y);
        //     printEnemy3();
        //     count++;
        // }
        gotoxy(enemy1X,enemy1Y);
        cout <<" ";
        gotoxy(enemy1X,enemy1Y+1);
        cout <<" ";
        gotoxy(enemy1X,enemy1Y+2);
        cout <<" ";
        enemy1X = enemy1X + 1;
        printEnemy1();
    }
    else if (enemy1Direction == "Left")
    {
        idx--;
        // char next = getCharAtxy(enemy3X, enemy3Y - 1);
        // if (next == ' ')
        // {
        //     gotoxy(enemy3X, enemy3Y);
        //     cout << "   ";
        //     enemy1Y = enemy1Y - 1;
        //     gotoxy(enemy3X, enemy3Y);
        //     printEnemy3();
        // }
        // count--;
        gotoxy(enemy1X+2,enemy1Y);
        cout <<" ";
        gotoxy(enemy1X+2,enemy1Y+1);
        cout <<" ";
        gotoxy(enemy1X+2,enemy1Y+2);
        cout <<" ";
        enemy1X = enemy1X - 1;
        printEnemy1();
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_INPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
