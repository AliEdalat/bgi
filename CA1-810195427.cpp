#include "graphics.h"
void draw_circle(int i,int x,int y) {
	if (i == 1) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(x, y, 8);
	}
	if (i == 2) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, BLACK);
		floodfill(x, y, 8);
	}
	if (i == 3) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, BLUE);
		floodfill(x, y, 8);
	}
	if (i == 4) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, RED);
		floodfill(x, y, 8);
	}
	if (i == 5) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, YELLOW);
		floodfill(x, y, 8);
	}
	if (i == 6) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, GREEN);
		floodfill(x, y, 8);
	}
}
void show_input(int input,int x,int y) {
	int dig1=0;
	int dig2=0;
	int dig3=0;
	int dig4=0;
	int i = 0;
	dig1 = input % 10;
	input /= 10;
	dig2 = input % 10;
	input /= 10;
	dig3 = input % 10;
	input /= 10;
	dig4 = input % 10;
	input /= 10;
	draw_circle(dig4,x,y);
	draw_circle(dig3,x+50,y);
	draw_circle(dig2,x+100,y);
	draw_circle(dig1,x+150,y);
}
int main() {
	int wid = ALL_WINDOWS;
	int i = 0;
	int j = 45;
	initwindow(500, 600, "MASTER MIND");
	for ( j = 45; j <545; j+=50)
	{
		scanf("%d", &i);
		show_input(i, 45, j);
	}
	while (!kbhit())
	{
		
	}
	closegraph(wid);
	return 0;
}