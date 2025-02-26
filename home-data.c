#include<stdio.h>
#include"string.h"
#include<math.h>
#include<time.h>
typedef struct ful_house{
    char father[20];
    char familes[100];
    int age[50];
    char sister[100];
    char bother[100];
    char member[100];
    char business[500];
     char mother[20];
     char name[25];
     int class;
     char school[50];
     char collage[50];
     char uni[50];

}fh;
void home();
int main(void){
  FILE *fptr;
  fptr = fopen("home_file.txt","a");
   
 


   fclose(fptr);
   return 0;
   }
void home(){



    
}