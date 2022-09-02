#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
public:
vector<int> SumofTwo(vector<int> &nums , int target){
unordered_map <int , int> Dictionary;
for (int i = 0; i < nums.size() ; ++i){

	if (Dictionary.count(target-nums[i]))	
		return {Dictionary[target-nums[i]],i};
	else
		Dictionary.insert({nums[i],i});
		
			}

		throw;
	}

};
int main()
{
Solution s1;
vector <int> nums;
vector<int>a;
vector<int>c;
nums.push_back(1);
nums.push_back(10);
nums.push_back(3);
nums.push_back(4);
nums.push_back(5);
nums.push_back(6);



c =s1.SumofTwo(nums , 6);
for (int i = 0; i<c.size();i++){
		cout<<c[i]<<"\t";
		;
	}
	cout<<"Are the indices";
return 0;
}
