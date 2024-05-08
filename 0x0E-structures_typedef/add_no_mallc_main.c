#include <stdio.h>

typedef struct dog {
    char *name;
    char *owner;
    float age;
    
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t dog1;
    dog_t *ptr = &dog1;
    ptr->name = name;
    ptr->owner = owner;
    ptr->age = age;
    
    return (ptr);
}

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
