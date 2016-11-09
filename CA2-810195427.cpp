#define _CRT_SECURE_NO_WARNINGS
#include "graphics.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*in this part you can see my functions'  prototypes*/
void show_result(int position, int color, int x, int y);
int correct_colors(int random_number, int input);
int correct_position(int* random_number, int *input);
int genarate_random_number(void);
void draw_circles(char input, int x, int y);
bool correct_input(int input);
void win_interface(void);
void loss_interface(int random_number);
void Game_background(void);
int set_input(void);

/*genarate_random_number genarate a random number that has 4 digits and i use 1,2,3,4,5,6 for digits.*/
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

/*correct_position is a function that finds same positions in random number and input
this function has refrenceargumants. this part changes input and randomnumer*/
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

/*this function find correct colors. it has two args and return a int number. its return show correct colors.*/
int correct_colors(int random_number, int input) {
	int color = 0;
	int random_numberdig1;
	int random_numberdig2;
	int random_numberdig3;
	int random_numberdig4;
	int inputdig1;
	int inputdig2;
	int inputdig3;
	int inputdig4;
	
	random_numberdig1 = random_number % 10;
	random_number /= 10;
	random_numberdig2 = random_number % 10;
	random_number /= 10;
	random_numberdig3 = random_number % 10;
	random_number /= 10;
	random_numberdig4 = random_number % 10;
	random_number /= 10;
	inputdig1 = input % 10;
	input /= 10;
	inputdig2 = input % 10;
	input /= 10;
	inputdig3 = input % 10;
	input /= 10;
	inputdig4 = input % 10;
	input /= 10;
	
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

/*this function show result of the game. this part collabaret with drawcircles and draw some circle in black and white color.*/
void show_result(int position,int color,int x,int y) {
	int i = 0;
	int s = 25;
	for ( i = 0; i < position; i++)
	{
		draw_circles('p', x, y);
		x += s;
	}
	for ( i = 0; i < color; i++)
	{
		draw_circles('c', x, y);
		x += s;
	}
}

/*this function draw some circle in diffrent colors. it has 3 args. x,y show circle center and input show color of circle.*/
void draw_circles(char input,int x,int y) {
	setcolor(BLACK);
	if (input == '1') {
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, MAGENTA);
		floodfill(x, y, BLACK);
	}
	if (input == '2') {
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, LIGHTBLUE);
		floodfill(x, y, BLACK);
	}
	if (input == '3') {
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, BLUE);
		floodfill(x, y, BLACK);
	}
	if (input == '4') {
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, RED);
		floodfill(x, y, BLACK);
	}
	if (input == '5') {
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, YELLOW);
		floodfill(x, y, BLACK);
	}
	if (input == '6') {
		circle(x, y, 20);
		setfillstyle(SOLID_FILL, GREEN);
		floodfill(x, y, BLACK);
	}
	if (input == 'p') {
		circle(x, y, 10);
		setfillstyle(SOLID_FILL, BLACK);
		floodfill(x, y, BLACK);
	}
	if (input == 'c') {
		circle(x, y, 10);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(x, y, BLACK);
	}
}

/*this part show input via drawing circles in diffrent colors.*/
void show_input(int input,int FirstCircleInLine_x,int FirstCircleInLine_y) {
	int i ;
	int FinalCircleInLine_X = FirstCircleInLine_x + 150;
	int FinalCircleInLine_Y = FirstCircleInLine_y;
	for (i = 1;i <= 4;i++) {
		draw_circles(48 + (input % 10), FinalCircleInLine_X, FinalCircleInLine_Y);
		FinalCircleInLine_X -= 50;
		input /= 10;
	}
	
}

/*this function show user that the input is correct or not.*/
bool correct_input(int input) {
	bool correct = true;
	int digits = 0;
	if (input < 0) {
		correct = false;
		return correct;
	}
	while (input > 0) {
		digits++;
		if (input % 10 > 6 || input % 10 < 1) {
			correct = false;
			break;
		}
		input /= 10;
	}
	if (digits > 4||digits<4) {
		correct = false;
	}
	return correct;
}

/*this function provide window when the player won the game.*/
void win_interface(void) {
	cleardevice();
	setcolor(BLACK);
	outtextxy(200, 250, "You Won The Game");
	printf("You Won The Game!\n");
}

/*this function provide window when the player lose the game.*/
void loss_interface(int random_number) {
	printf("You  Loss!\n");
	cleardevice();
	show_input(random_number, 45, 45);
	setcolor(BLACK);
	outtextxy(200, 90, "You Loss");

}

/*this function provide window when thethe player start the game.*/
void Game_background(void) {
	initwindow(500, 600, "Master Mind");
	setlinestyle(SOLID_LINE, 1, 2);
	setbkcolor(DARKGRAY);
	clearviewport();
	line(300, 0, 300, 600);
}

/*this function get input from user and check it. if it is correct you can see game results.
if your number is not correct you need to try again and write another number.*/
int set_input(void) {
	int input = 0;
	scanf("%d", &input);
	while (!correct_input(input)) {
		printf("your input is not correct!\nGuess my number: ");
		scanf("%d", &input);

	}
	return input;
}

int main() {

	/*in this part i declar some variables. */
	int wid = ALL_WINDOWS;
	int input = 0;
	int j = 45;
	int i = 0;
	int position = 0;
	int color = 0;
	int random_number = 0;
	bool end = false;

	/*in this part i use Game_background to provide game interface. */
	Game_background();
	/*in this part i use genarate_random_number to genarate a random number for playing.*/
	random_number=genarate_random_number();

	printf("Welcome To Master Mind!\n\nI have chosen a number. It Has 4 Digits and it is in range of[1111,6666].\n");
	
	for ( i=0; i <10; i++)
	{
		int My_number = random_number;
		printf("Guess my number:");
		input = set_input();
		
		/*in this part i show user input and calculate correct colors and correct positions .i comminucate with user with print sth 
		for showing input i use show_input,for computing correct color i use correct_colors and for computing positios i use correct_position  */
		printf("%d\n", My_number);
		show_input(input, 45, j);
		position = correct_position(&My_number, &input);
		color = correct_colors(My_number, input);
		printf("You guessed %d positions correctly!\nYou guessed %d colors correctly!\n\n", position, color);
		show_result(position, color, 345, j);

		/*this part show win condition and i use win_interface() to design interface. */
		if (position==4) {	
			delay(200);
			win_interface();
			end = true;
			break;
		}
		j += 50;
		
	}
	
	/*this part show loss condition and i use "loss_interface" function to design interface. */
	if (!end) {
		loss_interface(random_number);
		
	}
	/*this part runs until you press close button.*/
	while (!kbhit())
	{
		
	}
	
	closegraph(wid);
	return 0;
}