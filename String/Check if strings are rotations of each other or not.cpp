


 

 

 

 

bool areRotations(string s1,string s2)

    {

        int n1=s1.size(),n2=s2.size();

       

        if(n1!=n2) return false;

       

       

        s1 = s1 + s1;

       

        if(s1.find(s2)!=string::npos) return true;

       

        return false;

       

    }

 

 

bool areRotations(string s1,string s2)

    {

        int n1=s1.size(),n2=s2.size();

       

        if(n1!=n2) return false;

       

       

        unordered_map<char,int> mpp;

       

        for(int i=0;i<n1;i++){

            mpp[s1[i]]++;

            mpp[s2[i]]--;

        }

       

        for(auto it:mpp){

            // cout<<it.second<<endl;

            if(it.second!=0) return false;

        }

       

        return true;

       

    }
