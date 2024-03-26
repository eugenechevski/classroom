#define MAX_LEN 30
#define TAX_RATE 0.1
#define TAX_RATE_OVERTIME 0.2
#define OVERTIME_HOURS 40

struct Employee
{
    char first[MAX_LEN];
    char last[MAX_LEN];
    double payperhr;
    double gross;
    double taxes;
    double hours_in_week;
}

int
main()
{
    struct Employee employees[30];

    FILE *fptr = fopen("./clock.txt", "r"); // Opens a file for reading

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1; // or handle error as needed
    }
    char buffer[100];
    if (fgets(buffer, 100, fptr) != NULL)
    {
        printf("%s", buffer);
    }
}
