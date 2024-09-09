//Ryan Conyers
//COP 3223C
//Assignment 1 - Fracturing
//Febuary 7th, 2023

#include <stdio.h>
#include <math.h>

// Defining PI to use in the coming equations
#define PI 3.14159

// Function to input the coordinates separately
void inputCoordinates(double* x1, double* x2, double* y1, double* y2) {
    printf("Enter x-coordinate #1: ");
    scanf("%lf", x1);
    printf("Enter x-coordinate #2: ");
    scanf("%lf", x2);
    printf("Enter y-coordinate #1: ");
    scanf("%lf", y1);
    printf("Enter y-coordinate #2: ");
    scanf("%lf", y2);
}

// Function to print coordinates
void printCoordinates(double x1, double x2, double y1, double y2) {
    printf("Point #1 entered: x1 = %.0f; y1 = %.0f\n", x1, y1);
    printf("Point #2 entered: x2 = %.0f; y2 = %.0f\n", x2, y2);
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, x2, y1, y2;

    inputCoordinates(&x1, &x2, &y1, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printCoordinates(x1, x2, y1, y2);

    printf("The distance between the two points is %.5f\n", distance);

    return distance;
}

// Function to calculate the perimeter of the circle
double calculatePerimeter() {
    double x1, x2, y1, y2;

    inputCoordinates(&x1, &x2, &y1, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;

    printCoordinates(x1, x2, y1, y2);

    printf("The perimeter of the city encompassed by your request is %.5f\n", perimeter);
    return perimeter;
}

// Function to calculate the area of the circle
double calculateArea() {
    double x1, x2, y1, y2;

    inputCoordinates(&x1, &x2, &y1, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);

    printCoordinates(x1, x2, y1, y2);

    printf("The area of the city encompassed by your request is %.5f\n", area);
    return area;
}

// Function to calculate the width (same as distance for a circle)
double calculateWidth() {
    double x1, x2, y1, y2;

    inputCoordinates(&x1, &x2, &y1, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printCoordinates(x1, x2, y1, y2);

    printf("The width of the city encompassed by your request is %.5f\n", distance);
    return distance;
}

// Function to calculate the height (same as distance for a circle)
double calculateHeight() {
    double x1, x2, y1, y2;

    inputCoordinates(&x1, &x2, &y1, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printCoordinates(x1, x2, y1, y2);

    printf("The height of the city encompassed by your request is %.5f\n", distance);
    return distance;
}

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}