#include <iostream>
#include <ctime>
#include <conio.h>
#include<Windows.h>
using namespace std;
//_______________________//
void shift_right(int arr[],int size){
    for(int i=size-2;i>=0;i--)
        arr[i+1]=arr[i];
}
enum diriction { Top , Down, Right, Left };
struct map { int width, height, fruitx, fruity; };
struct snake { int headx, heady, tail_n, tail_x[50],tail_y[50];diriction dir; };
struct player { int score; bool lose; };
//______________________//
map map1;
snake snake1;
player player1;
//______________________//
void fruit() {
    srand(time(NULL));
    map1.fruitx = rand() % (map1.width - 2) + 1;
    map1.fruity = rand() % (map1.height - 2) + 1;
}
void setting() {
    map1.width = 40;
    map1.height = 20;
    //____________________//
    fruit();
    //____________________//
    snake1.headx = map1.width / 2;
    snake1.heady = map1.height / 2;
    snake1.tail_n = 0;
    //___________________//

}
void draw() {
    system("cls");
    for (int i = 0; i < map1.height; i++)
    {
        for (int j = 0; j < map1.width; j++)
        {
            if (i == 0 || i == map1.height - 1)
                cout << "*";
            else if (j == 0 || j == map1.width - 1)
                cout << "*";
            else if (i == snake1.heady && j == snake1.headx)
                cout << "O";
            else if (i == map1.fruity && j == map1.fruitx)
                cout << "#";
            else{
                bool printed=false;
                for(int z=0 ;z<snake1.tail_n;z++){
                    if (snake1.tail_x[z]==j&&snake1.tail_y[z]==i){
                        cout<<"o";
                        printed=true;
                        break;
                    }
                }
                if(!printed)
                    cout<<" ";
            }
        }
        cout << endl;
    }
    cout << "player score = " << player1.score << endl;
}
void input() {
    if (_kbhit())
    {
        char c = _getch();
        switch (c)
        {
        case 'w': snake1.dir = Top; break;
        case 's': snake1.dir = Down; break;
        case 'd': snake1.dir = Right; break;
        case 'a': snake1.dir = Left; break;
        case 'x': exit(0);
        }
    }
}
void move() {
    shift_right(snake1.tail_x,50);
    shift_right(snake1.tail_y,50);
    snake1.tail_x[0]=snake1.headx;
    snake1.tail_y[0]=snake1.heady;
    switch (snake1.dir)
    {
    case Top: snake1.heady--; break;
    case Down: snake1.heady++; break;
    case Right: snake1.headx++; break;
    case Left: snake1.headx--; break;
    }
    if (snake1.heady >= map1.height || snake1.heady <= 0 || snake1.headx >= map1.width || snake1.headx <= 0)
        player1.lose = true;

    if (snake1.headx == map1.fruitx && snake1.heady == map1.fruity) {
        fruit();
        player1.score += 1;
        snake1.tail_n++;
    }
}
int main()
{
    setting();
    while (!player1.lose) {
        draw();
        input();
        move();
        Sleep(50);
    }
    return 0;
}
