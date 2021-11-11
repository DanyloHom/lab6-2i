//6-2 itter
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

int rand(const int A,const int B) //функція, що генерує випадкові числа 
{
    int x = A + rand() % (B - A + 1);
    return x;
}

void print(int *arr, const int size) //функція, що виводить елементи масиву
{
    for(int i=0; i<size; i++)
    {
        cout<< setw(4) << arr[i];
    }
    cout << endl;
}

void create(int *arr,const int size,const int A,const int B) //функція, що створює масив
{
    for(int i=0; i<size; i++)
    {
        arr[i]=rand(A,B);
    }
}


int first(int *arr, int size)
{
    int g;
    for(int i=0; i < size; i++)
    {
        if(arr[i]%2 == 0)
        g = arr[i];

        break;
    }
    return g;
}

int Min(int *arr, int size, int min)
{
    for(int i=0; i < size; i++)
    {
        if(arr[i]%2 == 0 && arr[i] < min)
        min = arr[i];
    }
    return min;
}


int main()
{
    srand((unsigned)time(NULL));
    const int n = 20;
    int a[n];
    int m;
    

    int A = -100;
    int B = 100;

    create(a, n, A, B);
    print(a, n);
    m = first(a, n);
    cout << setw(4) << "min = "<<Min(a, n, m)<< endl;

 return 0;
}
