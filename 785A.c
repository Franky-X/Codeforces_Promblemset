//Tetrahedron.Tetrahedron has 4 triangular faces.
//Cube.Cube has 6 square faces.
//Octahedron.Octahedron has 8 triangular faces.
//Dodecahedron.Dodecahedron has 12 pentagonal faces.
//Icosahedron.Icosahedron has 20 triangular faces.
#include<stdio.h>
int main()
{
	char str[20];
	int n, s=0;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		gets(str);
		switch (str[0])
		{
			case 'T': s += 4; break;
			case 'C': s += 6; break;
			case 'O': s += 8; break;
			case 'D': s += 12; break;
			case 'I': s += 20; break;
		}
	}
	printf("%d", s);
}