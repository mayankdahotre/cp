#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



void preorder(TreeNode *root){
    if(!root) return;

    cout<<root->val;
    if(root->left) preorder(root->left);
    if(root->right) preorder(root->right);
}

void preorder(TreeNode *root){
    if(!root) return;

    stack<TreeNode *> st;
    st.push(root);

    while(!st.empty()){
        TreeNode *node = st.top();
        st.pop();

        cout<<node->val;

        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
    }
}







void inorder(TreeNode *root){
    if(!root) return;

    if(root->left) inorder(root->left);
    cout<<root->val;
    if(root->right) inorder(root->right);
}



void inorder(TreeNode *root){
    if(!root) return;

    stack<TreeNode *> st;
    TreeNode *curr = root;

    while(curr || !st.empty()){
        while(curr){
            st.push(curr);
            curr=curr->left;
        }

        TreeNode * node = st.top();
        st.pop();

        cout<<curr->val;

        curr=curr->right;
    }
}








void postorder(TreeNode * root){
    if(!root) return;

    if(root->left) postorder(root->left);
    if(root->right) postorder(root->right);
    cout<<root->val;
}

void postorder(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* curr = root;
    TreeNode* lastVisited = nullptr;

    while (curr || !st.empty()) {
        if (curr) {
            st.push(curr);
            curr = curr->left;
        } else {
            TreeNode* node = st.top();

            if (node->right && lastVisited != node->right) {
                curr = node->right;
            } else {
                cout << node->val << " ";
                lastVisited = node;
                st.pop();
            }
        }
    }
}

void postorder(TreeNode* root) {
    if (!root) return;

    stack<TreeNode*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        TreeNode* node = st1.top();
        st1.pop();
        st2.push(node);

        if (node->left) st1.push(node->left);
        if (node->right) st1.push(node->right);
    }

    while (!st2.empty()) {
        cout << st2.top()->val << " ";
        st2.pop();
    }
}










void levelorder(TreeNode *root){
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty()){
        TreeNode *node = q.front();
        q.pop();

        cout<<root->val;
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }

    return;
}



void levelorder(TreeNode *root){
    queue<TreeNode *> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        TreeNode *node = q.front();
        q.pop();

        if(!node){
            if(!q.empty()){
                q.push(nullptr);
                cout<<endl;
            }
            else{
                break;
            }
        }

        cout<<root->val;
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }

    return;
}








