#include<iostream>
using namespace std;
class Queue
{
    int q[100];
    int front;
    int rear;
    int size;

    public:
    Queue()
    {
        front=-1;
        rear=-1;
        size=100;

    }

    void Enqueue(int v)
    {
        if(rear==size-1)
        cout<<"queue overflow...!"<<endl;
        else if(rear==-1)
        {
            rear++;
            front++;
            q[front]=v;
        }
        else
        {
            rear++;
            q[rear]=v;

        }


    }

    void Dequeue()
    {
        if(front==-1)
        cout<<"queue underflow"<<endl;
        else if(front==rear)
        {
            cout<<q[front]<<"deleted"<<endl;
            rear=-1;
            front=-1;
        }
        else
        {
            cout<<q[front]<<"deleted"<<endl;
            front++;

        }
    }

    void printQueue()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }


};
int main()
{
    Queue q1;
    int choice;
    while(1)
    {
    cout<<"1. enqueue"<<endl;
    cout<<"2. dequeue"<<endl;
    cout<<"3. print"<<endl;
    cout<<"4. exit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
        int v;
        cout<<"enter no."<<endl;
        cin>>v;
        q1.Enqueue(v);
        break;

        case 2:
        q1.Dequeue();
        break;

        case 3:
        q1.printQueue();
        break;


        case 4:
        exit(0);
        break;
    }
    }

    return 0;

}