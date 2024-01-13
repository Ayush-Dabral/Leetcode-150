#include <iostream>
#include<vector>
using namespace std;

class MergeSortedArray {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size1 = nums1.size();
        if(!n)
            return;
        int i = m-1, j = n-1, end = size1 - 1;
        while(i != -1 && j != -1) {
            if(nums1[i] > nums2[j]) {
                nums1[end] = nums1[i];
                i--;
                end--;
            }
            else {
                nums1[end] = nums2[j];
                j--;
                end--;
            }
        }
        for(int iter = j; iter >= 0; iter--) {
            nums1[end] = nums2[iter];
            end--;
        }
        cout<<"Result: ";
        return;
    }
};

int main() {
    int len, m, n, x;
    cout<<"Enter the length of the first main vector"<<endl;
    cin>>len;
    cout<<"Enter the value of m and n"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of nums1"<<endl;
    vector<int> nums1(len, 0), nums2;
    for(int i = 0; i < m; i++) {
        cin>>x;
        nums1[i] = x;
    }
    cout<<"Enter the elements of nums2"<<endl;
    for(int i = 0; i < n; i++) {
        cin>>x;
        nums2.push_back(x);
    }
    MergeSortedArray obj1;
    obj1.merge(nums1,m,nums2,n);
    for(int i = 0; i < len; i++) {
        cout<<nums1[i]<<" ";
    }
    return 0;
}