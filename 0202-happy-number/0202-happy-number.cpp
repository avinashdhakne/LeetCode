class Solution {
public:
    
vector<int> findDigits(int n)
{
    vector<int> result;
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        result.push_back(digit);
    }
    reverse(result.begin(), result.end());
    return result;
}

bool isHappy(int n)
{
    unordered_set<int> nums;
    while(n!=1){
        if(nums.count(n) == 0){
            nums.insert(n);
        }
        else{
            return false;
        }
        
        int sum = 0;
        for(auto digit: findDigits(n))
            sum += pow(digit,2);
            
        n = sum;
    }
    
    return true;
}
};