struct stack
{
    int top;
    std::string data[8];
    bool isfull()
    {
        return top == 8 ? true : false;
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
            std::cout<<"penuh!\n";
        }
        else{
            top++;
            data[top]=d;
        }
    }
    void pop(){
        if(isempty())
            std::cout<<"kosong!\n";
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
    std::string getItem(int index){
        if(index>-1&&index<=top){
            return data[index];
        }
        else if(index>top){
            return "forbidden - over";
        }
        else{
            return "forbidden - under";
        }
    }
}f;
