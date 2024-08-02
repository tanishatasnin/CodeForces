#include<bits/stdc++.h>

using namespace std ;


int maxArea(int  height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int currentArea = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
;

int main(){

int arr[]= {1,8,6,2,5,4,8,3,7};
int arr2=4;

int result = maxArea(arr);
 cout<<"result" <<result;





}
