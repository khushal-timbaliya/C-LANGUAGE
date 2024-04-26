#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

int compare_dates(struct Date date1, struct Date date2)
{
    if (date1.year < date2.year)
        return -1;
    else if (date1.year > date2.year)
        return 1;
    else
    {
        if (date1.month < date2.month)
            return -1;
        else if (date1.month > date2.month)
            return 1;
        else
        {
            if (date1.day < date2.day)
                return -1;
            else if (date1.day > date2.day)
                return 1;
            else
                return 0;
        }
    }
}

int main()
{
    struct Date date1 = {25, 4, 2024};
    struct Date date2 = {15, 5, 2023};

    int result = compare_dates(date1, date2);

    if (result < 0)
        printf("Date 1 comes first\n");
    else if (result > 0)
        printf("Date 2 comes first\n");
    else
        printf("Both dates are the same\n");

    return 0;
}
