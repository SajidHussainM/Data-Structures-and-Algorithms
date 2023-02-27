string reverseWords(string s) {

        int i=0,n= s.length();

        string result;

      

       

       

        while(i<n){

   

            //This is for skipping spaces

       while(i<n && s[i]==' ') i++;

        if(i>=n) break;

       

         //Finding the start of the word

         int j=i;

       

            //This for finding the first word

        while(j<n && s[j]!=' ') j++;

           

           

 

        //first time    

        if(result.length()==0) result = s.substr(i,j-i);

       

        else result =  s.substr(i,j-i) + " " + result;

           

          

        i=j+1;

           

        }

       

        return result;

}

