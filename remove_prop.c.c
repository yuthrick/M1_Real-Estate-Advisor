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



void remove_prop()
{
    size= sizeof(u);
    system("cls");
    char ruser_name[30];
    char another='y';

    

    while(another== 'y')
    {
        printf("Enter name to remove property\n");
        scanf("%s",ruser_name);

        ftemp=fopen("utemp.txt","wb");
        rewind(fptr);

        while(fread(&u, size, 1, fptr)==1)
        {
            if(strcmp(u.name, ruser_name)!=0)
            {
                fwrite(&u, size, 1, ftemp);
            }
        }

        fclose(fptr);
        fclose(ftemp);
        remove("udata.txt");
        rename("utemp.txt","udata.txt");
        fptr=fopen("udata.txt","rb+");

        printf("Want to remove another property ?\n");
        printf("y/n\n");
        fflush(stdin);
        scanf("%c",&another);
    }
}
    
}