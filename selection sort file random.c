#include <stdio.h>
#include <stdlib.h>

void selectionsort(int array[], int n);

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

    selectionsort(numbers, size);

    printf("sorted numbers:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}

void selectionsort(int array[], int n)
{
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_idx])
            {
                min_idx = j;
            }
        }
        temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}

