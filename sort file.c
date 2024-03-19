#include <stdio.h>
#include <stdlib.h>

void bubblesort(int array[], int n);

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

    bubblesort(numbers, size);

    printf("sorted numbers:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}

void bubblesort(int array[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
