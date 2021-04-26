// Assignment-3
// Q)7

# include <stdio.h>
# include <math.h>

struct point
{
    float x, y;
} pt;
struct
{
    struct point C;
    float radius;
} circle;

int check();
int main()
{
    printf("CIRCLE\nEnter x, y co-ordinates of the center of Cirlce: ");
    scanf(" %f%f", &circle.C.x, &circle.C.y);
    printf("Enter the radius : ");
    scanf(" %f", &circle.radius);
    printf("POINT\nEnter x, y co-ordinates a point : ");
    scanf(" %f%f", &pt.x, &pt.y);
    printf("Function terminated with return value %d.", check());

}
int check()
{
    float dis = sqrt(pow((pt.x - circle.C.x), 2) + pow((pt.y - circle.C.y), 2));
    if (dis > circle.radius)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
