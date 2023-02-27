 string frequencySort(string s) {

        map<char,int> mp;

      int n = s.size();

     

      for(int j=0;j<n;j++){

        mp[s[j]]++;

      }

     

      priority_queue<pair<int,char>> pq;

     

      for(auto i:mp){

        pq.push({i.second,i.first});

      }

     

     

      string ans;

     

     

      while(!pq.empty()){

//this function is for repeating the given char no of times

        ans += string(pq.top().first,pq.top().second);

        pq.pop();

      }

     

 

     

      return ans;

    }

