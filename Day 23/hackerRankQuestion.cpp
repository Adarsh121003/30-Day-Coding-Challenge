// Objective
// Today we will work with a Linked List. Check out the Tutorial tab for learning materials and an instructional video.

// A Node class is provided for you in the editor. A Node object has an integer data field, , and a Node instance pointer, , pointing to another node (i.e.: the next node in the list).

// A Node insert function is also declared in your editor. It has two parameters: a pointer, , pointing to the first node of a linked list, and an integer, , that must be added to the end of the list as a new Node object.

// Task
// Complete the insert function in your editor so that it creates a new Node (pass  as the Node constructor argument) and inserts it at the tail of the linked list referenced by the  parameter. Once the new node is added, return the reference to the  node.

// Note: The  argument is null for an empty list.

// Input Format

// The first line contains T, the number of elements to insert.
// Each of the next  lines contains an integer to insert at the end of the list.

// Output Format

// Return a reference to the  node of the linked list.

// Sample Input

// STDIN   Function
// -----   --------
// 4       T = 4
// 2       first data = 2
// 3
// 4
// 1       fourth data = 1
// Sample Output

// 2 3 4 1
// Explanation

// , so your method will insert  nodes into an initially empty list.
// First the code returns a new node that contains the data value  as the  of the list. Then create and insert nodes , , and  at the tail of the list.

// LinkedListExplanation.png

// Language
// C++11
// More
// 3031323334353637382021222324252627282939404142434445464748495051525354
//             next=NULL;
//         }
// };
// class Solution{
//     public:

//       Node* insert(Node *head,int data)
//       {
//           Node* newNode = new Node(data);
//         if (!head) {

// Line: 19 Col: 13

// Test against custom input
// Congratulations!

// You have passed the sample test cases. Click the submit button to run your code against all the test cases.


// Sample Test case 0
// Input (stdin)
// 4
// 2
// 3
// 4
// 1
// Your Output (stdout)
// 2 3 4 1 
// Expected Output
// 2 3 4 1
// BlogScoringEnvironment
// ================Solution================
#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
        return head;
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}