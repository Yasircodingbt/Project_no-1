#include<stdio.h>
#include"string.h"
#include"main.h"
typedef struct collection_of_data{
    char myself[200];
    char father[20];
    char business[100];
    char name[25];
    char education[100];
    int age;
}cof;
void father(FILE *fptr, cof data[]);
void myself(FILE *fptr,cof data[]);



int main(void){
  cof data[10];
  FILE *fptr;
  fptr = fopen("textual.txt","w");
    if (fptr == NULL){
      printf("\033[1;36m File doesn't exist\033[0m");
    }else{ 
      myself(fptr,data);       
      father(fptr,data);
    }
   fclose(fptr);
   return 0;
   }



void father(FILE *fptr,cof data[]){
 printf("\033[1;35mDetail of Father \n\033[0m");
    fprintf(fptr,"Detail of Father\n");
      printf("\033[1;33mEnter the Name of Father \n\033[0m");
        fgets(data->name,25,stdin);
            fprintf(fptr,"Name of Father %s",data->name);
              puts("\033[1;37mEnter the Business of Father\033[0m"); 
                  fgets(data->business,100,stdin);
                     fprintf(fptr,"Business of Father : \n%s",data->business);
                        puts("\033[1;32mEnter the Age of Father\033[0m");
                           scanf("%d",&data->age);
                              getchar();
                               fprintf(fptr,"Age of Father %d year",data->age);
           return;
}
void myself(FILE *fptr,cof data[]){

  printf("\033[1;31mInterdoucing to Myself\n\033[0m");
   fprintf(fptr,"Inderducing to Myself : \n");
      fgets(data->myself,200,stdin);
         fprintf(fptr,"%s",data->myself);
           puts("\033[1;34m What is you Age\033[0m");
              fprintf(fptr,"What is your Age\n");
                scanf("%d",&data->age);
                  fprintf(fptr,"My age is %d year ",data->age);
                    getchar();
                      puts("\033[1;35m About education \033[0m");
                        fprintf(fptr,"About education\n");
                          fgets(data->education,100,stdin);          
                            fprintf(fptr,"%s",data->education);    
         return;
}