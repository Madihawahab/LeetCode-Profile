class SmallestInfiniteSet {
public:
    int currentSmallest;
    set<int> st;

    SmallestInfiniteSet() {

        currentSmallest = 1;
        
    }
    
    int popSmallest() {

        int result;

        if(!st.empty()){
            result = *st.begin();
            st.erase(st.begin());
        }else{
            result = currentSmallest;
            currentSmallest += 1;
        }

        return result;

    }
    
    void addBack(int num) {
        if(num >= currentSmallest || st.find(num) != st.end()){
                return;
        }
        st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */