# Requirements

*   Commands for making it independent of OS used.
*   gcc compiler
*   Linux/Windows OS to work with the code.
*   To proceed in the form of a quiz game
*   Captures Basic Planning of the project through - Sample Gantt Chart attached
*   Use of MS Excel to make chart.
*   VS Code to test the working of code.
*   Online compilers to test the output of code.

## Introduction 
This project is a fun project with a price money, developed using the concepts of C programming like files. It is a quiz related to the periodic table elements. The player is shown a welcome message and is then displayed the rules of the game.
If the player wishes to proceed, they should select one of the certain options shown, which are, to start the game, display highest score, reset the score, help or quit the game.
If the player starts the quiz, they are asked to provide player name and then the quiz begins.
This game has 2 rounds, a beginner round to check eligibility and another round which is the main round.
For every correct answer in the main round, the player wins $50000.
Both rounds have certain rules which is followed, the player proceeds, else, quiz ends.
It has seperate functions like show_score(), show_record, reset_score, help and edit_score to perform different tasks.

## Objectives
The main objectives include-
*   To store the information of user, like name and questions answered correctly in the file.
*   To display the highest score of the player when asked for.
*   To perform the tasks like start, help, reset score and quit properly.

## Features
*   Introduces the player to the game rules.
*   Allows player to provide themselves a player name.
*   Displays certain game options infront of the player and proceeds according to choice.
*   In real-time, there's even a cash price worth $1 Million for players who answer 20 questions correct.
*   Provides certain options to user to proceed as per choice.

![Featutes](https://user-images.githubusercontent.com/89745488/132333190-37852e1c-4012-4648-968a-44995012ca4b.JPG)


## SWOT Analysis
### Strengths
*   User Friendly
*   Basic C concepts used
*   Makes up a good quiz game
*   Includes different features
*   Player can reset their score
*   Asks for player info before beginning
*   Start, play and quit option availability

### Weaknesses
*   Process and system
*   Poor UI
*   Basic C concepts used

### Opportunities
*   Using efficient algorithm for functioning of quiz game smoothly
*   Can be expanded in real-time and amazing price can be won
*   Skill improvement
*   Can be made using different coding language for versatility improvement

### Threats
*   Hardware issue
*   Info must not be lost

## *4 Ws and 1 H*
### Who
Teachers or students at science events in school can make use of this (with change of price for correct answers).
Also can be put to use in Science or Chemistry TV shows (similar to KBC).
### When
Whenever you want a fun activity related to science, it can be a great option.
### Why
It not only increases your knowledge of periodic table elements but also provides enjoyment with a great cash price.
### How
The game is developed using basic concepts of C language, reading from and writing to files, different looping statements.

## High Level Requirements
| ID | Description | Category | Status|
| -------- | -------- | -------- | -------- |
| HL01 | User should be able to proceed with the commands | Technical | Implemented |
| HL02 | User should be able to enter player details | Technical | Implemented |
| HL03 | User should be able to view the rules and features of the quiz | Technical | Implemented |
| HL04 | User should be able to enter the correct letter as per the way he wants the game to proceed | Technical | Implemented |
| HL05 | User should be able to view highest score by a player | Technical | Implemented |
| HL06 | The code must be capable of saving details to display later | Technical | Implemented |
| HL07 | Data should not be lost in case of failure | Scenario | Future |

## Low Level Requirements
| ID | Description | HL ID | Status|
| -------- | -------- | -------- | -------- |
| LL01 | Old record must be replaced by new record for different player | HL01, HL02, HL05, HL06 | Implemented |
| LL02 | User data should be read properly | HL01, HL02, HL04 | Implemented |
| LL03 | FLies should be updated as anyone makes a higher score than previous | HL02, HL04, HL05, HL06 | Implemented |
