int isValid(vector<vector<int>> mat){
      unordered_set<string> st;
       
       for(int i = 0; i<9; i++)
           for(int j = 0; j<9; j++){
               if(mat[i][j]!=0){
                   string s1 = "row"+to_string(i)+to_string(mat[i][j]);
                   string s2 = "col"+to_string(j)+to_string(mat[i][j]);


                   int subgrid = (i/3)*3 + j/3;   //Formula to find which subgrid the element lies in
                   string s3 = "box"+to_string(subgrid)+to_string(mat[i][j]);


                   if(st.count(s1) || st.count(s2) || st.count(s3))    //if any of them already exists, invalid
                       return 0;


                   st.insert(s1);
                   st.insert(s2);
                   st.insert(s3);
               }
           }
       return 1;
  }
