#include <stdio.h>

void ShellSort(int arr[], int arrsize);

int main()
{
    int NbOfElements;
    int array[500];
    int i;

    printf("Input number of elements in the array: ");
    scanf("%i", &NbOfElements);

    for(i = 0; i < NbOfElements; ++i)
    {
        printf("\nInput element number %i: ", i);
        scanf("%i", &array[i]);
    }

    ShellSort(array, NbOfElements);

    printf("\n\nSorted array:");
     for(i = 0; i < NbOfElements; ++i)
    {
        printf(" %i", array[i]);
    }

}


void ShellSort(int arr[], int arrsize)
{
    int i,j;
    int g,t;
    for (g = arrsize / 2; g > 0; g = g / 2)
    {
        for (i = g; i < arrsize; ++i)
        {
            t = arr[i];
            for (j = i; j >= g && arr[j - g] > t; j = j - g)
                arr[j] = arr[j - g];
            arr[j] = t;
        }
    }
}
