class Solution {
public:
    int poorPigs(int buckets, int poisonTime, int totalTime) {
    int t=totalTime/poisonTime;
    int i=0;
    while(pow(t+1,i)<buckets) i++;
    return i;
}
};