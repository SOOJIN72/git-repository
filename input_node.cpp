#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct node
{
    string name{};
    int id{};
    float salary{};
};

int main()
{
    node team[4];

    int i = 0;
    int j = 0;

    for (i = 0; i < 4; i++)
    {
        cout << "1) �̸� : ";
        cin >> team[i].name;

        cout << "2) id : ";
        cin >> team[i].id;

        cout << "3) �뵷 : ";
        cin >> team[i].salary;

        cout << endl;
    }

    for (j = 0; j < 4; j++)
    {
        cout << team[j].name << " " << team[j].id << setw(4) << right << team[j].salary << "����" << endl;
    }

    return 0;
}