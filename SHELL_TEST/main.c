#include "main.h"

int main()
{
	size_t n = 0;
	char *cmd;

	printf("Simple_Shell >>\n");
	getline(&cmd, &n, stdin);
	printf("%s\n", &cmd);
	free(cmd);
	return (0);
}
