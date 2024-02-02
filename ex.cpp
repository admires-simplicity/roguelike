#include <ncurses.h>

int main() {
    initscr();
    
    int screen_height, screen_width;
    getmaxyx(stdscr, screen_height, screen_width);
    
    int win_height = 10;
    int win_width = 30;
    int win_y = (screen_height - win_height) / 2;
    int win_x = (screen_width - win_width) / 2;
    WINDOW *win = newwin(win_height, win_width, win_y, win_x);

    box(win, 0, 0);   
    mvwprintw(win, 1, 1, "Text in window...");



    refresh();
    wrefresh(win);



    getch();

    endwin();
    return 0;
}