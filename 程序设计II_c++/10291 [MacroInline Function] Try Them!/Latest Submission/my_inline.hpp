
inline int inline_MAX(int x,int y){
  return x > y ? x : y;
}
inline void inline_SWAP(int &a,int &b){
  a = a ^ b;
  b = b ^ a;
  a = a ^ b;
}