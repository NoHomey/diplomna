#include <curses.h>
#include <iostream>
using namespace std;
int main() {
    initscr();
    noecho();
    //keypad(stdscr, TRUE);
    cbreak();
    char c = 0;
    bool flag = 1;
    cout << "begin" << endl;
    while(flag) {
        c = getch();
        if(c != -1)
        cout << c << c << c << endl;
        if(c == 's') flag = 0;
    }
    endwin();
    cout << "end" << endl;
    return 0;
}
