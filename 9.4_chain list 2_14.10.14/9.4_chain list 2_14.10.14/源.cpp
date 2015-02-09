#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];
	double score;
	struct student * next;
};
int main()
{

}

struct student *create(int n)
{
	//1)define
	struct student *head = NULL, *pnew, *ptail;//definate pointer 
	int i;
	//2)set head
	pnew = (struct student *)malloc(sizeof(struct student));
	scanf("%s%d", pnew->name, &pnew->score);
	head = pnew;
	ptail = pnew;
	//3)add new nodes
	for (i = 1; i < n; i++)
	{
		pnew = (struct student *)malloc(sizeof(struct student));
		scanf("%s%f", pnew->name, &pnew->score);
		ptail->next = pnew;
		ptail = pnew;
	}
	//4)set end node
	ptail->next = NULL;

	return head;
}