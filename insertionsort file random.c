#include <stdio.h>
#include <stdlib.h>

void insertionsort(int array[], int n);

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

    insertionsort(numbers, size);

    printf("sorted numbers:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}

void insertionsort(int array[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

