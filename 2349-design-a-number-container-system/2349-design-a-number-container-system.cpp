class NumberContainers {
public:
  unordered_map<int,int> m;
  unordered_map<int, priority_queue<int, vector<int>, greater<int>>> heaps;
  
  NumberContainers() {}

  void change(int index, int number) {
    m[index] = number;
    heaps[number].push(index);
  }

  int find(int number) {
    if(heaps.find(number) == heaps.end()) return -1;
    auto& h = heaps[number];
	// make sure that the index still has the item and hasn't changed
    while(!h.empty() && (m.find(h.top()) == m.end() || m[h.top()] != number))
      h.pop();

    return h.empty() ? -1 : h.top();
  }
};
/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */