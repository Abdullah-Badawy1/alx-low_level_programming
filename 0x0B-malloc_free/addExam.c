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

