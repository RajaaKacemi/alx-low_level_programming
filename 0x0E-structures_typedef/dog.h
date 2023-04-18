#ifndef DOG_H
#define DOG_H
/**
  * struct dog: a struct to define some info about dog
  * @name: first member
  * @age: second member
  * @owner: third member
  *
  * Description: a struct contain 3 members, the first for the name of the dog
  * the second for its age and the last the name of its owner.
  */

struct dog
{
	char *name[20];
	int age;
	char *owner[20];
}

#endif
