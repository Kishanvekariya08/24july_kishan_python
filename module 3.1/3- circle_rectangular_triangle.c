// WAP to find area of circle, rectangular, triangle
#include <stdio.h>
void main()
{
    
    int m;           
    float pi = 3.14; 
    printf("Enter radius of circle: ");
    scanf("%d", &m);                    
    float circle = (float)(pi * m * m); 
    printf("Area of Circle is: %.2f", circle);

    float w, h; 
    float rect; 

    printf("\n\nEnter width of Rectangular: ");
    scanf("%f", &w); 
    printf("Enter height of Rectangular: ");
    scanf("%f", &h); 

    rect = w * h; 

    printf("Area of Rectanguler is: %.2f", rect);

    
    float b, height; 
    float tri;       
    printf("\n\nEnter base of triangle: ");
    scanf("%f", &b); 
    printf("Enter height of Triangle: ");
    scanf("%f", &height); 

    tri = b * height / 2; 

    printf("Area of Triangle is: %.2f", tri);
}