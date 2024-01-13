#include<iostream>
#include<vector>
using namespace std;

class RemoveElement {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(), ptr = 0;
        for(int i = 0; i < n; i++) {
            if( nums[i] != val) {
                nums[ptr] = nums[i];
                ptr++;
            }
        }
        cout<<"Result: ";
        return ptr;
    }
};

int main() {
    cout<<"Enter the size of the vector \n";
    int n, val;
    cin>>n;
    cout<<"Enter the elements of the vector \n";
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Enter the value to be deleted \n";
    cin>>val;
    RemoveElement ob1;
    int res = ob1.removeElement(nums, val);
    for(int i = 0; i < res; i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}