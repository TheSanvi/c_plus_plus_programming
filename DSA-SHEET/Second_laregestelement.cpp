// Second Largest
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {
        int largest = arr[0];
        int Slargest = -1;
        
        for (int i =1; i<n; i++){
            if (arr[i]>largest){
                Slargest = largest;
                largest =arr[i];
            }
            else if(arr[i]<largest && arr[i]> Slargest){
                Slargest=arr[i];
            }
        }
        return Slargest;
        
    }
};