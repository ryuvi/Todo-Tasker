#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "funcs.hpp"

int main(int argc, char *argv[])
{
	check_args(3, argv[1]);

	long id = strtol(argv[2], NULL, 10);

	/* CREATE A TASK */
	if (argv[1] == "add")
	{
		add(argv[1]);
		return 0;
	}

	/* EDIT A TASK */
	if (argv[1] == "update")
	{
		edit(id, argv[1]);
		return 0;
	}

	/* REMOVE A TASK */
	if (argv[1] == "remove")
	{
		remove(id);
		return 0;
	}

	/* SHOW ALL THE TASKS */
	if (argv[1] == "all")
	{
		show();
		return 0;
	}

	return 0;
}
