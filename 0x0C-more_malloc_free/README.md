malloc, free, exit

malloc
The malloc function is used to allocate a certain amount of memory during the execution of a program.
It will request a block of memory from the heap. If the request is granted, the operating system will
reserve the requested amount of memory and malloc will return a pointer to the reserved space.
When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

exit
La fonction exit permet de mettre fin au programme en spécifiant un code de retour.
Ce code de retour, passé en paramètre de la fonction exit, permet de spécifier comment le programme
se termine. Une valeur nulle (0 ou constanteEXIT_SUCCESS) indique au système d'exploitation 
que l'exécution de ce programme s'est bien déroulée. Tout autre valeur indique une sortie anormale 
du programme (la constante EXIT_FAILURE peut aussi être utilisée).
