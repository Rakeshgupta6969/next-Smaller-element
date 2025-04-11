class Solution{
 
    vector<int> nextSmallerEle(vector<int> arr){

     int n  =   arr.size();
     
     vector<int> ans(n);
     stack<int> st;
     st.push(-1);

     for(int i = n-1; i>=0; i--){
        int  curr = arr[i];


        while(st.top() >= curr){
            st.pop();
        }

        ans.push_back(st.top());
        st.push(curr);
     }


     return ans;


    }




};