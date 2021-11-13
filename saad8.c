#include <stdio.h>
#include <stdlib.h>
struct empolyee {
  char id[20];
  char name[50];
  char Jpos[50];
  char gender;
  int exp;
  int pay;
};
void displayptr(struct empolyee* obj)
{
    printf("%s\n",obj[0].id);
    printf("%s\n",obj[0].name);
    
   
}

int main() {
  int m = 0, size = 2;
  char var;
  FILE *fptr = fopen("saad.txt", "r");
  struct empolyee *p =
      (struct empolyee *)malloc(size * sizeof(struct empolyee));
  for (int i = 0; i < size; i++)
   {
    while (var != ' ') {
      fscanf(fptr, "%c", &var);
      if (var == ' ') {
        break;
      } else {
          p[i].id[m]=var;
          m++;
      }
    }
     p[i].id[m+1]='\0';
    var='\0';
    m=0;
    while (var != ' ') {
      fscanf(fptr, "%c", &var);
      if (var == ' ') {
        break;
      } else {
          p[i].name[m]=var;
          m++;
      }
    }
    p[i].name[m+1]='\0';
    var='\0';
    m=0;
    while (var != ' ') {
      fscanf(fptr, "%c", &var);
      if (var == ' ') {
        break;
      } else {
          p[i].Jpos[m]=var;
          m++;
      }
    }
    p[i].Jpos[m+1]='\0';
    var='\0';
    m=0;
    fscanf(fptr, "%c", &var);
    fscanf(fptr, "%c", &p[i].gender);
    scanf(fptr, "%c", &var);
    fscanf(fptr, "%d", &p[i].exp);
    scanf(fptr, "%c", &var);
    fscanf(fptr, "%d", &p[i].pay);
    
    


  }
  displayptr(p);
}