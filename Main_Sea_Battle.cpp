
#include <iostream>
#include<iomanip>
#include"SeaBattle.h"
#include <string>
#include <windows.h>
using namespace std;
int Ships_Left = 0;
char d ;
bool IsWin = false;

string s[] = {
     "   # #      # # # #   # # # # #  # # # #      # # # #   # # # #   #  ",
     "   # #      #             #      #            #         #     #   #  ",
     "   # #      # # # #       #      # # # #      #   # #   #     #   #  ",
     "   # #  #   #             #            #      #     #   #     #      ",
     "   # #  #   # # # #       #      # # # #      # # # #   # # # #   #  ",
};
int main() {
    for (int i = 0; i < size(s); i++) {
        cout << s[i] << endl;
        Sleep(100);
    }
    cout << endl << endl;
    Sleep(1500);
    system("cls");
    set_ships();
    if (!IsWin) {
        run();
    }
    else {
        cout << endl << " play again?   y/n" << endl;
    }
    cin >> d;
    if (d == 'y') {
        IsWin = false;
    }
}
   