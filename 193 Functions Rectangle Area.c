// Solutn Lec = 193

// This is WITH PARAMETERS and A RETURN VALUE

float rectArea(float, float);

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float l, h;
    printf("Enter L & H of Rect:\n");
    scanf("%f%f", &l, &h);
    printf("Area of Rectangle is : %.2f\n", rectArea(l,h));
    return 0;
}

float rectArea(float L, float H)
{
    float A;
    A = L * H;
    return A;
}

/*
Video Solution, Lec 194 :

#include<stdio.h>
#include<stdlib.h>

float findArea(float width, float height)
{
    float area;
    area = width * height;
    return area;
}

int main()
{
    float heightRectangle, widthRectangle;
    float area;
    printf("Enter width: ");
    scanf("%f", &widthRectangle);
    printf("Emter height: ");
    scanf("%f%, &heightRectangle);
    area = findArea(widthRectangle, heightRectangle);
    printf("The area of your given rectangle is : %f \n", area);
    return 0;
}
*/
