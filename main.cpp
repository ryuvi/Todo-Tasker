#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

#include "funcs.hpp"

using namespace std;

int main(int argc, char *argv[])
{
	check_args(argv[1]);

	long id = strtol(argv[2], NULL, 10);
	string command = argv[1];

	for (int i = 0; i < argc; i++)
		std::cout << argv[i] << std::endl;

	/* CREATE A TASK */
	if (command == "add")
	{
		std::cout << argv[1] << std::endl;
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
