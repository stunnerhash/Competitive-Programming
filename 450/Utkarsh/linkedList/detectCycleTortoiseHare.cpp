//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#
#include <bits/stdc++.h>
using namespace std;

bool detectLoop(Node* head)
{
    Node* hare = head;
    Node* tortoise = head;
    while(hare && hare->next){
        hare= hare->next->next;
        tortoise = tortoise->next;
        if(hare == tortoise) return 1;
    }
    return 0;
}
