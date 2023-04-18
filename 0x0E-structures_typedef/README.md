******* C - Structures, typedef *******
** Structres **

A structure is a user defined data type available
in C that allows to combine data items of
different kinds.

we can access to the element of our structre by using the "." symole.

** Pointers to structures **
To access elements of a pointer to a
structure, you have to dereference the
pointer and then access to the data using
the ‘.’ symbol.

Example: (*p).name = "Ahmad"; == ptr -> name = "Ahmad";

** Typedef: **
Typedef is a C keyword used to give a new name to an existing data type. 
It allows us to define new names for existing types to make our code more readable and easier to maintain.

** What is the difference between a struct and typedef? **
A struct and a typedef are different concepts in C.

A struct is a composite data type that groups variables under one name in a block of memory.
It is used for mixed-data-type records, such as a hard-drive directory entry or other mixed-type records.
A struct declaration can include other data types, and it can be declared with or without a tag name.

On the other hand, typedef is used to create an alias (a new name) for an existing data type. It is useful
for creating shorthand names for long or complex types, and for making code more readable. A typedef declaration
associates an identifier (the alias) with a type, making it possible to use the alias instead of the type name.

In other words, a struct is a data type that can be defined and used directly, while a typedef is a way to 
create an alias for an existing data type. In fact, a typedef can be used to create an alias for a struct type. 
For example:

typedef struct {
   int    x;
   int    y;
} point_t;

In this example, the typedef creates an alias point_t for the struct type, which can then be used to declare
variables of that type, like this:

point_t p = { 1, 2 };
