#include <bits/stdc++.h>
using namespace std;
vector<int>q;
void inorder(vector<int>v)
{
    vector<int>v1;
    int var;
    stack<int>st;
    st.push(1);
    var=2*st.top()-1;
    while(!st.empty() || var<v.size())
    {
        if(var>=v.size() || v[var]==-1)
        {
            //cout<<v[st.top()-1]<<" ";
            q.push_back(v[st.top()-1]);
            var=2*st.top();
            st.pop();
            continue;
        }
        st.push(var+1);
        var=2*(var+1)-1;
        
    }
}
int main()
{
    vector<int>v={1,3,2};
    inorder(v);
    for(int i=0;i<q.size();i++)
    {
    	cout<<q[i]<<" ";
	}
    return 0;
}

