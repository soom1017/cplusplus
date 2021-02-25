#pragma once
#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
	T data;
	Node<T>* next;
};

template <class T>
class List
{
private:
	Node<T>* head;
public:
	List()
		: head(NULL)
	{}
	~List()
	{
		Node<T>* ptr = head;
		while (ptr != NULL)
		{
			head = ptr->next;
			delete ptr;
			ptr = head;
		}
		delete head;
	}
	List(T* arr, int n_nodes)
		: head(NULL)
	{
		Node<T>* tail = NULL;
		for (int i = 0;i < n_nodes;i++)
		{
			Node<T>* temp = new Node<T>;
			temp->data = arr[i];
			temp->next = NULL;

			if (head == NULL)
			{
				head = temp;
				tail = temp;
			}
			else
			{
				tail->next = temp;
				tail = tail->next;
			}
		}
		
	}

	void insert_at(int idx, const T& data)
	{
		Node<T>* ptr1 = head;
		Node<T>* ptr2 = head;
		for (int i = 0;i < idx - 1;i++) 
		{
			ptr1 = ptr1->next;
		}
		ptr2 = ptr1->next; 

		Node<T>* temp = new Node<T>;
		ptr1->next = temp; 
		temp->data = data;
		temp->next = ptr2;
	}
	void remove_at(int idx)
	{
		Node<T>* ptr1 = head;
		for (int i = 0;i < idx - 1;i++)
		{
			ptr1 = ptr1->next;
		}

		Node<T>* ptr = ptr1->next;
		Node<T>* ptr2 = ptr->next;
		ptr1->next = ptr2;
		delete ptr;
	}
	void pop_back()
	{
		Node<T>* ptr = head;
		Node<T>* temp = head;
		while (ptr->next != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
		}
		temp->next = NULL;
		delete ptr;
	}
	void push_back(const T& val)
	{
		Node<T>* temp = new Node<T>;
		temp->data = val;
		temp->next = NULL;
		Node<T>* ptr = head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	void pop_front()
	{
		Node<T>* ptr = head;
		head = ptr->next;
		delete ptr;
	}
	void push_front(const T& val)
	{
		Node<T>* temp = new Node<T>;
		temp->data = val;
		temp->next = head;
		head = temp;
	}
	friend ostream& operator<<(ostream& out, List& rhs)
	{
		Node<T>* ptr = rhs.head;
		while (ptr->next != NULL)
		{
			out << ptr->data << ", ";
			ptr = ptr->next;
		}
		out << ptr->data;
		return out;
	}
};

