#include "dog.h"

/**
 * init_dog - intialize a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char names's dog
 * @age: ages's dog
 * @owner: pointer to char owner's dog
 * Reeturn: No
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
