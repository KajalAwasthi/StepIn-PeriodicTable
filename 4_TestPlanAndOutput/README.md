## Test Plan

### High Level Test Plan

| Test ID | Description | I/p exp | O/p exp |	Actual Output | Type of Test |
| --- | --- | --- | --- | --- | --- |
| HL01 | Check if the code is working as expected by considering the test cases | Player's choice | Performance a/c to choice | Performance done | Scenario Based |
| HL02 | Check if the code is working as expected by considering the test cases | Player's name | Welcome message and rules | Welcome message and rules | Scenario Based |
| HL03 | Check if the system handles boundary conditions | Different choice from the one displayed  | Exits | Exits | Boundary Based |
| HL04 | Check what happens if two players make same high score | Name and score | Latest displayed | Latest displayed | Integration Based |
| HL05 | Check to see, if score is reset in beginning and then highest is viewed | choice R and V | <name> has the highest score of 0.00 | 0.00 has the highest score of 0.00 | Integration Based |
| HL06 | to return to main menu for any key presses | Any key | Main menu entered | Main menu entered | Integration Based |
| HL07 | Check if code goes to main round if count>=3 | Correct answer choice for beginner round | Move to main round | Move to main round | Integration Based |
| HL08 | Check if score is displayed properly | number of correct answers(countr) | countr*50000 and display result | Display result a/c to score range | Integration Based |
  
### Low Level Test Plan

| Test ID | Function name | Description | Return type | Valid Input |	Output | Output for invalid inputs | Status (PASS/FAIL) |
| --- | --- | --- | --- | --- | --- | --- | --- |
| LL01 | show_record | shows highest scorer alongwith score | void | choice V | display message | Exits | PASS |
| LL02 | reset_score | resets the highest score | void | choice R | Score is reset | Exits | PASS |
| LL03 | help | helps the player by displaying rules again | void | choice H | rules display | Exits | PASS |
| LL04 | getch | returns the playername | string | name of user | name with welcome message | no invalid inputv| PASS |
| LL05 | edit_score | reads from file | void | - | - | NULL | PASS |
| LL06 | main | performs all the tasks | int | inputs a/c to diff functions | name and score | NULL | PASS |
