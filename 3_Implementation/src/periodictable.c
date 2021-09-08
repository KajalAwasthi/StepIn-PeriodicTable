
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

#include "periodictable.h"

//edit score in text file
void edit_score(float score, char plnm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r")
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
    {
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
    }
}

//displays rules for help
void help()
{
    system("cls");
    printf("\n\n                  HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There will be 2 rounds in this Quiz Game, BEGINNER ROUND and MAIN ROUND");
    printf("\n >> In beginner round you will have to answer 3 out of 5 questions, correct,");
    printf("\n    to be eligible for main round. Then you will be taken further in the game.");
    printf("\n    If more than 2 answers are wrong, you won't be taken to the Main Round.");
    printf("\n >> Your millionaire dream game will start from the MAIN ROUND. In this round you will have to answer");
    printf("\n    a total of 20 questions. Each right answer will be awarded $50,000!");
	printf("\n    By this way you can win upto ONE MILLION cash prize!!!");
	printf("\n    ISN'T THAT AMAZING!");
	printf("\n    BUT....BUT");
	printf("\n    ONE WRONG ANSWER COUNTS YOUR LOSS!");
    printf("\n >> You will have to select you answer from one of the four choices and press A, B, C or D accordingly");
    printf("\n >> You will be questioned continuously until correct answers are given");
    printf("\n >> There is no negative marking for incorrect answers!");
    printf("\n\n\t!!!!! ALL THE BEST FOR YOUR GAME AHEAD !!!!!");
}

//resets highest score to 0
void reset_score()
{
    system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","w");
	fscanf(f,"%f",&sc);
	sc=0;
	fprintf(f,"%.2f",sc);
	printf("Score is reset");
    fclose(f);
}

//shows record of person with highest score
void show_record()
{
    system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t:) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :)");
	printf("\n\n\t\t %s has secured the highest score %0.2f",name,scr);
	printf("\n\n\t\t:) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :) :)");
	fclose(f);
	getch();
}
