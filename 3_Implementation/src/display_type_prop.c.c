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
#include"stdlib.h"

void display_type_prop()
{
    size= sizeof(u);
    system("cls");
    char ruser_ptype[20];
    char another='y';

    while(another=='y')
    {
        fptr=fopen("udata.txt","rb");
        if(fptr==NULL)
        {
            printf("Trouble in opening file\n");
            exit(1);
        }
        
        printf("Enter type of property(villa | house | land)\n");
        scanf("%s", ruser_ptype);

        system("cls");
        printf("NAME\t\tContact no\tProperty type\tExtent(in sq yds)\t \bPlace\t\tCountry\n\n");

        while(fread(&u, size, 1, fptr)==1)
        {
            if(strcmp(u.ptype, ruser_ptype)==0)
            {
                printf("%s\t\t%ld\t%s\t\t%d\t\t\t%s\t\t%s\n\n",u.name, u.cnumber, u.ptype, u.ext,u.place, u.country);
            }
        }
        fclose(fptr);

        printf("Want ro view another type of property ?\n\n");
        printf("y/n");
        fflush(stdin);
        scanf("%c",&another);

    }
}