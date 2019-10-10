struct stack
{
    int top;
    std::string data[8];
    bool isfull()
    {
        return top == 9 ? true : false;
    }
    bool isempty()
    {
        return top == -1 ? true : false;
    }
    void clear()
    {
        top = -1;
    }
    void push(std::string d){
        if(isfull()){
            std::cout<<"penuh!";
        }
        else{
            top++;
            data[top]=d;
        }
    }
    void pop(){
        if(isempty())
            std::cout<<"kosong!";
        else
            top--;
    }
    std::string get(){
        if(top>=0){
            return data[top];
        }
        else {
            return "kosong!";
        }
    }
} baru;
