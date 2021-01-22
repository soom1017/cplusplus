#include <iostream>
#include <string>
using namespace std;

typedef struct person
{
    string name;
    int age;
}Person;

int main()
{
    int N;
    cin >> N;
    Person* p1 = new Person[N];

    for(int i=0;i<N;i++)
    {
        cin >> p1[i].name >> p1[i].age;
    }

    for(int j=0;j<N;j++)
    {
        cout << "Name:" << p1[j].name << ", Age:" << p1[j].age << endl;
    }

    delete[] p1;
    return 0;
}
