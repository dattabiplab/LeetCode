class Solution {
public:
    int subtractProductAndSum(int n) {
        int pdt =1,sum=0,digit,answer;
        while(n!=0){
            digit = n%10;
            sum+=digit;
            pdt *=digit;
            n/=10;
        }
        answer = pdt-sum;
        return answer;
    }
};