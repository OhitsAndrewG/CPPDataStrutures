class singlyList{
    public:
        singlyList();
        // ~singlyList();
        void addFront(int number);
        int deleteFront();
        void print();
    private:
        struct node{
            int data;
            node* next;
        };

        int count;
        node* head;
        

};