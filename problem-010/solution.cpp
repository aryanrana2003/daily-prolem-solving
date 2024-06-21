class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int unst = 0;
        int n = customers.size();

        for(int i =0;i<minutes;i++){
            unst += customers[i] * grumpy[i];
        }
        int maxi = unst; 
        for(int i = minutes;i<n;i++){
             unst += customers[i] * grumpy[i];
              unst -= customers[i - minutes] * grumpy[i - minutes];

              maxi = max(maxi , unst);
        }
        int tcust =  maxi;
        for(int i =0;i<n;i++){
            tcust += customers[i] * (1-grumpy[i]);
        }

        return tcust;
        
    }
};