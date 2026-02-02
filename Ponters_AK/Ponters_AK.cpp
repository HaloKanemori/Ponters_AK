#include <iostream>
#include <vector>

using namespace std;

void add(int* ptr) {
    (*ptr)++;
}

int main()
{
    int a = 0;
    int b = 0;

    cout << "please input 2 numbers:" << endl;;
    cin >> a >> b;


    int* a_ptr = &a;
    int* b_ptr = &b;

   

    cout << "You have input " << *a_ptr << " which is in " << a_ptr << endl;
    cout << "You have input " << *b_ptr << " which is in " << b_ptr << endl;


    const int arr_size =7;

    int arr[arr_size] = { 22,2,33,4,5,47,13};
    int* ptr_max = arr;

    /*cout << *arr_ptr << endl;
    cout << arr[0] << endl;
    cout << *(arr_ptr + 1) << endl;*/

    
    for (int* ptr = arr; ptr < arr + arr_size; ptr++){
        if (*ptr > *ptr_max) {
            ptr_max = ptr;
        }
    }
    cout << *ptr_max;




    //int* ptr = arr;
    //int* end_ptr = arr + arr_size;

    //while (ptr != end_ptr) {
     //   cout << *ptr << endl;
 //       ptr++;
    //}

}

/*
int search(vector<int>& arr, int x) {

    // Iterate over the array in order to
    // find the key x
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == x)
            return i;
    return -1;
}
*/