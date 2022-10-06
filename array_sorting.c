#include <stdio.h>

// Function that compares two elements
int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

void print_array(int *arr, int len, char *str)
{
    printf("%s", str);
    for (int i=0;i<len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {23,5,66,4};
    int len = sizeof(a)/sizeof(int);

    print_array(a, len, "Input: ");
    qsort(a, len, sizeof(int), cmp);
    print_array(a, len, "Output: ");

    return 0;
}
