#include <vector>
#include <iostream>
using namespace std;

vector<int> countSort(vector<int>& inputArray)
{

    int N = inputArray.size();

    // Finding the maximum element of the Array
    //*Sometimes the problem can tell you which is the Maximum element
    int M = 0;

    for (int i = 0; i < N; i++)
        M = max(M, inputArray[i]);


    // Initializing countArray[] with 0
    // The range is [0,...,M+1]
    vector<int> countArray(M + 1, 0);

    // Mapping each element of inputArray[] as an index
    // of countArray[] array
    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;

    // Iterating the countArray[] and inserts the index in the 
    //outputArray[] until the countArray[] is 0
    int idx = 0;
    vector<int> outputArray(N);
    for(int i = 0; i < M+1; i++){
        int count = countArray[i];
        
        while(count--){
            outputArray[idx++] = i;
        }
    }

    return outputArray;
}
int main(){

    vector<int> inputArray = {0,1,3,4,2,3,4,4};

    inputArray = countSort(inputArray);

    for(int i : inputArray){
        cout << i << endl;
    }

    return 0;
}