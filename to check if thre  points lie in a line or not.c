#include<stdio.h>
void main()
{
    int x1,y1,x2,y2,x3,y3,area_of_triangle;
    printf("enter the points:");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);//2x+4y-6=0
    area_of_triangle=(x1*(y2-y3)+(x2*(y3-y1))+(x3*(y1-y2)))*0.5;
    if(area_of_triangle==0)
    {
        printf("points lie in line");
    }
    else
    {
        printf("points does not lie in line");
    }
    
    
    
}