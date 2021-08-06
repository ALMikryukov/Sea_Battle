#include"SeaBattle.h"
#include<iomanip>
#include<iostream>
#include<string>
#include<ctime>
#include <windows.h>
using namespace std;
int board[10][10]{};

char dig[11]{ 'a','b','c','d','e','f','g','h','i','j' };
struct Coord
{
    int x, y;
};
void Ask_Coords() {
  
    Coord coords;
    CheckShips();
    char temp;
    cout << " Please make a turn, for example a 5" << endl;
    cin >> temp;
    if (temp == 'a') {
        coords.x = 0;
    }
    if (temp == 'b') {
        coords.x = 1;
    }
    if (temp == 'c') {
        coords.x = 2;
    }
    if (temp == 'd') {
        coords.x = 3;
    }
    if (temp == 'e') {
        coords.x = 4;
    }
    if (temp == 'f') {
        coords.x = 5;
    }

    if (temp == 'g') {
        coords.x = 6;
    }
    if (temp == 'h') {
        coords.x = 7;
    }
    if (temp == 'i') {
        coords.x = 8;
    }
    if (temp == 'j') {
        coords.x = 9;
    }

    cin >> coords.y;
    if (board[coords.y][coords.x] == 1) {
        cout << " YUO allredy shooted in here"<< endl;
    }
    if (board[coords.y][coords.x] == 0) {
        board[coords.y][coords.x] = 1;
    }
    if (board[coords.y][coords.x] == 2) {
        board[coords.y][coords.x] = 3;
    }
}
void set_ships() {
    srand(time(0));
    for (int i = 0; i < 20; i++) {
        board[rand() % 9][rand() % 9] = 2;
    }
}
void print() {
    for (int k = 0; k < 10; k++) {
        cout << " | " << dig[k];
    }
    cout << endl << "------------------------------------------";
    cout << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i;
        for (int j = 0; j < 10; j++) {
            cout << " | ";
            if ((board[i][j] == 0) || (board[i][j] == 2)) {
                cout << " ";
            }

            if (board[i][j] == 1) {
                cout << "*";
            }
            if (board[i][j] == 3) {
                cout << "#";
            }
        }
        cout << endl << "------------------------------------------" << endl;
    }
}
int CheckShips() {
    int c=0;
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (board[i][j] == 2) {
                c++;
            }
        }
    }
    if (c == 0) {
        cout << " you WIN";
        bool IsWin = true;
    }
    cout << endl<<endl<<c << " Sheeps left!!! Keep Goin Bro!" << endl << endl;
        return c;
}
void run() {

    while (true)
    {
        print();
        Ask_Coords();
        print();
        system("cls");
    }

}






    



