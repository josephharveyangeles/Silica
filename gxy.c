#include<windows.h>

void gxy (int x, int y)
{
     COORD coord;
     coord.X = x;     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
