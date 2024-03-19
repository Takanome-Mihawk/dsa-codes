#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int left, int mid, int right);
void mergesort(int array[], int left, int right);

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

    mergesort(numbers, 0, size - 1);

    printf("sorted numbers:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    free(numbers);
    return 0;
}

void merge(int array[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = array[left + i];
    for (j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int array[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergesort(array, left, mid);
        mergesort(array, mid + 1, right);

        merge(array, left, mid, right);
    }
}

