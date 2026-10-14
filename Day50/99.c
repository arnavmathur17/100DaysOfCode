// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    int day, year;
    int month_num; // The numeric month (e.g., 4 for April)
    
    // 1. Read input in dd/mm/yyyy format
    // Note: Using %d for month_num. If input is dd/04/yyyy, this works.
    if (scanf("%d/%d/%d", &day, &month_num, &year) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    // 2. Convert numeric month to string abbreviation
    const char* months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (month_num < 1 || month_num > 12) {
        printf("Invalid month.\n");
        return 1;
    }

    // 3. Print in dd-Apr-yyyy format
    printf("%d-%s-%d\n", day, months[month_num], year);

    return 0;
}   
