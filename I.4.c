#include <stdio.h>

void BubbleSort(int arr[],int size);


int main()
{
    int NbOfElements, i;
    int x;
    int array[500];
    int ok;

    printf("Input number of elements in the array: ");
    scanf("%i", &NbOfElements);

    for(i = 0; i < NbOfElements; ++i)
    {
        printf("\nInput element number %i: ", i);
        scanf("%i", &array[i]);
    }

    BubbleSort(array, NbOfElements);

    printf("\n\nSorted array: ");
    for(i = 0; i < NbOfElements; ++i)
        printf(" %i", array[i]);

}


void BubbleSort(int arr[],int size)
{
    int t;
    int i,j;
    for(i = 0; i < size - 1; ++i){
        for(j = 0; j < size - i - 1; ++j)

        if(arr[j] > arr[j+1])
            {t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;}}

}
