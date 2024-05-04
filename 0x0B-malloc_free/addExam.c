#include <stdio.h>
#include <stdlib.h>
int *array(int size)
{
    int *ptr;
    if (size == 0)
        return (NULL);
    ptr = (int *)malloc(sizeof(int) * size);
    
    if (ptr == NULL)
        return (NULL);
    else
        return (ptr);
}

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int size;
    int *ptr1;
    
    
  
    printf("Enter the size of the Arrayy : ");
    scanf("%d", &size);
    ptr1 = array(size);
    
    printf("You have an Array[%d]\n", size);
    while (i < size)
    {
        printf("Array[%d] : ", i);
        scanf("%d", ptr1+i);
        i++;
    }
    ptr1[i] = '\0';
    
  
    while (j < size)
    {
        printf("%d ", *(ptr1+j));
        j++;
    }
	free(ptr1);	
    return (0);
}

/* ChatGpt suggestion */ 
#include <stdio.h>
#include <stdlib.h>

int *array(int size) {
    if (size <= 0)
        return NULL;
    return malloc(sizeof(int) * size);
}

int main() {
    int size;
    int *ptr1;

    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid input or size\n");
        return 1;
    }

    ptr1 = array(size);
    if (ptr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("Array[%d]: ", i);
        if (scanf("%d", &ptr1[i]) != 1) {
            printf("Failed to read integer\n");
            free(ptr1);
            return 1;
        }
    }

    printf("You have an array[%d]\n", size);
    for (int j = 0; j < size; j++) {
        printf("%d ", ptr1[j]);
    }
    printf("\n");

    free(ptr1);
    return 0;
}
