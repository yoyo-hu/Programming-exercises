#include <algorithm>

bool Great_Price(const TaoBaoItem & m1, const TaoBaoItem & m2) {
        return m1.price > m2.price;
}
bool Great_Sales(const TaoBaoItem & m1, const TaoBaoItem & m2) {
        return m1.volume_of_sales > m2.volume_of_sales;
}
class SortByPrice : public SortInterface {
 public:
  virtual void DoSort(TaoBaoItem item[], int size){
      sort(item,item+size,Great_Price);
  }
};
 
class SortBySales : public SortInterface {
 public:
  virtual void DoSort(TaoBaoItem item[], int size){
      sort(item,item+size,Great_Sales);
  }
};
 
class TaoBao {
 public:
  TaoBao(SortInterface* strategy){
      strategy_=strategy;
  }
  void SetSortStrategy(SortInterface* strategy){
      strategy_=strategy;
  }
 
  // Use current strategy_ to do the sort.
  void sort(TaoBaoItem item[], int size){
      strategy_->DoSort(item,size);
  }
 
 private:
  SortInterface *strategy_;
};