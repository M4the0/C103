#include<iomanip>
#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>

//int* p = new int;
//in* q = new int[2]
//x = 10;
///int* y =new int[5];
//new <tipo de dados> [x]

using namespace std;

int partition(int *arr, int start, int end){
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex){
 
        while (arr[i] <= pivot){
            i++;
        }
 
        while (arr[j] > pivot){
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int *arr, int start, int end){
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}

int main(){

    int N,Q,x,y,count;
    
    cin>>N>>Q;
    int* m = new int[N];

    while(N != 0 && Q != 0){

        for(int i = 0; i<N; i++){
            cin>>x;
            m[i] = x;
        }

        //Ordenar
        quicksort(m,0,N-1);

        cout<<"CASE# " << count << ";" <<endl;

        count++;

        cin>>N>>Q;


    }




    delete[] m;
    return 0;
}