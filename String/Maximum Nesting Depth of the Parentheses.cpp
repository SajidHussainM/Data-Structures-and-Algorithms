 int maxDepth(string s) {

      int n = s.size();

     

      if(n<=1) return 0;

     

        int current=0;

      int maxi=0;

     

      for(int i=0;i<n;i++){

        if(s[i]=='('){

          current++;

          maxi = max(maxi,current);

        }

        else if(s[i]==')')

          current--;

       

      }

     

      return maxi;

    }



