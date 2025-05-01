#include <stdio.h>
#include <stdbool.h>

// Function to determine if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Function to get the number of days in a given month
int getDaysInMonth(int month, int year) {
    switch(month) {
        case 1: return 31;
        case 2: return isLeapYear(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10:return 31;
        case 11:return 30;
        case 12:return 31;
        default: return 0;
    }
}

// Function to calculate the day of the week for the first day of a given month and year
// Returns 0=Sunday, 1=Monday, ..., 6=Saturday
int getFirstDayOfMonth(int month, int year) {
    int q = 1; // Day of the month
    int m = month;
    int y = year;
    if (m == 1 || m == 2) {
        m += 12;
        y -= 1;
    }
    int K = y % 100; //24
    int J = y / 100; //20
    int h = (q + (13*(m + 1))/5 + K + K/4 + J/4 + 5*J) % 7;
    // Zeller's Congruence returns: 0=Saturday, 1=Sunday, ..., 6=Friday
    // Adjusting so that 0=Sunday, ..., 6=Saturday
    int dayOfWeek = (h + 6) % 7;
    return dayOfWeek;
}

// Function to print the calendar for a given year
void printCalendar(int year) {
    const char* months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    const char* daysOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    for (int month = 1; month <= 12; month++) {
        printf("\n\n  ------------%s %d------------\n", months[month - 1], year);
        for (int i = 0; i < 7; i++) {
            printf("%s ", daysOfWeek[i]);
        }
        printf("\n");

        int firstDay = getFirstDayOfMonth(month, year);
        int daysInMonth = getDaysInMonth(month, year);

        // Print initial spaces
        for (int i = 0; i < firstDay; i++) {
            printf("    ");
        }

        // Print all days of the month
        for (int day = 1; day <= daysInMonth; day++) {
            printf("%3d ", day);
            if ((firstDay + day) % 7 == 0) {
                printf("\n");
            }
        }
        printf("\n");
    }
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    printCalendar(year);
    return 0;
}
