/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/**
 * @file funs.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @file funs.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"funs.h"

int display_number()
{
    int lines=0;
    char c;

    fptr=fopen("udata.txt","r");
    if(fptr==NULL)
    {
        printf("Trouble in opening file");
        return -1;
    }

    while ((c=fgetc(fptr))!=EOF)
    {
        if(c=='n')
        lines++;
    }
    return (lines-1);
    fclose(fptr);
    
    

}