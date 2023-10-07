#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct Student {
    char name[50];
    int testscore;
};
//fuction to compare between two struct to sort the students testscore in descending order
bool compareFunc(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;
    return studentA->testscore > studentB->testscore; 
}


//function to evaluate the average of the students testscore
double average(struct Student* students,int n)
{
    double AverageScore=0;
for(int i=0;i<n;i++)
{
    AverageScore+=students[i].testscore;
}
return AverageScore/n;
}


//function to print the students whose testscore is below the average
void BelowAverage(struct Student* students,int n)
{
    for(int i=0;i<n;i++)
    {
        if(students[i].testscore<average(students,n))
        printf("%s\n",students[i].name);
       
    }
     printf("you have to upgrade your score !!!\n");

}

//fuction to display all tha data
void display(struct Student* students,int n)
{
printf("The average score is: %lf",average(students,n));
printf("\n");
printf("The students whose score below the average :\n");
BelowAverage(students,n);
printf("The highet test score is: %d",students[n-1].testscore);
printf("\n");
printf("The top student is:%s", students[n-1].name);
printf(".....Congratulations!");
}

int main()
{
int n;
printf("Enter the number of students: ");
scanf("%d", &n);
//create array of type struct
struct Student students[n]; 
for(int i=0; i<n; i++)
{
    printf("Enter the name of student%d: ",i+1);
    scanf("%s",students[i].name);
    printf("Enter the test score: ");
    scanf("%d",&students[i].testscore);
} 
qsort(students, n, sizeof(struct Student),compareFunc);
display(students,n);
}