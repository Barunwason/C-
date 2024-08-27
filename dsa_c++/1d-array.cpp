#include <iostream>
using namespace std;
int a[5] = {1, 2, 3, 4};
int b = 1;
int choice;
int choose_operation()
{
    cout << endl;
    cout << "1. traversal" << endl;
    cout << "2. insertion" << endl;
    cout << "3. deletion" << endl;
    cout << "4. sorting" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    int length = 4;
    choose_operation();
    while (b == 1)
    {
        if (choice == 1)
        { // traversal
            for (int i = 0; i < length; i++)
            {
                cout << a[i];
            }
            choose_operation();
        }
        else if (choice == 2)
        { // insertion
            int index;
            int element;
            if (length < 5)
            {
                cout << "Enter the index you want to insert element" << endl;
                cin >> index;
                cout << "enter the element" << endl;
                cin >> element;
                if (index >= 0 && index <= length)
                {
                    if (index == length)
                    {
                        a[index] = element;
                    }
                    else
                    {
                        for (int i = length; i > index; i--)
                        {
                            a[i] = a[i - 1];
                        }
                        a[index] = element;
                    }
                }
                length++;
            }
            else if (length >= 5)
            {
                cout << "array is full. You can't insert anymore element";
            }

            choose_operation();
        }
        else if (choice == 3)
        {
            //deleting
            int index;
            cout << "Enter the index you want to insert element" << endl;
            cin >> index;
            if (index >= 0 && index <= length)
                {
                    if (index == length)
                    {
                        length--;
                    }
                    else
                    {
                        for (int i = index; i < length; i++)
                        {
                            a[i] = a[i + 1];
                        }
                        length--;
                    }
                }
                else if (length <= 0)
            {
                cout << "array is empty. You can't delete anymore element";
            }
            choose_operation();
            }
            
        
        else if (choice == 4)
        {
            //insertion sort
            choose_operation();
        }
        else
        {
            cout << "you have entered the wrong option" << endl;
            choose_operation();
        }
    }}
