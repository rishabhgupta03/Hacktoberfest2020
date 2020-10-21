//Overview of hypothesis developed in kth symbol in grammar:
//The hypothesis of kth grammar function in designed such that the first half returns the same as N-1th row and second half in else condition gives the complement.
//Remember recursion work like magic ,you don't have to think how it works, just have good observation skills and compute only till the second last step.
//Eg:
//Input: N = 4, K = 5
//Output:
//N=1 0
//N=2 0 1
//N=3 0 1 1 0
//N=4 0 1 1 0 1 0 0 1

class Solution {
public:
    int kthGrammar(int N, int K) {
    //base condition
        if(N==1||K==1)
            return 0;
        int mid=pow(2,N-1)/2;
        //hypothesis and induction
        if(K<=mid)
            return kthGrammar(N-1,K);
        else
            return !kthGrammar(N-1,K-mid);

    }
};
