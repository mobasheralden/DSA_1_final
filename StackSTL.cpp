#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    cout << "Top value is: " << st.top() << endl;
    st.pop();
    st.pop();
    
    cout << st.empty() << endl;
}
