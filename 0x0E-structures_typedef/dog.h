#ifndef DOG_H
#define DOG_H
/**
 *struct dog-A structure with 3 members initialized
 *@name: first input
 *@age: second input
 *@owner: theird input
 *
 *Description: the structure stores dog name, age and owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
