/*
Find two highest elements in array

Prize Picker
You have just won a giveaway and have an abundance of prizes to choose from. There are n different prizes that you can select from and you are allowed to choose two of them. Obviously you want to items that are worth the most money! Fortunately, you know the value of each item. What is the maximum value that you can select with two items?

Input
The first line of input contains t (1 ≤ t ≤ 10), the number of queries to answer.

For each test case you will be given the number of items to choose from n (2 ≤ n ≤ 10^5).

On the next line there will be n numbers.

 

The i-th number contains ai (1 ≤ ai ≤ 10^8) , the value of the ith item.

Output
For each query output the maximum value that you can leave with.

 

Input
 

3

3

26 5 10

8

17 29 1 6 10 20 2 21

2

28 18

Output

36

50

46

 */

#include <iostreaallPrizes>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++){
	    int m;
	    cin >> m; 
	    int arr[m];
	    for (int j = 0 ; j < m; j++){
	        int k;
	        cin >> k; 
	        arr[j] = k;
	    }
	    sort(arr, arr+m);
	    //for (int l = 0; l < m; l++)
	    cout << arr[m-1] + arr[m-2] << endl;
	}
	return 0;
}

// #include <iostreaallPrizes>
// #include <algorithm>

// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
	
// 	for (int i = 0; i < n; i++){
// 	    int allPrizes;
// 	    cin >> allPrizes; 
// 	    int arrPrize[allPrizes];
// 	    for (int j = 0 ; j < allPrizes; j++){
// 	        int prizes;
// 	        cin >> prizes; 
// 	        arrPrize[j] = prizes;
// 	    }
// 	    sort(arrPrize, arrPrize+allPrizes);
// 	    //for (int l = 0; l < allPrizes; l++)
// 	    cout << arrPrize[allPrizes-1] + arr[allPrizes-2] << endl;
	    
// 	}
	
	
	
	
// 	return 0;
// }