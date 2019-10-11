// Implemented LRU Cache, most famous algorithm followed in Page Replacement Techniques.
// Here we are doing search in O(1) using Hashing - map in CPP is used for Hashing
// For deletion of a node and insertion in O(1) time, a doubly linked list is used.
// Basic implementation of a LRU Cache uses a Stack Like Datastructure which is implemented using Doubly Linked List and HashMap. The most recent page is at the top of the stack and the least recent is at the bottoms

// class node is used for implementing a single node of the doubly linked list.
class node
{
    public:
    node* prev; // points to previous node in the list
    node* next; // points to next node in the list
    int key; // contains the key of the node which will be used to refer the node
    int val; // contains the value of the node
    node(int x, int y) // constructor
    {
        key = x; // initialized key as x
        val = y; // initialized val as y
        prev = NULL; // prev and next are NULL for an isolated node
        next = NULL;
    }
};

// class LRUCache contains the base logic for LRU Cache Implementation
class LRUCache {
public:
    map<int, node*> look; // look is a Hashmap which is used to do fast search of the node having a particular key
    node* head; // head points to the head of the doubly linked list
    node* tail; // tail points to the last node of the doubly linked list
    int curr; 
    int cap; // variable that states the capacity of the LRU Cache. If the size of the cache exceed cap, last node of the linked list is popped from the cache.
    /* Constructor to initialize the LRU Cache */
	LRUCache(int capacity) {
        curr = 0;
        cap = capacity;
        head = NULL;
        tail = NULL;
        map<int, node*> empt;
        look = empt;
    }
    
    
    // Function to get the value of the node having key x
    int get(int x) {
        if(look[x]!=NULL) // if there is such node having key as x
     {
         auto nd = look[x];
         if(nd->prev) // delete this accessed node from the current position and insert it at the head
         {
             auto temp = nd->prev;
             auto ntemp = nd->next;
             temp->next = ntemp;
             if(ntemp) ntemp->prev = temp;
             nd->prev = NULL;
             nd->next = NULL;
             if(temp->next == NULL) tail = temp;
             if(head)
             {
                 nd->next = head;
                 head->prev = nd;
                 head = nd;
                 head->prev = NULL;
             }
         }
         return nd->val;
     }
     return -1; // if no such node having key x is found
    }
    
    // Function to place a node having key x and value y
    void put(int x, int y) {
        if(look[x]!=NULL) // if already such node having key x exists in cache
         {
         	//delete the node from its position and place it at head
             auto nd = look[x];
             if(nd->prev)
             {
                 auto temp = nd->prev;
                 auto ntemp = nd->next;
                 temp->next = ntemp;
                 if(ntemp) ntemp->prev = temp;
                 nd->prev = NULL;
                 nd->next = NULL;
                 if(temp->next == NULL) tail = temp;
                 if(head)
                 {
                     nd->next = head;
                     head->prev = nd;
                     head = nd;
                     head->prev = NULL;
                 }
             }
             nd->val = y;
             return;
         }
         // if no such node having key x exists in the cache
         node* nd = new node(x,y);
         look[x] = nd;
         if(head==NULL)
         {
             head = nd;
             tail = nd;
             ++curr;
             return;
         }
         nd->next = head;
         head->prev = nd;
         head = nd;
         head->prev = NULL;
         ++curr;
         if(curr > cap) // if the capacity after insertion of new node exceeds the limit
         {
             --curr;
             //delete the element at tail
             if(tail)
             {
                 auto temp = tail;
                 tail = tail->prev;
                 tail->next = NULL;
                 temp->prev = NULL;
                 look[temp->key] = NULL;
             }
         }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
