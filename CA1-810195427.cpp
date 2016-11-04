#include "graphics.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int genarate_random_number(void) {
	int i = 0;
	int random_number = 0;
	int exp = 1;
	srand((unsigned int)time(NULL));
	for ( i = 0; i < 4; i++)
	{
		random_number += exp*(rand() % 6 + 1);
		exp *= 10;
	}
	return random_number;
}
int correct_position(int* random_number, int *input) {
	int i = 0;
	int position = 0;
	int random_numberdig1;
	int random_numberdig2;
	int random_numberdig3;
	int random_numberdig4;
	int inputdig1;
	int inputdig2;
	int inputdig3;
	int inputdig4;
	random_numberdig1 = *random_number % 10;
	*random_number /= 10;
	random_numberdig2 = *random_number % 10;
	*random_number /= 10;
	random_numberdig3 = *random_number % 10;
	*random_number /= 10;
	random_numberdig4 = *random_number % 10;
	*random_number /= 10;
	inputdig1 = *input % 10;
	*input /= 10;
	inputdig2 = *input % 10;
	*input /= 10;
	inputdig3 = *input % 10;
	*input /= 10;
	inputdig4 = *input % 10;
	*input /= 10;

	if (random_numberdig1 == inputdig1) {
		position++;
		random_numberdig1 = 0;
		inputdig1 = 0;
	}
	if (random_numberdig2 == inputdig2) {
		position++;
		random_numberdig2 = 0;
		inputdig2 = 0;
	}
	if (random_numberdig3 == inputdig3) {
		position++;
		random_numberdig3 = 0;
		inputdig3 = 0;
	}
	if (random_numberdig4 == inputdig4) {
		position++;
		random_numberdig4 = 0;
		inputdig4 = 0;
	}
	*random_number = random_numberdig1 + random_numberdig2 * 10 + random_numberdig3 * 100 + random_numberdig4 * 1000;
	*input = inputdig1 + inputdig2 * 10 + inputdig3 * 100 + inputdig4 * 1000;
	return position;
}
int correct_colors(int *random_number, int *input) {
	int color = 0;
	int random_numberdig1;
	int random_numberdig2;
	int random_numberdig3;
	int random_numberdig4;
	int inputdig1;
	int inputdig2;
	int inputdig3;
	int inputdig4;
	random_numberdig1 = *random_number % 10;
	*random_number /= 10;
	random_numberdig2 = *random_number % 10;
	*random_number /= 10;
	random_numberdig3 = *random_number % 10;
	*random_number /= 10;
	random_numberdig4 = *random_number % 10;
	*random_number /= 10;
	inputdig1 = *input % 10;
	*input /= 10;
	inputdig2 = *input % 10;
	*input /= 10;
	inputdig3 = *input % 10;
	*input /= 10;
	inputdig4 = *input % 10;
	*input /= 10;
	if (inputdig1 == random_numberdig1&&inputdig1 != 0) {
		color++;
		inputdig1 = 0;
		random_numberdig1 = 0;
	}
	if (inputdig1 == random_numberdig2&&inputdig1 != 0) {
		color++;
		inputdig1 = 0;
		random_numberdig2 = 0;
	}
	if (inputdig1 == random_numberdig3&&inputdig1 != 0) {
		color++;
		inputdig1 = 0;
		random_numberdig3 = 0;
	}
	if (inputdig1 == random_numberdig4&&inputdig1 != 0) {
		color++;
		inputdig1 = 0;
		random_numberdig4 = 0;
	}
	if (inputdig2 == random_numberdig1&&inputdig2 != 0) {
		color++;
		inputdig2 = 0;
		random_numberdig1 = 0;
	}
	if (inputdig2 == random_numberdig2&&inputdig2 != 0) {
		color++;
		inputdig2 = 0;
		random_numberdig2 = 0;
	}
	if (inputdig2 == random_numberdig3&&inputdig2 != 0) {
		color++;
		inputdig2 = 0;
		random_numberdig3 = 0;
	}
	if (inputdig2 == random_numberdig4&&inputdig2 != 0) {
		color++;
		inputdig2 = 0;
		random_numberdig4 = 0;
	}
	if (inputdig3 == random_numberdig1&&inputdig3 != 0) {
		color++;
		inputdig3 = 0;
		random_numberdig1 = 0;
	}
	if (inputdig3 == random_numberdig2&&inputdig3 != 0) {
		color++;
		inputdig3 = 0;
		random_numberdig2 = 0;
	}
	if (inputdig3 == random_numberdig3&&inputdig3 != 0) {
		color++;
		inputdig3 = 0;
		random_numberdig3 = 0;
	}
	if (inputdig3 == random_numberdig4&&inputdig3 != 0) {
		color++;
		inputdig3 = 0;
		random_numberdig4 = 0;
	}
	if (inputdig4 == random_numberdig1&&inputdig4 != 0) {
		color++;
		inputdig4 = 0;
		random_numberdig1 = 0;
	}
	if (inputdig4 == random_numberdig2&&inputdig4 != 0) {
		color++;
		inputdig4 = 0;
		random_numberdig2 = 0;
	}
	if (inputdig4 == random_numberdig3&&inputdig4 != 0) {
		color++;
		inputdig4 = 0;
		random_numberdig3 = 0;
	}
	if (inputdig4 == random_numberdig4&&inputdig4 != 0) {
		color++;
		inputdig4 = 0;
		random_numberdig4 = 0;
	}
	return color;
}
void draw_result_circles(char kind, int x, int y);
void show_result(int position,int color,int x,int y) {
	int i = 0;
	int s = 25;
	for ( i = 0; i < position; i++)
	{
		draw_result_circles('p', x, y);
		x += s;
	}
	for ( i = 0; i < color; i++)
	{
		draw_result_circles('c', x, y);
		x += s;
	}
}
void draw_result_circles(char kind, int x, int y) {
	if (kind == 'p') {
		setcolor(8);
		circle(x, y, 10);
		setfillstyle(SOLID_FILL, BLACK);
		floodfill(x, y, 8);
	}
	if (kind == 'c') {
		setcolor(8);
		circle(x, y, 10);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(x, y, 8);
	}
}
void draw_input_circles(int input,int x,int y) {
	if (input == 1) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(x, y, 8);
	}
	if (input == 2) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, BLACK);
		floodfill(x, y, 8);
	}
	if (input == 3) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, BLUE);
		floodfill(x, y, 8);
	}
	if (input == 4) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, RED);
		floodfill(x, y, 8);
	}
	if (input == 5) {
		setcolor(8);
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, YELLOW);
		floodfill(x, y, 8);
	}
	if (input == 6) {
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
	draw_input_circles(dig4,x,y);
	draw_input_circles(dig3,x+50,y);
	draw_input_circles(dig2,x+100,y);
	draw_input_circles(dig1,x+150,y);
}
int main() {
	int wid = ALL_WINDOWS;
	int i = 0;
	int j = 45;
	int random_number = 0;
	initwindow(500, 600, "MASTER MIND");
	setbkcolor(CYAN);
	clearviewport();
	random_number=genarate_random_number();
	for ( j = 45; j <545; j+=50)
	{
		int y = random_number;
		scanf("%d", &i);
		printf("%d\n", y);
		show_input(i, 45, j);
		int position = correct_position(&y, &i);
		int color = correct_colors(&y, &i);
		show_result(position, color, 345, j-20);
	

	}
	while (!kbhit())
	{
		
	}
	closegraph(wid);
	return 0;
}