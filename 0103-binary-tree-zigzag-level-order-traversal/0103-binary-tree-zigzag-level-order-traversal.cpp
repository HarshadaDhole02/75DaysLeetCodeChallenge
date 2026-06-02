
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>result;
        if(root==NULL)
        {
            return result;
        }
       
        stack<TreeNode*> currlevel;
        stack<TreeNode*> nextlevel;
        bool leftright=true;
         vector<int>level;
        currlevel.push(root);
        while(!currlevel.empty())
        {
            TreeNode* temp = currlevel.top();
            currlevel.pop();
           

            if(temp!=NULL)
            {
               
                 level.push_back(temp->val);
                if(leftright == true)
                {
                    if(temp->left!=NULL)
                    {
                        nextlevel.push(temp->left);
                    }
                     if(temp->right!=NULL)
                    {
                        nextlevel.push(temp->right);
                    }
                }
                else
                {
                     if(temp->right!=NULL)
                    {
                        nextlevel.push(temp->right);
                    }
                    if(temp->left!=NULL)
                    {
                        nextlevel.push(temp->left);
                    }
                }
            }
            if(currlevel.empty())
            {
               result.push_back(level);
                 level.clear();
               leftright = !leftright;
                swap(currlevel,nextlevel);
            }

        }
return result;
    }
};