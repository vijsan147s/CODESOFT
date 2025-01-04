#include<iostream>
#include<string>
using namespace std;

const int MAX_TASKS=100;

struct Task
{
    string description;
    bool isDone;
};
int main()
{
    Task tasks[MAX_TASKS]; // array store the task

    int numTasks=0;

    while (true)
    {
        cout<< "To-Do List Apllicaton"<<endl;
        cout<< "1.Add Task"<<endl;
        cout<< "2.List Task"<<endl;
        cout<< "3.Mark Task as Done"<<endl;
        cout<< "4.Remove Task"<<endl;
        cout<<"5.exit."<<endl;

        int choice;
        cin >> choice;
        if (choice==1)
        {
            if (numTasks< MAX_TASKS)
            {
                cout<<"Enter The Task Description:" ;
                cin.ignore();
                getline( cin ,tasks[numTasks].description);
                tasks[numTasks].isDone=false;
                numTasks++;
                cout<<"Task Added." <<ends;

            }

            else{
                cout<<"Task List is Full.Can not Add more tasks"<<endl;

            }
            
        }

        else if (choice == 2)
        {
            cout<<"Task:"<<endl;
            for (int  i = 0; i < numTasks; i++)
            {
                cout<<(i+1)<<".";
                if (tasks[i].isDone)
                {
                    cout<<"[X]";
                }
                else
                {
                    cout<<"[]";
                }
                cout<<tasks[i].description<<endl;
                 }
            }
            else if(choice==3)
            {
                cout<<"Enter the task number tp mark as done:";
                int taskNumber;
                cin>> taskNumber;
                if(taskNumber > 0  && taskNumber <=numTasks)
                {
                    tasks[taskNumber-1].isDone =true;
                    cout<<"Task marked as done."<<endl;
                }
                else{
                    cout<<"Invalid task number"<<endl;
                }
            }
            else if(choice==4)
            {
            
            cout << "Enter the task number to remove: ";
            int taskNumber;
            cin >> taskNumber;
            if (taskNumber > 0 && taskNumber <= numTasks) {
            
                for (int i = taskNumber - 1; i < numTasks - 1; i++) {
                    tasks[i] = tasks[i + 1];
                }
                numTasks--; 
                cout << "Task removed." << endl;
            } else {
                cout << "Invalid task number." << endl;
            }
            }
            
            else if(choice==5)
            {
                cout<<"Good Bye!"<<endl;
                break;
            }
            else{
                cout<<"Invalid choice.Please try again."<<endl;
            }

        }
        return 0;
    }