#include <stdio.h>
#include <string.h>
int size = 0;
struct student
{
    char name[30];
    int student_number;
    char subject_grades[6][6];
};
void input(struct student *arr)
{
    printf("Enter student's name : ");
    scanf("%s", &arr->name);
    printf("Enter student number : ");
    scanf("%d", &arr->student_number);
    for (int i = 0; i < 6; i++)
    {
        printf("Enter Grade of subject-%d : ", i + 1);
        scanf("%s", &arr->subject_grades[i]);
    }
}
void view(struct student arr)
{
    printf("student's name : %s", arr.name);

    printf("\nstudent number : %d", arr.student_number);

    for (int i = 0; i < 6; i++)
    {
        printf("\nGrade of subject-%d : %s", i + 1, arr.subject_grades[i]);
    }
    printf("\n");
}
void query(struct student arr[])
{
    int number;
    printf("Enter student's number for query : ");
    scanf("%d", &number);
    for (int i = 0; i < size; i++)
    {
        if (arr[i].student_number == number && arr[i].student_number != -1)
        {
            view(arr[i]);
            return;
        }
    }
    printf("Student not found with entered student number\n");
    return;
}
void modification(struct student *arr)
{
    int d;
    printf("Enter 1 for change the name of the student\n");
    printf("Enter 2 for change the student number of the student\n");
    printf("Enter 3 for change in the grade of subject of the student\n");
    scanf("%d", &d);

    if(d==1)
    {
        
        
        printf("Enter the modifies name of the student :");
        scanf("%s", &arr->name); 
        
        
    }
    if(d==2)
    {
        printf("Enter the modified number of the student :");
        scanf("%d", &arr->student_number);
    }
    if(d==3)
    {
        int sb;
        printf("Enter the subject number which you want to modify : ");
        scanf("%d", &sb);
        printf("Enter the grade to modify the grade of subject :");
        scanf("%s", &arr->subject_grades[sb-1]);
        
    }
    
    printf("modification done successfully...\n");
    return;
}
void delete_student(struct student *arr)
{
    arr->student_number = -1;
    printf("deleted successfully...\n");
            return;
    
}
int main()
{
    struct student arr[300];
    int ch = 0,f=0,ff=0,check=0;
    while (check == 0)
    {
        int ch;
        printf("1 for add student information\n");
        printf("2 for view all student's details\n");
        printf("3 for query student\n");
        printf("4 for modification of details of student\n");
        printf("5 for delete student details\n");
        printf("6 for exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            input(&arr[size]);
            size++;
            break;
        case 2:
            for (int i = 0; i < size; i++)
            {
                if (arr[i].student_number == -1)
                    continue;
                printf("Student-%d details \n", i + 1);
                view(arr[i]);
            }
            break;
        case 3:
            query(arr);
            break;
        case 4:
            int number;
            printf("Enter the student number for modification : ");
            scanf("%d", &number);
            f = 0;
            for (int i = 0; i < size; i++)
            {
                if (arr[i].student_number == number && arr[i].student_number != -1)
                {
                    f = 1;
                    modification(&arr[i]);
                    break;
                }
            }
            if (f == 0)
            {
                printf("Student not found with given student number \n");
            }

            break;
        case 5:
            int numberr;
            printf("Enter the student number which has to be deleted : ");
            scanf("%d", &numberr);
            ff = 0;
            for (int i = 0; i < size; i++)
            {
                if (arr[i].student_number == numberr && arr[i].student_number != -1)
                {
                    ff = 1;
                    delete_student(&arr[i]);
                }
            }
            if (ff == 0)
            {
                printf("Student not found with given student number \n");
            }
            
            break;

        default:
            printf("exiting..........");
            check = 1;
            break;
        }
    }

    return 0;
}