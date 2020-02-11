#include <stdio.h>
void Swap(int* a, int* b)
{
    int t = *a; *a = *b; *b = t;
}
void AdjustDown(int array[], int size, int r)

{

    int left = 2 * r + 1;

    int right = 2 * r + 2;

    if (left >= size)

    {

        return;

    }

    int m = left;

    if (right < size && array[right] > array[left])

    {

        m = right;

    }

    if (array[r] >= array[m])

    {

        return;

    }

    Swap(array + r, array + m);

    AdjustDown(array, size, m);

}



// Ω®∂—

void CreateHeap(int array[], int size)

{

    for (int i = (size - 1 - 1) / 2; i >= 0; i--)

    {

        AdjustDown(array, size, i);

    }

}



// ≈≈–Ú

void HeapSort(int array[], int size)

{

    CreateHeap(array, size);

    for (int i = 0; i < size; i++)

    {

        Swap(array, array + size - i - 1);

        AdjustDown(array, size - i - 1, 0);

    }

}


int main()
{
    int t;
    int n, m;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n), n *= 2, m = n;
        int a[200000];
        while (n--)
        {
            scanf("%d", &a[n]);
        }
        HeapSort(a, m);
        printf("%d\n", a[(m / 2)] - a[(m / 2)-1]);
    }
}