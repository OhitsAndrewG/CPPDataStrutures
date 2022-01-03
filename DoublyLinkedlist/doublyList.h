class doublyList{
    private:
        struct node{
            int data;
            node* next;
            node* prev;
        };
        node* head;
        node* tail;
        int count;
    public:
        doublyList();
        void addHead(int number);
        void addTail(int number);
        int deleteTail();
        int deleteHead();
};