#include <stdio.h>
typedef struct student
{
    int rollno;
    char name[100];
} stu;
void printDetails(struct student*);
int main()
{
    stu s1 = {21, "raja"};
    stu *ptr=&s1;
    printDetails(ptr);
    printf("%d\n", s1.rollno);//20 changed in the address

    return 0;
}
void printDetails(stu *s1)
{
    printf("Student Information :\n");
    printf("%s\n", s1->name);
    printf("%d\n", s1->rollno);
    s1->rollno = 20;
    printf("%d\n", s1->rollno);
}