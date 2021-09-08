#include "periodictable.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

int main()
{
     int countr, r, r1, count, i, n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      TO ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   TRY YOUR LUCK, BECOME A MILLIONAIRE!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset your score");
     printf("\n\t\t > press H for help");
     printf("\n\t\t > press Q to quit the game");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice =='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice == 'H')
	{
	help();
	getch();
	goto mainhome;
	}
	else if (choice == 'R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice == 'Q')
	exit(1);
    else if(choice == 'S')
    {
     system("cls");

    printf("\n\n\n\n\n\t\t\tEnter player's name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n     Let me introduce you to the Game:");
    printf("\n------------------------------------------------");
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
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n\n\n If you want to return to the main menu, press any key!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=5;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nThe elements in the present periodic table are arranged according to their?");
		printf("\n\nA. Atomic masses\t\tB. Atomic weight\n\nC. Mass number\t\tD. Atomic number");
		if (toupper(getch())=='D')
			{
			    printf("\n\nHurraahh :D\nMoving to the next question!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWooppsss!!! The correct answer is D. Atomic number");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe majority of the elements in the periodic table are?");
		printf("\n\nA. Noble Gases\t\tB. Non metals\n\nC. Metalloids\t\tD. Metals");
		if (toupper(getch())=='D')
			{printf("\n\nHurraahh:D\nMoving to the next question!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWooppsss!!! The correct answer is D. Metals");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhat do elements in the same group have in common?");
		printf("\n\nA. Similar symbols\t\tB. Same number of neutrons\n\nC. Same number of valence electrons\t\tD. Same number of electrons");
		if (toupper(getch())=='C')
			{printf("\n\nHurraahh:D\nMoving to the next question!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWooppsss!!! The correct answer is C. Same number of valence electrons");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWhich element is classified as metalloid?");
		printf("\n\nA. Calcium\t\tB. Chlorine\n\nC. Silicon\t\tD. Zinc");
		if (toupper(getch())=='C')
			{printf("\n\nHurraahh:D\nMoving to the next question!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWooppsss!!! The correct answer is C. Silicon");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nHow many valence electrons does calcium have?");
        printf("\n\nA. Two\t\tB. Eight\n\nC. One\t\tD. Twenty");
        if (toupper(getch())=='A')
               {printf("\n\nHurraahh:D\nMoving to the next question!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWooppsss!!! The correct answer is A. Two ");
		       getch();
		       break;}
			   }
		       }

	if(count>=3)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nYOU DIDN'T MAKE IT TO THE MAIN ROUND, MAYBE NEXT TIME :(");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** WELL DONE %s, you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!To start the game press any key!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=20;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nDmitri Mendeleev organized the chemical elements by?");
		printf("\n\nA. Number of electrons\t\tB. Increasing atomic weight\n\nC. Increasing atomic number\t\tD. Alphabetical order");
		if (toupper(getch())=='B')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			 break;
			 getch();}
		else
		       {printf("\n\nOh no!! The correct option is B");
			   getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nWhat is a vertical column in the periodic table called?");
		printf("\n\nA. Valence\t\tB. Branch\n\nC. Group\t\tD. Period");
		if (toupper(getch())=='C')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nOh no!! The correct option is C");
			   getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nA horizontal row in the periodic table is called? ");
		printf("\n\nA. Shells\t\tB. Branch\n\nC. Group\t\tD. Period");
		if (toupper(getch())=='D')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nOh no!! The correct option is D");
			   getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nWhat is the capacity of the first electron shell?");
		printf("\n\nA. Sixteen\t\tB. Eight\n\nC. Three\t\tD. Two");
		if (toupper(getch())=='D')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			 break;}
		else
		       {
                printf("\n\nOh no!! The correct option is D");
				getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWhich of the following is the electron configuration for carbon?");
		printf("\n\nA. C )2e- )8e- )2e-\t\tB. C )2e- )6e-\n\nC. C )2e- )4e-\t\tD. Ca )2e- )8e- )2e-");
		if (toupper(getch())=='C')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {
		        printf("\n\nOh no!! The correct option is C");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA. Zinc\t\tB. Cobalt\n\nC. Calcium\t\tD. Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is B");
			   goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat do elements in the same period have in common?");
		printf("\n\nA. The same number of neutrons\t\tB. Gradually changing properties\n\nC. Similar symbols\t\tD. Identical chemical properties");
		if (toupper(getch())=='B')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nOh no!! The correct option is B");
			   getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWhich one of the following elements is very rare?");
		printf("\n\nA. Thorium\t\tB. Uranium\n\nC. Francium\t\tD. Nihonium");
		if (toupper(getch())=='C')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is C");
			   getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nIn Periodic Table, elements are arranged in left to right fashion in each row, based on?");
		printf("\n\nA. Number of protons in their nucleus\t\tB. Number of electrons in their nucleus\n\nC. Number of neutrons in their nucleus\t\tD. All of the above");
		if (toupper(getch())=='A')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is A");
			   getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nThe noble or inert gases are lined up in the what column of the periodic table?");
		printf("\n\nA. 16th\t\tB. 17th\n\nC. 18th\t\tD.19th");
		if (toupper(getch())=='C')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is C");
			   getch();
			   goto score;
			   break;
			   }

        case 11:
		printf("\n\n\nWho formulated the Periodic Table?");
		printf("\n\nA. Henry Moseley\t\tB. Antoine Lavoisier\n\nC. John Newlands\t\tD. Dmitri Mendeleev");
		if (toupper(getch())=='D')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
              {printf("\n\nOh no!! The correct option is D");
			  getch();
			  goto score;
              break;
			  }

        case 12:
		printf("\n\n\nWhat was the first man-made or artificially produced element?");
		printf("\n\nA. Roentgenium\t\tB. Nihonium\n\nC. Technetium\t\tD. Tantalum");
		if (toupper(getch())=='C')
			  {printf("\n\nSmarty pants!!");
			  countr++;
			  getch();
			   break;}
		else
              {printf("\n\nOh no!! The correct option is C");
			  getch();
              goto score;
              break;}

		case 13:
		printf("\n\n\nWhich among the following is responsible for maintaining the periodic table?");
		printf("\n\nA. IUPAC\t\tB. IUCN\n\nC. IUPAP\t\tD. PubChem");
		if (toupper(getch())=='A')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is A");
			   getch();
		       goto score;
               break;}

        case 14:
		printf("\n\n\nWho proposed Law of Triads?");
		printf("\n\nA. Dobereiner\t\tB. Lal Gopal Subedi\n\nC. Koirala\t\tD. Michal Philip Gardener");
		if (toupper(getch())=='A')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nOh no!! The correct option is A");
			   getch();
		       goto score;
              break;}

		case 15:
		printf("\n\n\nVitamin C is made up of?");
		printf("\n\nA. Carbon\t\tB. Oxygen\n\nC. Hydrogen\t\tD. All of the above");
		if (toupper(getch())=='D')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			 break;}
		else
		       {printf("\n\nOh no!! The correct option is D");
			   getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat element is not the chemical compound of blood?");
		printf("\n\nA. Iron\t\tB. Chlorine\n\nC. Carbon\t\tD. Nitrogen");
		if (toupper(getch())=='B')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;
			}
		else
		       {printf("\n\nOh no!! The correct option is B");
			   getch();
		       goto score;
		       break;}

		case 17:
		printf("\n\n\nWhat is the chemical formula for Vinegar?");
		printf("\n\nA. C2H4O2\t\tB. C2H2O4\n\nC. N2O3C2\t\tD.B2C4O");
		if (toupper(getch())=='A')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is A");
			   getch();
			   goto score;
		       break;}

		case 18:
		printf("\n\n\nHow many inert gases are there in periodic table?");
		printf("\n\nA. 5\t\tB. 3\n\nC. 8\t\tD. 7\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is D");
			   getch();
			   goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich element is the most abundant element in the universe?");
		printf("\n\nA. Hydrogen\t\tB. Helium\n\nC. Silicon\t\tD. Oxygen");
		if (toupper(getch())=='A')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is A");
			   getch();
			   goto score;
		       break;}

		case 20:
		printf("\n\n\nWhat is the name of the family of elements that has a full outer shell of electrons?");
		printf("\n\nA. Alkali metals\t\tB. Noble gases\n\nC. Transition Elements\t\tD. Actinides");
		if (toupper(getch())=='B')
			{printf("\n\nSmarty pants!!");
			countr++;
			getch();
			break;}
		else
		       {printf("\n\nOh no!! The correct option is B");
			   getch();
			   goto score;
		       break;}
			   }
			   }
	score:
    system("cls");
	score=(float)countr*50000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t******** CONGRATULATIONS ********");
	     printf("\n\t You won $%.2f",score);
		 printf("\n\t\t Thank You!!");
		 goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t******** CONGRATULATIONS ********");
	    printf("\n\t\tYOU ARE NOW A MILLIONAIRE!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\n\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** BETTER LUCK PLAYING NEXT TIME ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key to go to the main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}
}
