#include <stdio.h>

// Define structure for time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to add two times
struct Time addTimes(struct Time t1, struct Time t2) {
    struct Time result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.seconds = result.seconds % 60;
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.minutes = result.minutes % 60;
    result.hours = result.hours % 24; // Ensure hours < 24 for 24-hour format
    return result;
}

int main() {
    struct Time t1, t2, sum;

    // Input first time
    printf("Enter the first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Input second time
    printf("Enter the second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Add times
    sum = addTimes(t1, t2);

    // Display result
    printf("Sum of times: %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}

