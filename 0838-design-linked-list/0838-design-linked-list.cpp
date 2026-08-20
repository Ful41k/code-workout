class MyLinkedList {
private:
    typedef struct node {
        int val;
        node* next;
    }* Ptr;

    Ptr head;
    Ptr curr;
    Ptr temp;
    Ptr uxt;

public:
    MyLinkedList() {
        head = NULL;
        curr = NULL;
        temp = NULL;
        uxt = NULL;
    }
    
    int get(int index) {
        // 2, 3, 4, 6
        curr = head;
        int count = 0;
        if(head == NULL) {
            return -1;
        } else {
            while(curr != NULL) {
                if(count == index) {
                    return curr->val;
                }
                count++;
                curr = curr->next;
            }
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Ptr n = new node;
        n->next = NULL;
        n->val = val;
        curr = n;
        if(head == NULL) {
            head = n;
        } else {
            curr->next = head;
            head = curr;
        }
    }
    
    void addAtTail(int val) {
        Ptr u = new node;
        u->next = NULL;
        u->val = val;
        curr = head;
        if(head != NULL) {
            while(curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = u;
        } else {
            head = u;
        }
    }
    
    void addAtIndex(int index, int val) {
        Ptr f = new node;
        f->next = NULL;
        f->val = val;
        curr = head;
        uxt = head;
        int count7 = 0;
        int elements_node = 0;
        while(uxt != NULL) {
            elements_node++; // amount of nodes
            uxt = uxt->next;
        }

        if(head != NULL) { 
            if(index == 0) {
                f->next = head;
                head = f;
            }
            else{
                temp = head;
                while(curr != NULL) {
                    if(index == count7) {
                        // error below
                        temp->next = f;
                        f->next = curr;
                        break;
                    }
                    count7++;
                    temp = curr;
                    curr = curr->next;
                }
                if(elements_node == index) {
                        temp->next = f;
                    }
            }
        }

        if(head == NULL && index == 0) {
            head = f;
        }

    }
    
    void deleteAtIndex(int index) {
        Ptr delPtr = new node;
        curr = head;
        temp = head;
        int count = 0;
        if(head == NULL) {
        } 
        else {
            // 2, 3, 4, 6
            // 2, 3, 6
            while(curr != NULL) {
                if(index == count) {
                    delPtr = curr;
                    if(delPtr == head) {
                        if(head->next == NULL) {
                            head = NULL;
                        }
                        else {
                            head = head->next;
                            curr = curr->next;
                            temp->next = curr;
                            delete delPtr;
                            break;               
                        } 
                    }
                    else {
                    curr = curr->next;
                    temp->next = curr;
                    delete delPtr;
                    break;
                    }
                }
                count++;
                temp = curr;
                curr = curr->next;
            }
        }
    }
};