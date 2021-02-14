queue<int> rev(queue<int> q)
{
    deque<int>r;
    int i=0;
    while(q.size()>0)
    {
        int a=q.front();
        q.pop();
        r.push_front(a);
    }
    while(r.size()>0)
    {
        q.push(r.front());
        r.pop_front();
    }
    return q;
}


///  method 2 recursively

void reverseQueue(queue<long long int>& q) 
{ 
    // Base case 
    if (q.empty()) 
        return; 
  
    // Dequeue current item (from front)   
    long long int data = q.front(); 
    q.pop(); 
  
    // Reverse remaining queue   
    reverseQueue(q); 
  
    // Enqueue current item (to rear)   
    q.push(data); 
} 
