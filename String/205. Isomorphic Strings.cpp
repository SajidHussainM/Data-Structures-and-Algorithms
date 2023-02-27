

boolisIsomorphic(string s, string t) {       
  if(s.size()!=t.size()) return false;      
  int n = s.size();            
  unordered_map<char,int> mp1;      
  unordered_map<char,int> mp2;            
  for(int i=0;i<n;i++){                        
    /* If we find irregular charactersthere is alraedy 0 ( for ex 'C') in that new chars place but 'b' was previouslymarked as i+1 the         
    eg: abb             
    abc    
    1 1                    
    2 2                    
    2 0                   
    These are the map values */        
    if(mp1[s[i]]!=mp2[t[i]]){          
      cout<<mp1[s[i]]<<""<<mp2[t[i]]<<endl;            
      return false;        }                 
    mp1[s[i]] = i+1;          
    mp2[t[i]] = i+1;                
    cout<<mp1[s[i]]<<""<<mp2[t[i]]<<endl;                 
  }                   
  return true;    
}
