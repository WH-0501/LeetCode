/*************************************************************************
    > File Name: main.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu 23 Nov 2017 02:47:34 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hash;
		vector<int> result;

		for(int i = 0; i < nums.size(); i++) {
			int numToFind = target - nums[i];

			if(hash.find(numToFind) != hash.end()) {
				result.push_back(hash[numToFind] + 1);
				result.push_back(i + 1);
				return result;
			}
			hash[nums[i]] = i;
		}
		return result;
	}		
};

int main(int argc, char** argv)
{
	int array[] = {1, 6, 2, 3, 4, 5};
	size_t count = sizeof(array)/sizeof(array[0]);

	Solution sol;
	vector<int> vec(array, array+count);

	vector<int> result = sol.twoSum(vec, 8);

	for(int i = 0; i < result.size(); i++) {
		cout << result.at(i) << endl;
	}

	return 0;
}
