#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int partition(int array[], int low, int high);
void quicksort(int array[], int low, int high);

int main()
{
    FILE *fptr;
    int *numbers, num, capacity = 100, size = 0, i;

    fptr = fopen("file1.txt", "r");
    if (fptr == NULL)
    {
        perror("error:");
        return -1;
    }

    numbers = (int *)malloc(sizeof(int) * capacity);
    if (numbers == NULL)
    {
        printf("Error allocating memory.\n");
        fclose(fptr);
        return -1;
    }

    while (fscanf(fptr, "%d", &num) == 1)
    {
        if (size == capacity)
        {
            capacity *= 2;
            numbers = (int *)realloc(numbers, sizeof(int) * capacity);
            if (numbers == NULL)
            {
                printf("Error reallocating memory.\n");
                fclose(fptr);
                return -1;
            }
        }
        numbers[size++] = num;
    }

    fclose(fptr);

    quicksort(numbers, 0, size - 1);

    printf("sorted numbers:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high],j;
    int i = (low - 1);

    for ( j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quicksort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);

        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
}

