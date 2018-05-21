/*
Author: Adam Powell
COP 2220
Instructor: Professor Hunchuck
Assignment: Exam 4
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#define CLEAR system("cls")
#define WAIT Sleep(3000)
#define PAUSE system("pause");

//Struct for player
typedef struct {
	int lives;
	int strength;
	char name[40];
}PLAYER;

main() {
	PLAYER player1 = { 3, 1, " " };
	int randNum;
	FILE *grimR;
	FILE *largGrim;
	FILE *facingGrim;
	FILE *intro;
	FILE *intro2;
	FILE *intro3;
	FILE *babySpoof1;
	FILE *babySpoof;
	FILE *wizeEyes;
	FILE *howToPlay;
	FILE *waitScreen;
	FILE *grimAttack;
	time_t t;
	char attack[20] = { 0 };
	int c;
	srand(time(NULL));   // should only be called once
	
	//load and clear screen files
	grimR = fopen("grimR.txt", "r");
	if (grimR) {
		while ((c = getc(grimR)) != EOF)
			putchar(c);
	}
	fclose(grimR);
	WAIT;
	WAIT;
	CLEAR;

	largGrim = fopen("largGrim.txt", "r");
	if (largGrim) {
		while ((c = getc(largGrim)) != EOF)
			putchar(c);
	}
	fclose(largGrim);
	WAIT;
	WAIT;
	                                                         
	CLEAR;

	facingGrim = fopen("faceGrim.txt", "r");
	if (facingGrim) {
		while ((c = getc(facingGrim)) != EOF)
			putchar(c);
	}

	fclose(facingGrim);
	printf("\tHAAAAHHHHAAAAAHHHAHAHHAAHAHHA!!!!\n\n");
	WAIT;
	CLEAR;

	intro = fopen("backGround1.txt", "r");
	if (intro) {
		while ((c = getc(intro)) != EOF)
			putchar(c);
	}

	fclose(intro);
	WAIT;
	PAUSE;

	WAIT;
	CLEAR;
	
    intro2 = fopen("backGround2.txt", "r");
	if (intro2) {
		while ((c = getc(intro2)) != EOF)
			putchar(c);
	}

	fclose(intro2);
	printf("\n\t\t\t\tEnter preffered name of your character: ");
	scanf("%s", player1.name);

	printf("\n\n\t\t\t\t\tAhh, yes.. we shall call you %s\n\n\t\t\t\t\t", player1.name);
	
	

	PAUSE;
	CLEAR;
	intro3 = fopen("backGround3.txt", "r");
	if (intro3) {
		while ((c = getc(intro3)) != EOF)
			putchar(c);
	}

	fclose(intro3);
	PAUSE;
	WAIT;
	CLEAR;
	
	howToPlay = fopen("howToPlay.txt", "r");
	if (intro3) {
		while ((c = getc(intro3)) != EOF)
			putchar(c);
	}

	fclose(intro3);
	PAUSE;
	WAIT;
	CLEAR;

	waitScreen = fopen("waitingScreen.txt", "r");
	if (intro3) {
		while ((c = getc(intro3)) != EOF)
			putchar(c);
	}

	fclose(intro3);
	
	WAIT;

	CLEAR;

	babySpoof1 = fopen("backGroundBaby1.txt", "r");
	if (babySpoof1) {
		while ((c = getc(babySpoof1)) != EOF)
			putchar(c);
	}

	fclose(babySpoof1);

	WAIT;
	CLEAR;

	babySpoof = fopen("backGroundBaby.txt", "r");
	if (babySpoof) {
		while ((c = getc(babySpoof)) != EOF)
			putchar(c);
	}

	fclose(babySpoof);
	
	WAIT;
	PAUSE;
	CLEAR;

	wizeEyes = fopen("wizeEyes.txt", "r");
	if (wizeEyes) {
		while ((c = getc(wizeEyes)) != EOF)
			putchar(c);
	}

	fclose(wizeEyes);
	PAUSE;
	WAIT;
	CLEAR;

	while (player1.lives > 0) {//loop to play until lives are gone

	waitScreen = fopen("waitingScreen.txt", "r");
	if (intro3) {
		while ((c = getc(intro3)) != EOF)
			putchar(c);
	}

	fclose(intro3);

	WAIT;
	CLEAR;

	
		grimAttack = fopen("grimAttack.txt", "r");
		if (intro3) {
			while ((c = getc(intro3)) != EOF)
				putchar(c);
		}

		fclose(intro3);
		scanf("%s", attack);
		attack[0] = toupper(attack[0]);
		randNum = rand() % 2;
		if (randNum == 1 && attack[0] == 'A') {
			printf("\n\n\n\t\t\t\tYou won!");
		}
		else {
			printf("\n\t\t\t\tYou died!!");
			player1.lives--;
		}
		WAIT;

		CLEAR;
	}//end of while loop

	printf("\n\n\n\t\t\t\tYOU ARE DEAD... thanks for playing!\n\n\n");
	PAUSE;
}