// Write a C program to find all pairs of elements in an array whose sum is equal to a given target value. Each pair should be displayed only once.
#include <stdio.h>
int main()
{
    int n, target, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target: ");
    scanf("%d", &target);
    printf("Pairs are:\n");
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}
