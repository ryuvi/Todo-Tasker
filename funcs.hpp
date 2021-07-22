#include <iostream>
#include <vector>

void print_help()
{
    std::cout << "HELP!" << std::endl;
}

int check_args(int qttCommands, char *arg)
{
    char *commands[4] = {
        "add",
        "remove",
        "update",
        "show"};

    for (int i = 0; i < qttCommands; i++)
    {
        if (commands[i] != arg)
        {
            print_help();
            return 0;
        }
    }
}

int add(char *task)
{
    std::vector<char *> tasks;

    /* TODO: grab old tasks */

    /* ADDS TO VECTOR */
    tasks.push_back(task);

    return 0;
}

int edit(int id, char *option)
{
    /* TODO:
     *   - grab the task by ID
     *   - set as completed
     */

    return 0;
}

int edit(int id, char *task)
{
    char *title, description;

    /* TODO: grab the task by ID */

    std::cout << "New title" << std::endl;
    std::cout << "► ";
    std::cin >> title;
    std::cout << "" << std::endl;
    std::cout << "New description" << std::endl;
    std::cout << "► ";
    std::cin >> description;

    /* TODO: change task */

    return 0;
}

int remove(int id)
{
    std::vector<char *> tasks;

    tasks.erase(tasks.begin() + (id - 1));

    return 0;
}

int show()
{
    std::vector<char *> tasks;

    for (int i = 0; i < tasks.size(); i++)
    {
        std::cout << tasks[i] << std::endl;
    }

    return 0;
}