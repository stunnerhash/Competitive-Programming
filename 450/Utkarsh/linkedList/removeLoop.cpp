//https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
#include<bits/stdc++.h>
using namespace std;

void removeLoop(Node* head)
{
    Node *slow = head, *fast = head;
	while (fast && fast->next) 
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) 
		{
		    slow = head;
		    if(head == fast) 
		    	while(fast->next != head) fast = fast->next;
		    
		    else while(slow->next != fast->next) {
		    		slow = slow->next;
		    		fast = fast->next;
		    	 }
    	    fast->next = NULL;   
		    return;
		}
	}
}