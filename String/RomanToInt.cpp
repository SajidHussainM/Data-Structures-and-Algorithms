




int romanToInt(string s) {

       int n=s.size();

     

       map<char,int> mp;

      mp.insert({'I',1});

      mp.insert({'V',5});

      mp.insert({'X',10});

      mp.insert({'L',50});

      mp.insert({'C',100});

      mp.insert({'D',500});

      mp.insert({'M',1000});

     

      int res= mp[s[n-1]];

      for(int i=n-2;i>=0;i--){

//if the prev ele is less than the next we can decrement the stored result

        if(mp[s[i]]<mp[s[i+1]]){

          res -= mp[s[i]];

        }

        else{

          res += mp[s[i]];

        }

      }

     

      return res;

    }

