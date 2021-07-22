#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void print_help()
{
    std::cout << "HELP!" << std::endl;
}

int check_args(char *arg)
{
    string commands[4] = {
        "add",
        "remove",
        "update",
        "show"};

    for (int i = 0; i < 4; i++)
    {
        if (commands[i] != arg)
        {
            print_help();
            return 0;
        }
        else
        {
            break;
        }
    }

    return 0;
}

int add(char *task)
{
    int i;
    std::string line;

    /* GRAB OLD TASKS */
    std::vector<std::string> tasks;

    std::ifstream InMyDB("DB.txt");

    while (getline(InMyDB, line))
        tasks.push_back(line);

    InMyDB.close();

    /* ADD NEW TASK */
    tasks.push_back(task);

    std::ofstream OutMyDB("DB.txt");

    OutMyDB.clear();

    for (i = 0; i < tasks.size(); i++)
        OutMyDB << tasks[i];

    OutMyDB.close();

    return 0;
}

int conclude(long id, char *option)
{
    /* TODO:
     *   - grab the task by ID
     *   - set as completed
     */

    return 0;
}

int edit(long id, char *task)
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

int remove(long id)
{
    std::vector<char *> tasks;

    tasks.erase(tasks.begin() + ((int)id - 1));

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