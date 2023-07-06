#include <stdio.h>
#include <math.h>

// Function to calculate the length of a vector given its coordinates
double vectorLength(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1; // Calculate the difference in x-coordinates
    int dy = y2 - y1; // Calculate the difference in y-coordinates
    double length = sqrt(dx * dx + dy * dy); // Calculate the length using the distance formula
    return length; // Return the calculated length
}

int main() {
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the endpoint (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double result = vectorLength(x1, y1, x2, y2);
    printf("The length of the vector: %.6f\n", result);

    return 0;
}
