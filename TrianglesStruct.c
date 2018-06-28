#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
	float area;
};

typedef struct triangle triangle;

float triangleArea(triangle *tr,int n)
{
	int p = (tr[n].a + tr[n].b + tr[n].c)/2;
	float area = sqrt(p * (p-tr[n].a) * (p-tr[n].b) * (p-tr[n].c));
	tr[n].area = area;
	return area;
}

void swap(triangle *tr,int n)
{
	triangle temp;
	temp = tr[n];
	tr[n] = tr[n+1];
	tr[n+1] = temp;
}

void sort_by_area(triangle* tr, int n)
 {

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n-1; j++)
		{
			float area1 = triangleArea(tr,j);
			float area2 = triangleArea(tr,j+1);
			if (area1 > area2)
			{
				swap(tr,j);
			}
		}
	}
	printf("\nSorted\n" );

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\t %f\n", tr[i].a, tr[i].b, tr[i].c, tr[i].area);
	}
	return 0;
}
