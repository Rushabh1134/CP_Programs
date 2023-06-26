#include <stdio.h>

typedef struct
{
    int date;
    int month;
    int year;
} dob;

typedef struct
{
    char first_name[30];
    char middle_name[30];
    char last_name[30];
    dob date_of_birth;
    char disease[30];
} Patient;

int main()
{
    int n;
    printf("Enter the number of patients: ");
    scanf("%d", &n);
    Patient patients[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details of patient %d: \n", i + 1);

        printf("First name: ");
        scanf(" %s", patients[i].first_name);
        printf("Middle name: ");
        scanf(" %s", patients[i].middle_name);
        printf("Last name: ");
        scanf(" %s", patients[i].last_name);
        printf("Enter Date of Birth: ");
        printf("Enter Date: ");
        scanf("%d", &patients[i].date_of_birth.date);
        printf("Enter Month: ");
        scanf("%d", &patients[i].date_of_birth.month);
        printf("Enter Year: ");
        scanf("%d", &patients[i].date_of_birth.year);
        printf("Enter Disese: ");
        scanf(" %s", patients[i].disease);
    }

    printf("\n\n\n\nYour entered patients are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Patient number %d\n", i + 1);

        printf("First name: %s\n", patients[i].first_name);
        printf("Middle name: %s\n", patients[i].middle_name);
        printf("Last name: %s\n", patients[i].last_name);
        printf("Date of birth: %d/%d/%d\n", patients[i].date_of_birth.date,
               patients[i].date_of_birth.month,
               patients[i].date_of_birth.year);
        printf("Disease: %s\n\n", patients[i].disease);
        
    }
    printf("********************************");
    return 0;
}