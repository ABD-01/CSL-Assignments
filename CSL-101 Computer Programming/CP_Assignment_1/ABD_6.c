// Assignment-1
// Roll No. - T014
// Q)6

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14159

float cube(float x)
{printf("Volume of Cube is %f\n",x*x*x);}
float cuboid(float x,float y,float z)
{printf("Volume of Cuboid is %f\n",x*y*z);}
float sphere(float y)
{printf("Volume of Sphere is %f\n",(4*PI*y*y*y)/3);}
float cylinder(float x,float y)
{printf("Volume of Cylinder is %f\n",PI*x*x*y);}
float cone(float x,float y)
{printf("Volume of Cone is %f\n",(PI*x*x*y)/3);}
int main()
{
    int choice;
    float x,y,z;
    printf("To fine the volume, enter your as per follows:\n1)Cube\n2)Cuboid\n3)Sphere\n4)Cylinder\n5)Cone\n6)Exit\n");
    
    while(1)
    {
    printf("\nChoice: ");
    scanf("%d",&choice);
     switch (choice)
     {
         case 1:
            printf("Enter side: ");
            scanf("%f",&x);
            cube(x);
            break;
        case 2:
            printf("Enter Length, Breadth,Height: ");
            scanf("%f%f%f",&x,&y,&z);
            cuboid(x,y,z);
            break;
        case 3: 
            printf("Enter the Radius: ");
            scanf("%f",&y);
            sphere(y);
            break;
        case 4:
            printf("Enter Radius and Height: ");
            scanf("%f%f",&x,&y);
            cylinder(x,y);
            break;
        case 5:
            printf("Enter Radius and Height: ");
            scanf("%f%f",&x,&y);
            cone(x,y);
            break;
        case 6: 
            printf("Thank You :-)\n");
            exit(0);
     }
        
    }
    return 0;   
}
