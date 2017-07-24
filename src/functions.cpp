// For the functions used in the parser. (EZRA)
namespace Lemon{
    std::array<char, 8> registers;

//possible ones I won't make
    void push(char toPush){
        stack.push(toPush);
    }


    void pop(char Register){
        char buffer = stack.top();
        stack.pop();
        registers[Register] = buffer;
    }



    void clear(){
        stack.empty();
    }



    void peek();


//Ones I am making




    void setRegister(char Register, char setTo){
        registers[Register] = setTo;
    }

    void clearRegister(char Register){
        registers[Register] = 0;
    }

    void decr();


    void incr();

    void rprint();


    void print(char Register){
        std::cout << registers[Register];
    }


    void input();


    void copy();

    void label();


    void gotoLabel();


    void jumpifzero();


    void jumpifequal();



}
