// Assignment-3
// Q)8

# include <stdio.h>
# include <math.h>

struct pt
{
    float x, y;
};

struct
{
    struct pt a, b, c;
} tri;

float perim();
float dist(struct pt, struct pt);
int main()
{
    printf("Enter the co-ordinates of points of Triangle\n");
    printf("Enter co-ordinates of Point A : ");
    scanf("%f%f", &tri.a.x, &tri.a.y);
    printf("Enter co-ordinates of Point B : ");
    scanf("%f%f", &tri.b.x, &tri.b.y);
    printf("Enter co-ordinates of Point C : ");
    scanf("%f%f", &tri.c.x, &tri.c.y);
    printf("The Perimeter of given Trianle is %.3f. \n", perim());
    return 0;
}
float perim()
{
    return dist(tri.a, tri.b) + dist(tri.b, tri.c) + dist(tri.c, tri.a);
}
float dist(struct pt p1, struct pt p2)
{
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}
