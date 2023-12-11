#include<bits/stdc++.h>
using namespace std;

int main()
{
         int n;

        cin>>n;

        vector<int>v(n);

        v[0]=1;

        v[1]=1;

        for(int i=2;i<n;i++){

                v[i] = v[i-1]+v[i-2];

                v.push_back(v[i]);

        }

        cout << v[n-1];
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
}
