#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    int v[4][3], x=0, y=0;

    for (x=0;x<4;x++){
        for (y=0;y<3;y++){
            v[x][y] = rand() % 50;
        }
    }

    for (x=0;x<4;x++) {
        for (y=0;y<3;y++) {
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){(x*5)+10,y+3});
            printf("%i",v[x][y]);
        }
    }

    for (y=0;y<4;y++) {
        for (x=0;x<3;x++) {
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){(x*5)+10,y+9});
            printf("%i",v[y][x]);
        }
    }

    return 0;
}