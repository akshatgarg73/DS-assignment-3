#include <iostream>
using namespace std;
#define max_size 3
int top = -1;
int arr[max_size];
void push()
{
    if (top == max_size)
    {
        cout << "stack is full";
    }
    else
    {
        int inp;
        cout << "enter value you want to add";
        cin >> inp;
        top++;
        arr[top] = inp;
        cout << "value is added succesfully";
    }
}
void display()
{
    int i;
    for (i = 0; i <= top; i++)
    {
        cout << arr[i]<<"\t";
    }
}
void full(){
    if (top == max_size)
    {
        cout << "stack is full";
    }
    else{
        cout<<"stack is not full";
    }
}
void empty(){
if (top == -1)
    {
        cout << "stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }   
}  
void pop(){
empty();
top=top-1;
arr[top]=top;


}
void peak(){
    empty();
    cout<<arr[top];
}
int main()
{
    while (true)
    {
        int inp1;
        cout << " 1. push()\n 2. pop()\n 3. isEmpty()\n 4. isFull()\n 5. display()\n  6. peek()";
        cin >> inp1;
        if (inp1 == 1)
        {
            push();
        }
        else if (inp1 == 5)
        {
            display();
        }
        else if (inp1 == 2)
        {
            pop();
        }
        else if (inp1 == 3)
        {
            empty();
        }
        else if (inp1 == 4)
        {
            full();
        }
        else if (inp1 == 6)
        {
           peak();
        }
        else if(inp1==7)
        {
            break;
        }
        else{
            cout<<"invalid";
        }
    }
    return 0;
}
