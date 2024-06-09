------------------->>>>>>>>>>>>>>>> Approach   <<<<<<<<<<<<<<<<<<<------------------

//time complexity of this code is O(n)
//  space complexity of this code is O(1)

class Solution {
public:
   string largestOddNumber(string num)
{
    int ans = 0;
    int n = num.size()-1;
    cout<<n<<endl;
    for (int i = n; i >= 0; i--)
    {
        if ((num[i] - '0') % 2 != 0)
        {
            return num.substr(0, i+1);
        }
    }
    return "";
 }
};