﻿
#include<iostream>
using namespace  std;

struct TreeNode
{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) :val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
class  Solution {
public:
	void recoverTree(TreeNode* root) {

	}
};
int main()
{
	return 0;
}