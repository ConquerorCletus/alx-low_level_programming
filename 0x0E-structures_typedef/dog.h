#ifndef DOG_H
#define DOG_H

/*
 * dog_t - Typedef for dog struct.
 */
typedef struct dog dog_t;

/*
 * struct dog - dog structure which stores information on dog.
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Description: The struct called "dog" contains the information on dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*end of struct*/
