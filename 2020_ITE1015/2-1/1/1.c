#include <stdio.h>
typedef struct
{
	char name[20];
	int age;
}Person;

int main()
{
	Person arr[3];

	scanf("%s %d", arr[0].name, &arr[0].age);
	scanf("%s %d", arr[1].name, &arr[1].age);
	scanf("%s %d", arr[2].name, &arr[2].age);
	printf("Name:%s, Age:%d\n", arr[0].name, arr[0].age);
	printf("Name:%s, Age:%d\n", arr[1].name, arr[1].age);
	printf("Name:%s, Age:%d\n", arr[2].name, arr[2].age);

	return 0;
}	
