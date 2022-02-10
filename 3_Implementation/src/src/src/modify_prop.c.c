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



void modify_prop()
{
    size= sizeof(u);
    system("cls");
    char ruser_name[20];
    char another= 'y';

    while(another=='y')
    {
        printf("Enter name to modify property\n");
        scanf("%s",ruser_name);

        rewind(fptr);

        while(fread(&u, size, 1, fptr)==1)
        {
            if(strcmp(u.name, ruser_name)==0)
            {
                printf("Enter new name:\n");
                scanf("%s",u.name);

                printf("Enter Contact number :\n ");
                scanf("%ld", &u.cnumber);
  
                printf("Enter Type(villa | house | land) : \n");
                scanf("%s", &u.ptype);
  
                printf("Enter Extent :\n ");
                scanf("%d", &u.ext);
        
                printf("Enter place or city :\n ");
                scanf("%s", &u.place);
        
                printf("Enter country :\n ");
                scanf("%s", &u.country);

                fseek(fptr, -size, SEEK_CUR);
                fwrite(&u, size, 1, fptr);
                break;
            }
        }
        printf("Want to modify another property ?\n");
        printf("y/n\n");
        fflush(stdin);
        scanf("%c",&another);
    }

} 