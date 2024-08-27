#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3};
    int length = 3;
	int index;
            int element;
            if (length < 5)
            {
                cout << "Enter the index you want to insert element" << endl;
                cin >> index;
                cout << "enter the element" << endl;
                cin >> element;
                if(index>=0 && index<=length){
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
		for (int i = 0; i < length; i++)
            {
                cout << a[i] << endl;
            }
}
