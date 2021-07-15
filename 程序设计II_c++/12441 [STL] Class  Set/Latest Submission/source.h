using namespace std;
template< typename T >
class Set
{
public:
 Set() {
     data=NULL;
     maxSize=0;
     count=0;
 }
 Set( int _maxSize ){
     maxSize=_maxSize;
     data=new T[maxSize];
     count=0;
 }
 ~Set(){
     if(data!=NULL){
         delete[] data;
     }
 }
 Set( const Set&other ) {
     maxSize=other.maxSize;
     count=other.count;
     data=new T[maxSize];
     for(int i=0;i<count;i++){
         data[i]=other.data[i];
     }
 }
 int ifInclude(T val){
     for(int i=0;i<count;i++){
         if(data[i]==val)
         return i;
     }
     return -1;
 }
 Set operator+( const Set& s ){
     Set result(maxSize+s.maxSize);
     for(int i=0;i<count;i++){
         result.data[i]=data[i];
     }
     result.count=count;
     for(int i=0;i<s.count;i++){
         if(result.ifInclude(s.data[i])==-1){
                 result.data[result.count++]=s.data[i];
         }
     }
     return result;
 }
 Set operator-( const Set& s ){
     Set result(*this);
     int place;
     for(int i=0;i<s.count;i++){
         place=result.ifInclude(s.data[i]);
         if(place!=-1){
             for(int j=place+1;j<result.count;j++){
                 result.data[j-1]=result.data[j];
             }
             result.count--;
         }
     }
     return result;
 }
 void operator=( const Set& s ){
     if(maxSize!=s.maxSize){
         delete data;
         maxSize=s.maxSize;
         data=new T[maxSize];
     }
     count=s.count;
     for(int i=0;i<count;i++){
         data[i]=s.data[i];
     }
 }
 bool insert( T newItem ) {
     if(ifInclude(newItem)!=-1)
      return 0;
     if(count<maxSize){
        data[count++]=newItem;
        return 1;
        }
        return 0;
 }
 bool erase( T targetItem ){
     int place=ifInclude(targetItem);
     if(place!=-1){
        for(int j=place+1;j<count;j++){
            data[j-1]=data[j];
        }
        return 1;
     }
     return 0;
 }
 void print() const {
     for(int i=0;i<count;i++){
         cout<<data[i]<<' ';
     }
     cout<<endl;
 }
 T* getData() const {
     return data;
 }
 int getCount() const {
     return count;
 }
 int getMaxSize() const {
     return maxSize;
 }
private:
 int count ;
 int maxSize ;
 T* data ;
} ;