#include<stdio.h>
#include<string.h>
typedef struct student
{
   int rollno;
   char name[100];
}stu;

int main(){
    stu s1;
    s1.rollno=21;
    strcpy(s1.name,"raja");
    printf("%d\n",s1.rollno);
    printf("%s",s1.name);
return 0;
}