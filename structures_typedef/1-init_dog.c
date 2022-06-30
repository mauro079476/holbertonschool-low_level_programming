#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  initialize a variable
 *@name: name
 *@age: age
 *@d: d
 *@owner: owner
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
