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
