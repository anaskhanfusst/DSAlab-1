//   QUESTION 1   .  Write a program to store 10 marks in an array and show 1st and 2nd highest marks on screen.

#include<iostream>
using namespace std;

int main()
{
    int marks[10], first, second;

    cout<<"Enter 10 marks: ";
    for(int i=0; i<10; i++)
        cin>>marks[i];

    first = second = marks[0];

    for(int i=0; i<10; i++)
    {
        if(marks[i] > first)
        {
            second = first;
            first = marks[i];
        }
        else if(marks[i] > second && marks[i] != first)
        {
            second = marks[i];
        }
    }

    cout<<"\n1st Highest: "<<first;
    cout<<"\n2nd Highest: "<<second<<endl;
    return 0;
}


//QUESTION 2     . Write a program to take size of an array from user and store elements in an array.Take any 
//element from user and search either entered number exist in an array or not using binary search.


#include<iostream>
using namespace std;

int main()
{
    int n, num, mid, low=0, high;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements (sorted): ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Enter number to search: ";
    cin>>num;

    high = n-1;
    bool found = false;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == num)
        {
            found = true;
            break;
        }
        else if(arr[mid] < num)
            low = mid+1;
        else
            high = mid-1;
    }

    if(found)
        cout<<"\nNumber found at index "<<mid<<endl;
    else
        cout<<"\nNumber not found."<<endl;

    return 0;
}

//QUESTION 3.     Write a program to take size of an array from user and store elements in an array. Take
//any element from user and search either entered number exist in an array or not using




#include<iostream>
using namespace std;

int main()
{
    int marks[6], sum=0;
    float avg;
    cout<<"Enter marks of 6 subjects: ";
    for(int i=0; i<6; i++)
    {
        cin>>marks[i];
        sum += marks[i];
    }

    avg = sum/6.0;
    cout<<"\nAverage = "<<avg;

    if(avg > 90) cout<<"\nGrade: A+";
    else if(avg > 80) cout<<"\nGrade: A";
    else if(avg > 70) cout<<"\nGrade: B";
    else if(avg > 60) cout<<"\nGrade: C";
    else if(avg > 50) cout<<"\nGrade: D";
    else cout<<"\nGrade: F";

    cout<<endl;
    return 0;
}







