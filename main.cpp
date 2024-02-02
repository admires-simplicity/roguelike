//#include <unistd.h>
#include <ncurses.h>

int main() {
    initscr();
    
    int height, width;
    getmaxyx(stdscr, height, width);
    
    int starty = (height - 10) / 2;
    int startx = (width - 30) / 2;
    WINDOW *win = newwin(10, 30, starty, startx);

    box(win, 0, 0);
    mvwprintw(win, 0, 0, "Hello, world!");

    refresh();
    //wrefresh(win);

    wgetch(win);

    endwin();
    return 0;
}