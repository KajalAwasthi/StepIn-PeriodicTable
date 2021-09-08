/**
 * @file Quiz.h
 * @author KajalAwasthi (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __PERIODICTABLE_H__
#define __PERIODICTABLE_H__

/**
 * @brief 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void edit_score(float , char []);
/**
 * @to edit score 
 * 
 */

void show_record();
/**
 * @show highest score
 * 
 */

void reset_score();
/**
 * @to reset highest score to zero
 * 
 */

void help();
/**
 * @display rules again for help
 * 
 */

#endif
