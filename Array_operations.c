#include <stdio.h>
int main()
{
    int array[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, position, value, i;

    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter position: ");
        scanf("%d", &position);

        printf("Enter value: ");
        scanf("%d", &value);

        for (i = size; i > position; i--)
        {
            array[i] = array[i - 1];
        }

        array[position] = value;
        size++;
    }
    else if (choice == 2)
    {
        printf("Enter position to delete: ");
        scanf("%d", &position);

        for (i = position; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }

        size--;
    }

    printf("Updated array: ");

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

