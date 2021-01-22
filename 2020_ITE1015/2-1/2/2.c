#include <stdio.h>
typedef struct
{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p)
{
	Point p_new;
	p_new.xpos = p->xpos*2;
	p_new.ypos = p->ypos*2;
	return p_new;
}

void swapPoints(Point* p1, Point* p2)
{
	int temp1, temp2;
	temp1 = p1->xpos, temp2 = p1->ypos;
	p1->xpos = p2->xpos, p1->ypos = p2->ypos;
	p2->xpos = temp1, p2->ypos = temp2;
}

int main()
{
        Point p1;
        scanf("%d %d", &p1.xpos, &p1.ypos);

	Point p2 = getScale2xPoint(&p1);
	printf("Calling getScale2xPoint()\n");
	printf("p1: %d %d\n", p1.xpos, p1.ypos);
	printf("p2: %d %d\n", p2.xpos, p2.ypos);

	swapPoints(&p1, &p2);
	printf("Calling swapPoint()\n");
	printf("p1: %d %d\n", p1.xpos, p1.ypos);
        printf("p2: %d %d\n", p2.xpos, p2.ypos);
}
