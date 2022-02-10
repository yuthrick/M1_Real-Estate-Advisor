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

void display_prop()
{
    size= sizeof(u);
    system("cls");
    rewind(fptr);
    printf("NAME\t\tContact no\tProperty type\tExtent(in sq yds)\t \bPlace\t\tCountry\n\n");

    while(fread(&u, size, 1, fptr)==1)
    {
        printf("\n%s\t\t%ld\t%s\t\t%d\t\t\t%s\t\t%s", u.name, u.cnumber, u.ptype, u.ext, u.place, u.country);
         
    }
    
}
    
    

}