#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure describing a dog
 * @name: pointer to the dog's name
 * @age: age of the dog
 * @owner: pointer to the owner's name
 *
 * Description: Defines a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
