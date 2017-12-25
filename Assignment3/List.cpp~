#include"List.h"
#include<iostream>
using namespace std;

// The Constructor creates an list and sets it equals to null
List::List()
{
	first = NULL;
}

bool List::Empty()
{
	if (first == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void List::InsertAtEnd(ElementType x)
{
	node *ptr = new node;
	ptr->data = x;
	ptr->next = NULL;

	if (Empty())
	{
		first = ptr;
	}
	else
	{
		node *current = first;
		while(current->next != NULL)
		{
			current = current->next;
		}
		current->next = ptr;
	}
}

void List::Delete(int x)
{
	node *current = first;
	node *temp;
	
	if (first->data == x)
	{
		first = current->next;
		current = NULL;
		delete current;
		
	}
	
	else if((first->data != x) )
	{
		
		while (current->next != NULL)
		{
			temp = current;
			current = current->next;
			if (current->data == x)
			{
				temp->next = current->next;
			}

		}
		
	}
}

void List::Display()
{
	node *current = first;
	while (current != NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
}

int List::Smallest()
{	
	node *current = first;
	int smallest = current->data;
	while (current != NULL)
	{
		if (current->data < smallest)
		{
			smallest = current->data;
		}
		current = current->next;
	}

	return smallest;
}


//Determines the largest integer in the array
int List::Largest()
{
	int large = 0;
	
	node *current = first;
	large = current->data;
	while (current != NULL)
	{
		if (current->data > large)
		{
			large = current->data;
		}
		current = current->next;
	}

	return large;
}

int List::Range()
{
	return Largest()-Smallest();
}
