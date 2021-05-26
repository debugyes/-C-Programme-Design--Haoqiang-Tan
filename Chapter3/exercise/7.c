#include<stdio.h>
#define PI 3.1415926
int main(void)
{
	float r, h;
	float circle_perimeter, circle_area, ball_surface, ball_bulk, cylinder_bulk;

	printf("Please enter radius and height£º");
	scanf("%f%f", &r, &h);

	circle_perimeter = PI * r * 2;
	circle_area = PI * r * r;
	ball_surface = 4 * PI * r * r;
	ball_bulk = 3.0 / 4.0 * PI * r * r * r;
	cylinder_bulk = circle_area * h;

	printf("circle perimeter = %.2f\n", circle_perimeter);
	printf("circle area = %.2f\n", circle_area);
	printf("ball surface = %.2f\n", ball_surface);
	printf("ball bulk = %.2f\n", ball_bulk);
	printf("cylinder_bulk=%.2f\n", cylinder_bulk);


	return	0;
}