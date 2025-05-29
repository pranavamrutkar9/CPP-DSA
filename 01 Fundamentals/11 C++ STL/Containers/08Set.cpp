#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> st;
    st.insert(9);
    st.insert(9);
    st.insert(5);
    st.insert(5);

    for (int i:st)
    {
        cout<<i<<" "; 
    }
    
    cout<<st.begin();
}
