#include <iostream>
#include <ncurses.h>
#include <cstring>
#include <cstdlib>

using std::cout;
using namespace std;
using std::endl;
using std::string;
using std::exit;

void print_in_middle(WINDOW *win, int starty, int startx, int width, char* string);

int main(int argc, char*argv[]){
	initscr();
	char string[25];
	print_in_middle(stdscr, LINES / 2, 0, 0, strcpy(string,"Bienvenido a tu agenda de amigos"));
	print_in_middle(stdscr, LINES / 2+2, 0, 0, strcpy(string,"Laboratorio de Progra 3"));
	if(getch()){
		clear();
		if(has_colors() == FALSE){	
			endwin();
			printf("Your terminal does not support color\n");
			exit(1);
		}
		start_color();	
		char string[25];		

		init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
		attron(COLOR_PAIR(1));
		print_in_middle(stdscr, LINES / 2, 0, 0, strcpy(string,"------MENU--------"));
		attroff(COLOR_PAIR(1));

		init_pair(2, COLOR_BLUE, COLOR_BLACK);
		attron(COLOR_PAIR(2));
		print_in_middle(stdscr, LINES / 2+1, 0, 0, strcpy(string,"1. Agregar contacto"));
		attroff(COLOR_PAIR(2));

		init_pair(3, COLOR_YELLOW, COLOR_BLACK);
		attron(COLOR_PAIR(3));
		print_in_middle(stdscr, LINES / 2+2, 0, 0, strcpy(string,"2. Agregar numero"));
		attroff(COLOR_PAIR(3));

		init_pair(4, COLOR_RED, COLOR_BLACK);
		attron(COLOR_PAIR(4));
		print_in_middle(stdscr, LINES / 2+3, 0, 0, strcpy(string,"3. Salir"));
		attroff(COLOR_PAIR(4));

	    getch();
		endwin();
	}			
	return 0;
}
void print_in_middle(WINDOW *win, int starty, int startx, int width, char* string){	
	int length, x, y;
	float temp;

	if(win == NULL)
		win = stdscr;
	getyx(win, y, x);
	if(startx != 0)
		x = startx;
	if(starty != 0)
		y = starty;
	if(width == 0)
		width = 80;

	length = strlen(string);
	temp = (width - length)/ 2;
	x = startx + (int)temp;
	mvprintw(y, x, string);
	refresh();
}