int height(TreeNode *root){
    if(!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1+max(lh,rh);
}






int count(TreeNode* root){
    if(!root) return 0;
    int lc = count(root->left);
    int rc = count(root->right);
    return lc+rc+1;
}





int sum(TreeNode *root){
    if(!root) return 0;
    int ls = sum(root->left);
    int rs = sum(root->right);
    return root->val+ls+rs;
}




bool identical(TreeNode *root1, TreeNode *root2){
    if(!root1 || !root2) return root1==root2;

    bool b1 = identical(root1->left, root2->left);
    bool b2 = identical(root1->right, root2->right);

    return b1 && b2 && root1->val==root2->val;
}



bool isSubTree(TreeNode* root1, TreeNode* root2){
    if(!root1 || !root2) return root1==root2;

    if(identical(root1, root2)) return true;

    return isSubTree(root1->left, root2) || isSubTree(root1->right, root2);
}


int diam(TreeNode *root){
    if(!root) return 0;

    int d1 = height(root->left) + height(root->right);
    int d2 = diam(root->left);
    int d3 = diam(root->right);

    return max({d1,d2,d3});
}







int diameter = 0;

int height(TreeNode *root){
    if(!root) return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    diameter = max(diameter, lh + rh);

    return 1 + max(lh, rh);
}

int diameterOfBinaryTree(TreeNode *root){
    diameter = 0; // reset
    height(root);
    return diameter;
}


vector<int> topview(TreeNode *root){
    vector<int> ans;
    map<int,int> m;

    if(!root) return {};
    queue<pair<TreeNode *,int>> q;
    q.push({root,0});

    while(!q.empty()){
        TreeNode *node = q.front().first;
        int hd = q.front().second;
        q.pop();

        if(m.find(hd)==m.end()) m[hd]=node->val;

        if(node->left) q.push({node->left,hd-1});
        if(node->right) q.push({node->right,hd+1});
    }

    for(auto [i,j]: m){
        ans.push_back(j);
    }

    return ans;
}



vector<int> bottomview(TreeNode *root){
    vector<int> ans;
    map<int,int> m;

    if(!root) return {};
    queue<pair<TreeNode *,int>> q;
    q.push({root,0});

    while(!q.empty()){
        TreeNode *node = q.front().first;
        int hd = q.front().second;
        q.pop();

        m[hd]=node->val;

        if(node->left) q.push({node->left,hd-1});
        if(node->right) q.push({node->right,hd+1});
    }

    for(auto [i,j]: m){
        ans.push_back(j);
    }

    return ans;
}


vector<int> KthLevel(TreeNode *root, int k){
    if(!root) return {};

    if(k == 1) return {root->val};

    vector<int> left = KthLevel(root->left, k-1);
    vector<int> right = KthLevel(root->right, k-1);

    left.insert(left.end(), right.begin(), right.end());

    return left;
}



vector<int> KthLevel(TreeNode *root, int k){
    if(!root) return {};

    vector<int> ans;
    int l=1;

    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty()){
        int sz = q.size();

        l++;
        for(int i=0; i<sz; i++){
            TreeNode *node = q.front();
            q.pop();

            if(l==k) ans.push_back(node->val);

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }

    return ans;
}


TreeNode *LCA(TreeNode *root, TreeNode *p, TreeNode *q){
    if(!root) return NULL;

    if(root==p || root==q) return root;

    TreeNode *lLCA = LCA(root->left, p, q);
    TreeNode *rLCA = LCA(root->right, p, q);

    if(lLCA && rLCA) return root;
    else if(!lLCA) return rLCA;
    else return lLCA;
}


// Build Tree
// Pre + In
// Post + In
// Level + In


int search(vector<int>& inorder, int left, int right, int val) {
    for (int i = left; i <= right; i++)
        if (inorder[i] == val) return i;
    return -1;
}

TreeNode* buildhelper(vector<int>& inorder, vector<int>& preorder, int& preIdx, int left, int right) {
    if (left > right) return NULL;

    int rootVal = preorder[preIdx];        
    TreeNode* root = new TreeNode(rootVal);

    int inIdx = search(inorder, left, right, rootVal);
    preIdx++;

    root->left  = buildhelper(inorder, preorder, preIdx, left, inIdx - 1);
    root->right = buildhelper(inorder, preorder, preIdx, inIdx + 1, right);

    return root;
}

TreeNode* buildTree(vector<int> inorder, vector<int> preorder) {
    int preIdx = 0;
    return buildhelper(inorder, preorder, preIdx, 0, inorder.size() - 1);
}







int search(vector<int>& inorder, int left, int right, int val) {
    for (int i = left; i <= right; i++)
        if (inorder[i] == val) return i;
    return -1;
}

TreeNode* buildhelper(vector<int>& inorder, vector<int>& postorder,
                      int& postIdx, int left, int right) {
    if (left > right) return NULL;

    int rootVal = postorder[postIdx--];        // ✅ traverse from end
    TreeNode* root = new TreeNode(rootVal);

    int inIdx = search(inorder, left, right, rootVal);

    // ✅ build RIGHT first, since postorder is left→right→root
    root->right = buildhelper(inorder, postorder, postIdx, inIdx + 1, right);
    root->left  = buildhelper(inorder, postorder, postIdx, left, inIdx - 1);

    return root;
}

TreeNode* buildTree(vector<int> inorder, vector<int> postorder) {
    int postIdx = postorder.size() - 1;       // ✅ start from last element
    return buildhelper(inorder, postorder, postIdx, 0, inorder.size() - 1);
}






TreeNode* buildhelper(vector<int>& inorder, vector<int> levelorder,
                      int left, int right) {
    if (left > right || levelorder.empty()) return NULL;

    // first element of levelorder within [left,right] is the root
    int rootVal = levelorder[0];
    TreeNode* root = new TreeNode(rootVal);

    int inIdx = -1;
    for (int i = left; i <= right; i++)
        if (inorder[i] == rootVal) { inIdx = i; break; }

    // filter levelorder nodes into left and right subtrees
    // using the inorder index as the boundary
    unordered_set<int> leftSet(inorder.begin() + left,
                               inorder.begin() + inIdx);

    vector<int> leftLevel, rightLevel;
    for (int i = 1; i < levelorder.size(); i++) {
        if (leftSet.count(levelorder[i]))  leftLevel.push_back(levelorder[i]);
        else                               rightLevel.push_back(levelorder[i]);
    }

    root->left  = buildhelper(inorder, leftLevel,  left,      inIdx - 1);
    root->right = buildhelper(inorder, rightLevel, inIdx + 1, right);

    return root;
}

TreeNode* buildTree(vector<int> inorder, vector<int> levelorder) {
    return buildhelper(inorder, levelorder, 0, inorder.size() - 1);
}







// Preorder + Postorder
// ambigous case, node must have 0 or 2 children 

TreeNode* buildhelper(vector<int>& preorder, vector<int>& postorder,
                      int& preIdx, int postLeft, int postRight) {
    if (postLeft > postRight) return NULL;

    int rootVal = preorder[preIdx++];
    TreeNode* root = new TreeNode(rootVal);

    if (postLeft == postRight) return root;   // leaf node

    // next element in preorder is the left child's root
    // find it in postorder to determine left subtree size
    int leftRootVal = preorder[preIdx];
    int leftPostIdx = -1;
    for (int i = postLeft; i < postRight; i++)
        if (postorder[i] == leftRootVal) { leftPostIdx = i; break; }

    int leftSize = leftPostIdx - postLeft;    // size of left subtree

    root->left  = buildhelper(preorder, postorder, preIdx,
                              postLeft, postLeft + leftSize);
    root->right = buildhelper(preorder, postorder, preIdx,
                              postLeft + leftSize + 1, postRight - 1);

    return root;
}

TreeNode* buildTree(vector<int> preorder, vector<int> postorder) {
    int preIdx = 0;
    return buildhelper(preorder, postorder, preIdx, 0, postorder.size() - 1);
}






int sumTree(TreeNode *root){
    if(!root) return 0;

    int lsum = sumTree(root->left);
    int rsum = sumTree(root->right);

    return root->val+lsum+rsum;
}




void dfshelper(TreeNode *root, vector<string> &ans, string s){
    if(!root) return;

    if(!s.empty()) s += "->";
    s += to_string(root->val);

    // leaf node
    if(!root->left && !root->right){
        ans.push_back(s);
        return;
    }

    dfshelper(root->left, ans, s);
    dfshelper(root->right, ans, s);
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    dfshelper(root, ans, "");
    return ans;
}




void allpaths(TreeNode* root, vector<string> &ans, string s){
    if(!root->left && !root->right){
        ans.push_back(s);
        return;
    }

    if(root->left) allpaths(root->left, ans, s+"->"+to_string(root->left->val));
    if(root->right) allpaths(root->right, ans, s+"->"+to_string(root->right->val));
}

vector<string> binTreepaths(TreeNode* root){
    vector<string> ans;
    string s = to_string(root->val);
    allpaths(root, ans, s);
    
    return ans;
}



int maxwidth(TreeNode *root){
    int ans = 0;
    queue<pair<TreeNode*, int>> q;
    q.push({root,0});

    while(!q.empty()){
        int sz = q.size();

        int stidx = q.front().second;
        int endidx = q.back().second;

        ans = max(ans, endidx - stidx + 1);

        for(int i=0; i<sz; i++){
            TreeNode *node = q.front().first;
            int idx = q.front().second;
            q.pop();

            if(node->left) q.push({node->left, 2*idx+1});
            if(node->right) q.push({node->right, 2*idx+2});
        }
    }

    return ans;
}







// Morris Traversal

void inorder(TreeNode* root){
    TreeNode* curr = root;

    while(curr){
        if(!curr->left){
            cout << curr->val << " ";
            curr = curr->right;
        } else {
            TreeNode* prev = curr->left;

            while(prev->right && prev->right != curr)
                prev = prev->right;

            if(!prev->right){
                prev->right = curr;
                curr = curr->left;
            } else {
                prev->right = NULL;
                cout << curr->val << " ";
                curr = curr->right;
            }
        }
    }
}



void preorder(TreeNode* root){
    TreeNode* curr = root;

    while(curr){
        if(!curr->left){
            cout << curr->val << " ";
            curr = curr->right;
        } else {
            TreeNode* prev = curr->left;

            while(prev->right && prev->right != curr)
                prev = prev->right;

            if(!prev->right){
                cout << curr->val << " "; // difference from inorder
                prev->right = curr;
                curr = curr->left;
            } else {
                prev->right = NULL;
                curr = curr->right;
            }
        }
    }
}



void reverse(TreeNode* from, TreeNode* to){
    if(from == to) return;
    TreeNode *x = from, *y = from->right, *z;
    while(true){
        z = y->right;
        y->right = x;
        x = y;
        y = z;
        if(x == to) break;
    }
}

void printReverse(TreeNode* from, TreeNode* to){
    reverse(from, to);
    TreeNode* p = to;
    while(true){
        cout << p->val << " ";
        if(p == from) break;
        p = p->right;
    }
    reverse(to, from);
}

void postorder(TreeNode* root){
    TreeNode dummy(0);
    dummy.left = root;
    TreeNode* curr = &dummy;

    while(curr){
        if(curr->left){
            TreeNode* prev = curr->left;

            while(prev->right && prev->right != curr)
                prev = prev->right;

            if(!prev->right){
                prev->right = curr;
                curr = curr->left;
            } else {
                printReverse(curr->left, prev);
                prev->right = NULL;
                curr = curr->right;
            }
        } else {
            curr = curr->right;
        }
    }
}



