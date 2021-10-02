//LEETCODE LINK : https://leetcode.com/problems/lru-cache/


//USE OF LISTS AND splice FUNCTION

class LRUCache {
public:
    
    list<pair<int,int>>l;
    unordered_map<int,list<pair<int,int>>::iterator>mp;
    int cap;
    
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        int ans=mp[key]->second;
        l.splice(l.begin(),l,mp[key]);
        return ans;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            l.splice(l.begin(),l,mp[key]);
            auto it=l.begin();
            it->second=value;
            return;
        }
        if(mp.size()==cap){
            auto it=l.end();
            it--;
            mp.erase(it->first);
            l.erase(it);
        }
        auto it=l.begin();
        l.insert(it,make_pair(key,value));
        mp[key]=l.begin(); 
    }
};



//NAIVE APPROACH OF USING DOUBLY LINKED LIST

class LRUCache {
public:
    class node{
      public:
        int key,val;
        node *prev,*next;
        node(int key_,int val_){
            key=key_;
            val=val_;
        }
    };
    
    node *head=new node(-1,-1);
    node *tail=new node(-1,-1);
    
    int cap;
    unordered_map<int,node*>mp;
    
    void delete_node(node* nan){
        nan->prev->next=nan->next;
        nan->next->prev=nan->prev;
        mp.erase(nan->key);
    }
    void add_node(int key_,int val){
        node * nan=new node(key_,val);
        node *p=head->next;
        nan->prev=head;
        head->next=nan;
        nan->next=p;
        p->prev=nan;
        mp[key_]=nan;
    }
    
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key_) {
        if(mp.find(key_)==mp.end()) return -1;
        node *temp=mp[key_];
        int ans=temp->val;
        delete_node(temp);
        add_node(key_,ans);
        return ans;
        
    }
    
    void put(int key_, int value) {
        if(mp.find(key_)!=mp.end()){
            delete_node(mp[key_]);
        }
        if(mp.size()==cap){
            delete_node(tail->prev);
        }
        add_node(key_,value);
    }
};
