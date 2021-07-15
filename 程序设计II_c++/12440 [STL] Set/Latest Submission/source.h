 int sumOfIntersection(const set<int>& set1, const set<int>& set2){
     int result=0;
     for(set<int>::iterator iter=set1.begin();iter!=set1.end();iter++){
         if(set2.find(*iter)!=set2.end())
            result+=(*iter);
     }
     return result;
 }