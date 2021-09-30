#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


int dx[] = { 0, 0, 1, -1 }; // { 0, 0, 오른쪽, 왼쪽 }
int dy[] = { 1, -1, 0, 0 }; // { 위쪽, 아래쪽, 0, 0 }
bool Visit[15][15][4];      // 10*10 좌표평면, 방향

int Reverse(int Dir)
{
    if (Dir == 0) return 1;      // RIGHT -> LEFT
    else if (Dir == 1) return 0; // LEFT -> RIGHT
    else if (Dir == 2) return 3; // DOWN -> UP
    else if (Dir == 3) return 2; // UP -> DOWN
}

int solution(const char* dirs)
{
    int answer = 0;
    int x = 5;
    int y = 5;

    for (int i = 0; i < strlen(dirs); i++)
    {
        char C = dirs[i];
        int nx;
        int ny;
        int Dir;

        if (C == 'U')
        {
            Dir = 3;
            nx = x + dx[3];
            ny = y + dy[3];
        }
        else if (C == 'D')
        {
            Dir = 2;
            nx = x + dx[2];
            ny = y + dy[2];
        }
        else if (C == 'R')
        {
            Dir = 0;
            nx = x + dx[0];
            ny = y + dy[0];
        }
        else
        {
            Dir = 1;
            nx = x + dx[1];
            ny = y + dy[1];
        }

        if (nx < 0 || ny < 0 || nx > 10 || ny > 10) 
            continue;

        // 가본 적 없는 길 + 반대 방향으로도 가본 적 없는 길
        if (Visit[x][y][Dir] == false && Visit[nx][ny][Reverse(Dir)] == false)
        {
            answer++;
            Visit[x][y][Dir] = true;
        }

        x = nx;
        y = ny;
        // 현재 좌표 옮김
    }

    return answer;
}


int main(void)
{
    printf(" %d", solution("ULURRDLLU"));


    return 0;
}