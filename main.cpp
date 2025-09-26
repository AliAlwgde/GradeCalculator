#include <iostream>
using namespace std;
void gradesStore(int arr[], int &num){
    for(int i=0; i<num; i++){
        cout<<"Input value "<<i<<endl;
        cin>>arr[i];
    }
}
void maxGrades(int arr[], int &numbers2){
    int maxVal=0;
    for(int i=0; i<numbers2; i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    cout<<"The greatest grade:"<<maxVal;
}
void minVal(int arr[], int &numbers3){
    int minGrade=100;
    for(int i=0; i<numbers3; i++){
        if(arr[i]<minGrade){
            minGrade=arr[i];
        }
    }
    cout<<"\nLowest grade is: "<<minGrade<<endl;
}
void avgVal(int arr[], int &numbers4){
    int avgGrade=0;
    for(int i=0; i<numbers4; i++){
        avgGrade+=arr[i];
    }
    avgGrade=avgGrade/numbers4;
    cout<<"The average is: "<<avgGrade<<endl;
}
int main(){
    int numbers;
    cout<<"Please input the loop number. "<<endl;
    cin>>numbers;
    int arr[numbers];
    gradesStore(arr, numbers);
    maxGrades(arr, numbers);
    minVal(arr, numbers);
    avgVal(arr, numbers);
    return 0;
}
