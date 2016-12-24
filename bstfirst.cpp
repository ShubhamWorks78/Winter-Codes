#include <iostream>
using namespace std;
int ans = 0;
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 		ans += 1;
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
int main(){
	struct node *root = NULL;
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for (i = n-1 ; i >= 0; i--)
        heapify(a, n, i);
    cout<<ans;
}
