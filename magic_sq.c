/* User enters the numbers 1-16 in any order.  Program displays them in a square with the row and column and diagonal sums */

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	int r1, r2, r3, r4, c1, c2, c3, c4, d1, d2;

	printf("\n\nEnter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
	
	r1 = a + b + c + d;
	r2 = e + f + g + h;
	r3 = i + j + k + l;
	r4 = m + n + o + p;

	c1 = a + e + i + m;
	c2 = b + f + j + n;
	c3 = c + g + k + o;
	c4 = d + h + l + p;

	d1 = a + f + k + p;
	d2 = m + j + g + d;

	printf("\n%d\t%d\t%d\t%d\n", a, b, c, d);
	printf("%d\t%d\t%d\t%d\n", e, f, g, h);
	printf("%d\t%d\t%d\t%d\n", i, j, k, l);
	printf("%d\t%d\t%d\t%d\n\n", m, n, o, p);

	printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);
	printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);
	printf("Diagonal sums: %d %d\n", d1, d2);

	return 0;
}

	
