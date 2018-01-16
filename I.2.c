#include <stdio.h>

int BinarySearch(int arr[], int left, int right, int x);


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

    printf("Input element to be searched: ");
    scanf("%i", &x);

    ok = BinarySearch(array, 0, NbOfElements - 1, x);

    if(ok == 0)
        printf("The element is not present in the array");
    else
        printf("The element is present in the array at position %i", ok);

}


int BinarySearch(int arr[], int left, int right, int x)
{
  int mid;

  while (left <= right)
  {
    mid = left + (right - left) / 2;

    if(arr[mid] == x)
        return mid;

    if(arr[mid] < x)
        left = mid + 1;

    if(arr[mid] > x)
        right = mid - 1;
  }

  return -1;
}
