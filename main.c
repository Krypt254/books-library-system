#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void getpin();
void changepin();


struct library{
   char bookname[50];
   char author[50];
   int noofpages;
};
int main(){
   struct library lib[100];
   char bookname[30];
   int i,j, keepcount;
   i=j=keepcount = 0;
   while(j!=6){
      printf("\n1. Add book information\n");
      printf("2.Display book information\n");
      printf("3. Edit book information\n");
      printf("4. Delete book \n");
      printf("5. change password\n");
      printf("6. log out\n");
      printf("7. Exit");
      printf ("\n\nEnter one of the above : ");
      scanf("%d",&j);
      switch (j){
         /* Add book */
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            keepcount++;
            i++;
            break;
         case 2:
            printf("you have entered the following information\n");
            for(i=0; i<keepcount; i++){
               printf ("book name = %s\n",lib[i].bookname);
               printf ("\t author name = %s\n",lib[i].author);
               printf ("\t pages = %d\n",lib[i].noofpages);
            }
            break;
         case 3:
            printf("\n No of books in library : %d", keepcount);
            break;
         case 4:
            printf("editing of book");
            break;
         case 5:
            printf("deleting a book\n");
            break;

      }
   }
   return 0;
}
