

#include<iostream>
using namespace std;
// find the secondd largest element in the given array where unique value are given.

int largest_element_index(int array[], int size){
    int max =INT16_MIN ;
    int maxindex =-1;
    for(int i=0 ; i<size ; i++){
        if(array[i]>max){
            max=array[i];
            maxindex =i;
        }

    }
    return maxindex;
}

int main(){
    int array[]= {2,3,5,7,6,1};
    int index_of_largest = largest_element_index(array , 6);
     //cout<<array[index_of_largest] <<endl;
    array[index_of_largest]=-1;

   int index_of_second_largest =largest_element_index(array , 6);
    cout<<array[index_of_second_largest] <<endl;
    
    return 0;
}
 
