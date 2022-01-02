class singlyList{
    public:
        singlyList();
        // ~singlyList();
        void addFront(int number);
        int deleteFront();
    private:
        struct node{
            int data = 0;
            int* next;
        };

        node* head;
        

};