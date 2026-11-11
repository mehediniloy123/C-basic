#include <stdio.h>
#include <string.h>

int main() {
    int Total_First_Division = 0;
    int Total_Marksheets_Checked = 0;
    char division[15];

    printf("Enter results (FIRST, SECOND, THIRD, FAIL):\n");

    while (Total_Marksheets_Checked < 50) {
        
        printf("Student %d result: ", Total_Marksheets_Checked + 1);
        scanf("%s", division);

        // "" এর সাথে হুবহু মিলছে কি না চেক করা
        if (strcmp(division, "FIRST") == 0) {
            Total_First_Division++;
        }

        // একটা খাতা দেখা শেষ, তাই কাউন্টার ১ বাড়ানো হলো
        Total_Marksheets_Checked++;
    }

    printf("Total FIRST Division: %d\n", Total_First_Division);

    return 0;
}