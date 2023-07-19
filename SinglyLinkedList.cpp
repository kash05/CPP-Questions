        #include <bits/stdc++.h>
        using namespace std;

        class node
        {
        public:
            static int size;
            int data;
            node *next;
            node *prev;
            static node *tail;

            node(int data)
            {
                this->data = data;
                this->prev = NULL;
                this->next = NULL;
                size++;
            }

            ~node()
            {
                size--;
            }
        };

        int node::size = 0;
        node* node::tail=NULL;

        void insert(node *&head, int data)//before head;
        {

            node *before = new node(data);
            before->next=head;
            head=before;
        }

        void insertLast(int data)
        {      
            node* node2= new node(data);
            
            // while(temp->next!=NULL){
            //     temp=temp->next;
            // }
            // temp->next=node2;
            node::tail->next=node2;
            node::tail=node2;
            
        }

        void insertinmiddle(node* &head,int pos,int data){

            if(pos==1){//if only one element in ll; // cannot point on previous node;
                insert(head,data);
                return; 
            }

            node* nodex=new node(data);
            node* temp=head;int count = 1;

                 if(pos==node::size){
                    node::tail=nodex;
                }

             while(count != pos-1){
                     temp=temp->next;
                    count ++ ;
             }
                         
                nodex->next=temp->next;
                temp->next=nodex;

             }

        void deletingnodes(int pos,node* &head){
            if(pos==1){//when deleting first node
                    head=head->next;
            }else{//deleting any node after head
                    node* temp=head;int count=1;
                        while(count!=pos-1){
                            temp=temp->next;count++;
                        }
                        temp->next=NULL;
                       node::tail=temp;
            }
        }

        void print(node *&head)
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        int main()
        {

            node *node1 = new node(10);

            node*head = node1; 
            node::tail=node1;
            print(head);
            // print(tail);

            insert(head, 12);
            print(head);
            //  print(tail);

            insertLast(8);
            print(head);
            //  print(tail);

            // insertinmiddle(head,tail,2,20);
            // print(head);
            //  print(tail);

            // insertinmiddle(head,tail,1,15);
            // print(head);
            //  print(tail);

            insertinmiddle(head,4,12);
            print(head);
            cout << node::tail->data << endl;

             deletingnodes(1,head); //by position OR value ::here->position
             print(head);
             cout << node::tail->data << endl;

            deletingnodes(2,head); //by position OR value ::here->position
            print(head);
            cout << node::tail->data << endl;

            return 0;
        }