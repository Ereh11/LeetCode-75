class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i < flowerbed.size() && n; i++)
        {
            if(!flowerbed[i]){
                if(i && i + 1 != flowerbed.size() && !flowerbed[i - 1] && !flowerbed[i + 1])
                    n--, flowerbed[i] = 1;
                else if(!i && i + 1 != flowerbed.size() && !flowerbed[i + 1])
                    n--, flowerbed[i] = 1;
                else if(flowerbed.size() == 1)
                    n--, flowerbed[i] = 1;
                else if(i + 1 == flowerbed.size() && !flowerbed[i - 1])
                    n--, flowerbed[i] = 1;
            }
        }
        return n == 0;
    }
};