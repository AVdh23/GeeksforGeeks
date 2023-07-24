class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
   vector<int> rightView(Node* root) {
        vector<int> result;
        max_level = 0;

        if (root == NULL)
            return result;

        rightV(result, root, 1);
        return result;
    }

    private:
    int max_level;

    void rightV(vector<int>& a, Node* root, int level) {
        if (root == NULL)
            return;

        if (max_level < level) {
            a.push_back(root->data);
            max_level = level;
        }

        rightV(a, root->right, level + 1);
        rightV(a, root->left, level + 1);
    }
};