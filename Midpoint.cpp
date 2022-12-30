#include <graphics.h>
#include <iostream>

using namespace std;

void midpointCircleDraw(int xc, int yc, int r)
{
    int x = 0, y = r;
    int p = 1 - r;
    void pixel(int, int);

   

    /* While x < y, do following */
    while (x < y)
    {
        x++;
        if (p < 0)
            p += 2 * x + 1;
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }

        /* Plot the points */
        pixel(xc + x, yc + y);
        pixel(xc - x, yc + y);
        pixel(xc + x, yc - y);
        pixel(xc - x, yc - y);
        pixel(xc + y, yc + x);
        pixel(xc - y, yc + x);
        pixel(xc + y, yc - x);
        pixel(xc - y, yc - x);
    }
}

/* Function for pixel ploting */
void pixel(int x, int y)
{
    putpixel(x, y, WHITE);
}

/* Driver code */
int main()
{
    int xc = 100, yc = 100, r = 50;
    int gd = DETECT, gm;

    /* Initialize graphics function */
    initgraph(&gd, &gm, "");

    midpointCircleDraw(xc, yc, r);

    getch();
    closegraph();
    return 0;
}

